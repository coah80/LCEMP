#include "UIRenderer.h"
#include "../../Windows_Libs/Dev/Render/Renderer.h"
#include <fstream>
#include <sstream>
#include <cstring>
#include <algorithm>
#include <cstdio>

// ---------------------------------------------------------------------------
// Vertex struct matching PF3_TF2_CB4_NB4_XW1 (32 bytes)
// Layout: position(3f) + texcoord(2f) + color(4B) + normal(4B) + pad(4B)
// ---------------------------------------------------------------------------
#pragma pack(push, 1)
struct UIVertex {
    float x, y, z;
    float u, v;
    uint8_t r, g, b, a;
    uint8_t nx, ny, nz, nw;
    uint32_t pad;
};
#pragma pack(pop)
static_assert(sizeof(UIVertex) == 32, "UIVertex must match PF3_TF2_CB4_NB4_XW1 stride");

// ---------------------------------------------------------------------------
// Helpers
// ---------------------------------------------------------------------------

static inline UIVertex makeVertex(float x, float y, float u, float v,
                                  uint8_t r, uint8_t g, uint8_t b, uint8_t a)
{
    UIVertex vtx;
    vtx.x = x;
    vtx.y = y;
    vtx.z = 0.0f;
    vtx.u = u;
    vtx.v = v;
    vtx.r = r;
    vtx.g = g;
    vtx.b = b;
    vtx.a = a;
    vtx.nx = 0;
    vtx.ny = 0;
    vtx.nz = 0;
    vtx.nw = 0;
    vtx.pad = 0;
    return vtx;
}

static uint64_t packKerningKey(uint32_t first, uint32_t second)
{
    return (static_cast<uint64_t>(first) << 32) | second;
}

// Parse an integer value from a "key=value" token
static int parseBMFontInt(const std::string &token)
{
    auto eq = token.find('=');
    if (eq == std::string::npos) return 0;
    return std::atoi(token.c_str() + eq + 1);
}

// Parse a quoted string value from a "key=\"value\"" token
static std::string parseBMFontString(const std::string &token)
{
    auto eq = token.find('=');
    if (eq == std::string::npos) return "";
    std::string val = token.substr(eq + 1);
    // Strip quotes
    if (val.size() >= 2 && val.front() == '"' && val.back() == '"')
        val = val.substr(1, val.size() - 2);
    return val;
}

// ---------------------------------------------------------------------------
// init / shutdown
// ---------------------------------------------------------------------------

void UIRenderer::init(Renderer *renderer, int screenWidth, int screenHeight)
{
    m_renderer = renderer;
    m_screenWidth = screenWidth;
    m_screenHeight = screenHeight;
    m_clipStack.clear();
    m_textureCache.clear();
    m_fonts.clear();

    // Create a 1x1 white texture for solid-color quads.
    // 0xFFFFFFFF = RGBA(255,255,255,255) regardless of channel ordering.
    m_whiteTexture = m_renderer->TextureCreate();
    if (m_whiteTexture != INVALID_TEXTURE) {
        uint32_t white = 0xFFFFFFFF;
        m_renderer->TextureBind(m_whiteTexture);
        m_renderer->TextureSetTextureLevels(1);
        m_renderer->TextureData(1, 1, &white, 0, C4JRender::TEXTURE_FORMAT_RxGyBzAw);
        m_renderer->TextureSetParam(GL_TEXTURE_MIN_FILTER, GL_NEAREST);
        m_renderer->TextureSetParam(GL_TEXTURE_MAG_FILTER, GL_NEAREST);
        m_renderer->TextureSetParam(GL_TEXTURE_WRAP_S, GL_CLAMP);
        m_renderer->TextureSetParam(GL_TEXTURE_WRAP_T, GL_CLAMP);
    }
}

void UIRenderer::shutdown()
{
    // Free all cached textures
    for (auto &pair : m_textureCache) {
        if (pair.second != INVALID_TEXTURE)
            m_renderer->TextureFree(pair.second);
    }
    m_textureCache.clear();

    // Free white texture
    if (m_whiteTexture != INVALID_TEXTURE) {
        m_renderer->TextureFree(m_whiteTexture);
        m_whiteTexture = INVALID_TEXTURE;
    }

    m_fonts.clear();
    m_clipStack.clear();
    m_renderer = nullptr;
}

void UIRenderer::setScreenSize(int width, int height)
{
    m_screenWidth = width;
    m_screenHeight = height;
}

// ---------------------------------------------------------------------------
// Texture loading
// ---------------------------------------------------------------------------

UIRenderer::TextureHandle UIRenderer::loadTexture(const std::string &filepath)
{
    // Return cached handle if already loaded
    auto it = m_textureCache.find(filepath);
    if (it != m_textureCache.end())
        return it->second;

    // Use the renderer's existing libpng-based loader
    D3DXIMAGE_INFO info = {};
    int *pixelData = nullptr;
    int result = m_renderer->LoadTextureData(filepath.c_str(), &info, &pixelData);
    if (result != 0 || !pixelData) {
        m_textureCache[filepath] = INVALID_TEXTURE;
        return INVALID_TEXTURE;
    }

    TextureHandle tex = m_renderer->TextureCreate();
    if (tex == INVALID_TEXTURE) {
        delete[] pixelData;
        m_textureCache[filepath] = INVALID_TEXTURE;
        return INVALID_TEXTURE;
    }

    m_renderer->TextureBind(tex);
    m_renderer->TextureSetTextureLevels(1);
    m_renderer->TextureData(info.Width, info.Height, pixelData, 0,
                            C4JRender::TEXTURE_FORMAT_RxGyBzAw);
    m_renderer->TextureSetParam(GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    m_renderer->TextureSetParam(GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    m_renderer->TextureSetParam(GL_TEXTURE_WRAP_S, GL_CLAMP);
    m_renderer->TextureSetParam(GL_TEXTURE_WRAP_T, GL_CLAMP);

    delete[] pixelData;
    m_textureCache[filepath] = tex;
    return tex;
}

UIRenderer::TextureHandle UIRenderer::loadTextureFromMemory(
    const uint8_t *data, int width, int height, int channels)
{
    if (!data || width <= 0 || height <= 0)
        return INVALID_TEXTURE;

    // Convert to RGBA 32-bit if needed, then upload.
    // The renderer's TEXTURE_FORMAT_RxGyBzAw maps to VK_FORMAT_R8G8B8A8_UNORM.
    int pixelCount = width * height;
    std::vector<uint32_t> rgba(pixelCount);

    for (int i = 0; i < pixelCount; ++i) {
        uint8_t r = 255, g = 255, b = 255, a = 255;
        if (channels == 4) {
            r = data[i * 4 + 0];
            g = data[i * 4 + 1];
            b = data[i * 4 + 2];
            a = data[i * 4 + 3];
        } else if (channels == 3) {
            r = data[i * 3 + 0];
            g = data[i * 3 + 1];
            b = data[i * 3 + 2];
        } else if (channels == 1) {
            r = g = b = data[i];
        }
        // Pack as BGRA to match the renderer's existing PNG pipeline convention
        // (LoadTextureData uses PNG_FORMAT_BGRA with TEXTURE_FORMAT_RxGyBzAw)
        rgba[i] = (static_cast<uint32_t>(a) << 24) |
                  (static_cast<uint32_t>(r) << 16) |
                  (static_cast<uint32_t>(g) << 8) |
                  (static_cast<uint32_t>(b));
    }

    TextureHandle tex = m_renderer->TextureCreate();
    if (tex == INVALID_TEXTURE)
        return INVALID_TEXTURE;

    m_renderer->TextureBind(tex);
    m_renderer->TextureSetTextureLevels(1);
    m_renderer->TextureData(width, height, rgba.data(), 0,
                            C4JRender::TEXTURE_FORMAT_RxGyBzAw);
    m_renderer->TextureSetParam(GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    m_renderer->TextureSetParam(GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    m_renderer->TextureSetParam(GL_TEXTURE_WRAP_S, GL_CLAMP);
    m_renderer->TextureSetParam(GL_TEXTURE_WRAP_T, GL_CLAMP);

    return tex;
}

void UIRenderer::freeTexture(TextureHandle handle)
{
    if (handle == INVALID_TEXTURE)
        return;

    // Remove from cache if present
    for (auto it = m_textureCache.begin(); it != m_textureCache.end(); ++it) {
        if (it->second == handle) {
            m_textureCache.erase(it);
            break;
        }
    }

    m_renderer->TextureFree(handle);
}

// ---------------------------------------------------------------------------
// BMFont loading (text format)
// ---------------------------------------------------------------------------

UIRenderer::BitmapFont *UIRenderer::loadBitmapFont(const std::string &fntFile)
{
    std::ifstream file(fntFile);
    if (!file.is_open())
        return nullptr;

    auto font = std::make_unique<BitmapFont>();
    font->texture = INVALID_TEXTURE;
    font->lineHeight = 0;
    font->base = 0;

    int scaleW = 1, scaleH = 1;
    std::string fontDir;

    // Extract directory from fntFile path
    auto lastSlash = fntFile.find_last_of("/\\");
    if (lastSlash != std::string::npos)
        fontDir = fntFile.substr(0, lastSlash + 1);

    std::string line;
    while (std::getline(file, line)) {
        std::istringstream iss(line);
        std::string tag;
        iss >> tag;

        if (tag == "common") {
            std::string token;
            while (iss >> token) {
                if (token.compare(0, 11, "lineHeight=") == 0)
                    font->lineHeight = parseBMFontInt(token);
                else if (token.compare(0, 5, "base=") == 0)
                    font->base = parseBMFontInt(token);
                else if (token.compare(0, 7, "scaleW=") == 0)
                    scaleW = parseBMFontInt(token);
                else if (token.compare(0, 7, "scaleH=") == 0)
                    scaleH = parseBMFontInt(token);
            }
        } else if (tag == "page") {
            std::string token;
            while (iss >> token) {
                if (token.compare(0, 5, "file=") == 0) {
                    std::string texFile = parseBMFontString(token);
                    if (!texFile.empty() && font->texture == INVALID_TEXTURE)
                        font->texture = loadTexture(fontDir + texFile);
                }
            }
        } else if (tag == "char") {
            int id = 0, cx = 0, cy = 0, cw = 0, ch = 0;
            int xoff = 0, yoff = 0, xadv = 0;

            std::string token;
            while (iss >> token) {
                if (token.compare(0, 3, "id=") == 0)
                    id = parseBMFontInt(token);
                else if (token.compare(0, 2, "x=") == 0)
                    cx = parseBMFontInt(token);
                else if (token.compare(0, 2, "y=") == 0)
                    cy = parseBMFontInt(token);
                else if (token.compare(0, 6, "width=") == 0)
                    cw = parseBMFontInt(token);
                else if (token.compare(0, 7, "height=") == 0)
                    ch = parseBMFontInt(token);
                else if (token.compare(0, 8, "xoffset=") == 0)
                    xoff = parseBMFontInt(token);
                else if (token.compare(0, 8, "yoffset=") == 0)
                    yoff = parseBMFontInt(token);
                else if (token.compare(0, 9, "xadvance=") == 0)
                    xadv = parseBMFontInt(token);
            }

            Glyph glyph;
            glyph.uvs.u0 = static_cast<float>(cx) / scaleW;
            glyph.uvs.v0 = static_cast<float>(cy) / scaleH;
            glyph.uvs.u1 = static_cast<float>(cx + cw) / scaleW;
            glyph.uvs.v1 = static_cast<float>(cy + ch) / scaleH;
            glyph.width = cw;
            glyph.height = ch;
            glyph.xOffset = xoff;
            glyph.yOffset = yoff;
            glyph.xAdvance = xadv;

            font->glyphs[static_cast<uint32_t>(id)] = glyph;
        } else if (tag == "kerning") {
            int first = 0, second = 0, amount = 0;

            std::string token;
            while (iss >> token) {
                if (token.compare(0, 6, "first=") == 0)
                    first = parseBMFontInt(token);
                else if (token.compare(0, 7, "second=") == 0)
                    second = parseBMFontInt(token);
                else if (token.compare(0, 7, "amount=") == 0)
                    amount = parseBMFontInt(token);
            }

            font->kerning[packKerningKey(first, second)] = amount;
        }
    }

    BitmapFont *result = font.get();
    m_fonts.push_back(std::move(font));
    return result;
}

// ---------------------------------------------------------------------------
// Begin / End UI rendering pass
// ---------------------------------------------------------------------------

void UIRenderer::beginUI(C4JRender::eViewportType viewport)
{
    m_renderer->StateSetViewport(viewport);

    // Disable 3D-only state
    m_renderer->StateSetDepthTestEnable(false);
    m_renderer->StateSetDepthMask(false);
    m_renderer->StateSetFogEnable(false);
    m_renderer->StateSetLightingEnable(false);
    m_renderer->StateSetFaceCull(false);
    m_renderer->StateSetAlphaTestEnable(false);

    // Enable standard alpha blending
    m_renderer->StateSetBlendEnable(true);
    m_renderer->StateSetBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

    // Set white diffuse colour so tinting comes only from vertex color
    m_renderer->StateSetColour(1.0f, 1.0f, 1.0f, 1.0f);

    // Push and set projection matrix: orthographic, top-left origin
    m_renderer->MatrixMode(MATRIX_MODE_MODELVIEW_PROJECTION);
    m_renderer->MatrixPush();
    m_renderer->MatrixSetIdentity();
    m_renderer->MatrixOrthogonal(
        0.0f, static_cast<float>(m_screenWidth),   // left, right
        static_cast<float>(m_screenHeight), 0.0f,  // bottom, top (flipped for top-left origin)
        -1.0f, 1.0f                                // near, far
    );

    // Push and set identity modelview
    m_renderer->MatrixMode(MATRIX_MODE_MODELVIEW);
    m_renderer->MatrixPush();
    m_renderer->MatrixSetIdentity();

    // Push and set identity texture matrix
    m_renderer->MatrixMode(MATRIX_MODE_MODELVIEW_TEXTURE);
    m_renderer->MatrixPush();
    m_renderer->MatrixSetIdentity();
}

void UIRenderer::endUI()
{
    // Restore matrix stacks
    m_renderer->MatrixMode(MATRIX_MODE_MODELVIEW_TEXTURE);
    m_renderer->MatrixPop();

    m_renderer->MatrixMode(MATRIX_MODE_MODELVIEW);
    m_renderer->MatrixPop();

    m_renderer->MatrixMode(MATRIX_MODE_MODELVIEW_PROJECTION);
    m_renderer->MatrixPop();

    // Restore typical 3D defaults
    m_renderer->StateSetDepthTestEnable(true);
    m_renderer->StateSetDepthMask(true);
    m_renderer->StateSetBlendEnable(false);

    m_clipStack.clear();
}

// ---------------------------------------------------------------------------
// Core quad emission
// ---------------------------------------------------------------------------

void UIRenderer::emitQuad(TextureHandle tex, float x0, float y0, float x1, float y1,
                          float u0, float v0, float u1, float v1,
                          float r, float g, float b, float a)
{
    uint8_t cr = static_cast<uint8_t>(r * 255.0f);
    uint8_t cg = static_cast<uint8_t>(g * 255.0f);
    uint8_t cb = static_cast<uint8_t>(b * 255.0f);
    uint8_t ca = static_cast<uint8_t>(a * 255.0f);

    // Two triangles: TL-TR-BL, BL-TR-BR
    UIVertex verts[6];
    verts[0] = makeVertex(x0, y0, u0, v0, cr, cg, cb, ca); // top-left
    verts[1] = makeVertex(x1, y0, u1, v0, cr, cg, cb, ca); // top-right
    verts[2] = makeVertex(x0, y1, u0, v1, cr, cg, cb, ca); // bottom-left
    verts[3] = makeVertex(x0, y1, u0, v1, cr, cg, cb, ca); // bottom-left
    verts[4] = makeVertex(x1, y0, u1, v0, cr, cg, cb, ca); // top-right
    verts[5] = makeVertex(x1, y1, u1, v1, cr, cg, cb, ca); // bottom-right

    m_renderer->TextureBind(tex);
    m_renderer->DrawVertices(
        C4JRender::PRIMITIVE_TYPE_TRIANGLE_LIST,
        6,
        verts,
        C4JRender::VERTEX_TYPE_PF3_TF2_CB4_NB4_XW1,
        C4JRender::PIXEL_SHADER_TYPE_STANDARD
    );
}

void UIRenderer::emitColorQuad(float x0, float y0, float x1, float y1,
                               float r, float g, float b, float a)
{
    // Draw a solid-color quad using the 1x1 white texture tinted by vertex color
    emitQuad(m_whiteTexture, x0, y0, x1, y1, 0.0f, 0.0f, 1.0f, 1.0f, r, g, b, a);
}

// ---------------------------------------------------------------------------
// Drawing primitives
// ---------------------------------------------------------------------------

void UIRenderer::drawRect(const Rect &rect, const Color &color)
{
    emitColorQuad(rect.x, rect.y,
                  rect.x + rect.w, rect.y + rect.h,
                  color.r, color.g, color.b, color.a);
}

void UIRenderer::drawTexturedRect(TextureHandle tex, const Rect &dest,
                                  const UVRect &uvs, const Color &tint)
{
    if (tex == INVALID_TEXTURE)
        return;
    emitQuad(tex,
             dest.x, dest.y, dest.x + dest.w, dest.y + dest.h,
             uvs.u0, uvs.v0, uvs.u1, uvs.v1,
             tint.r, tint.g, tint.b, tint.a);
}

void UIRenderer::drawSprite(const SpriteFrame &sprite, float x, float y,
                            float scaleX, float scaleY, const Color &tint)
{
    if (sprite.texture == INVALID_TEXTURE)
        return;
    float w = sprite.pixelWidth * scaleX;
    float h = sprite.pixelHeight * scaleY;
    emitQuad(sprite.texture,
             x, y, x + w, y + h,
             sprite.uvs.u0, sprite.uvs.v0, sprite.uvs.u1, sprite.uvs.v1,
             tint.r, tint.g, tint.b, tint.a);
}

void UIRenderer::drawNineSlice(const NineSlice &ns, const Rect &dest, const Color &tint)
{
    if (ns.texture == INVALID_TEXTURE)
        return;

    float tw = static_cast<float>(ns.texWidth);
    float th = static_cast<float>(ns.texHeight);
    float l  = static_cast<float>(ns.left);
    float r  = static_cast<float>(ns.right);
    float t  = static_cast<float>(ns.top);
    float b  = static_cast<float>(ns.bottom);

    // UV boundaries
    float uL = l / tw;
    float uR = (tw - r) / tw;
    float vT = t / th;
    float vB = (th - b) / th;

    // Screen-space boundaries
    float sx0 = dest.x;
    float sx1 = dest.x + l;
    float sx2 = dest.x + dest.w - r;
    float sx3 = dest.x + dest.w;
    float sy0 = dest.y;
    float sy1 = dest.y + t;
    float sy2 = dest.y + dest.h - b;
    float sy3 = dest.y + dest.h;

    // Bind texture once, draw 9 quads
    // Row 0: top
    emitQuad(ns.texture, sx0, sy0, sx1, sy1, 0.0f, 0.0f, uL,   vT,   tint.r, tint.g, tint.b, tint.a); // TL
    emitQuad(ns.texture, sx1, sy0, sx2, sy1, uL,   0.0f, uR,   vT,   tint.r, tint.g, tint.b, tint.a); // TC
    emitQuad(ns.texture, sx2, sy0, sx3, sy1, uR,   0.0f, 1.0f, vT,   tint.r, tint.g, tint.b, tint.a); // TR

    // Row 1: middle
    emitQuad(ns.texture, sx0, sy1, sx1, sy2, 0.0f, vT,   uL,   vB,   tint.r, tint.g, tint.b, tint.a); // ML
    emitQuad(ns.texture, sx1, sy1, sx2, sy2, uL,   vT,   uR,   vB,   tint.r, tint.g, tint.b, tint.a); // MC
    emitQuad(ns.texture, sx2, sy1, sx3, sy2, uR,   vT,   1.0f, vB,   tint.r, tint.g, tint.b, tint.a); // MR

    // Row 2: bottom
    emitQuad(ns.texture, sx0, sy2, sx1, sy3, 0.0f, vB,   uL,   1.0f, tint.r, tint.g, tint.b, tint.a); // BL
    emitQuad(ns.texture, sx1, sy2, sx2, sy3, uL,   vB,   uR,   1.0f, tint.r, tint.g, tint.b, tint.a); // BC
    emitQuad(ns.texture, sx2, sy2, sx3, sy3, uR,   vB,   1.0f, 1.0f, tint.r, tint.g, tint.b, tint.a); // BR
}

// ---------------------------------------------------------------------------
// Text rendering
// ---------------------------------------------------------------------------

void UIRenderer::drawText(BitmapFont *font, const std::wstring &text,
                          float x, float y, const Color &color, float scale)
{
    if (!font || font->texture == INVALID_TEXTURE || text.empty())
        return;

    float cursorX = x;

    for (size_t i = 0; i < text.size(); ++i) {
        uint32_t codepoint = static_cast<uint32_t>(text[i]);

        auto git = font->glyphs.find(codepoint);
        if (git == font->glyphs.end())
            continue;

        const Glyph &g = git->second;

        // Apply kerning from previous character
        if (i > 0) {
            uint32_t prev = static_cast<uint32_t>(text[i - 1]);
            auto kit = font->kerning.find(packKerningKey(prev, codepoint));
            if (kit != font->kerning.end())
                cursorX += kit->second * scale;
        }

        float gx = cursorX + g.xOffset * scale;
        float gy = y + g.yOffset * scale;
        float gw = g.width * scale;
        float gh = g.height * scale;

        if (g.width > 0 && g.height > 0) {
            emitQuad(font->texture,
                     gx, gy, gx + gw, gy + gh,
                     g.uvs.u0, g.uvs.v0, g.uvs.u1, g.uvs.v1,
                     color.r, color.g, color.b, color.a);
        }

        cursorX += g.xAdvance * scale;
    }
}

float UIRenderer::measureText(BitmapFont *font, const std::wstring &text, float scale)
{
    if (!font || text.empty())
        return 0.0f;

    float width = 0.0f;

    for (size_t i = 0; i < text.size(); ++i) {
        uint32_t codepoint = static_cast<uint32_t>(text[i]);

        auto git = font->glyphs.find(codepoint);
        if (git == font->glyphs.end())
            continue;

        // Apply kerning
        if (i > 0) {
            uint32_t prev = static_cast<uint32_t>(text[i - 1]);
            auto kit = font->kerning.find(packKerningKey(prev, codepoint));
            if (kit != font->kerning.end())
                width += kit->second * scale;
        }

        width += git->second.xAdvance * scale;
    }

    return width;
}

// ---------------------------------------------------------------------------
// Scissor / clipping
// ---------------------------------------------------------------------------

void UIRenderer::pushClipRect(const Rect &rect)
{
    ClipRect clip;
    clip.x = rect.x;
    clip.y = rect.y;
    clip.w = rect.w;
    clip.h = rect.h;

    // Intersect with parent clip rect if one exists
    if (!m_clipStack.empty()) {
        const ClipRect &parent = m_clipStack.back();
        float nx = std::max(clip.x, parent.x);
        float ny = std::max(clip.y, parent.y);
        float nx2 = std::min(clip.x + clip.w, parent.x + parent.w);
        float ny2 = std::min(clip.y + clip.h, parent.y + parent.h);
        clip.x = nx;
        clip.y = ny;
        clip.w = std::max(0.0f, nx2 - nx);
        clip.h = std::max(0.0f, ny2 - ny);
    }

    m_clipStack.push_back(clip);

    // Apply via StateSetViewport is not fine-grained enough, so we use
    // the stencil or viewport clip planes if available. For now, store
    // the clip rect for manual draw-time clipping.
    m_renderer->StateSetEnableViewportClipPlanes(true);
}

void UIRenderer::popClipRect()
{
    if (!m_clipStack.empty())
        m_clipStack.pop_back();

    if (m_clipStack.empty())
        m_renderer->StateSetEnableViewportClipPlanes(false);
}
