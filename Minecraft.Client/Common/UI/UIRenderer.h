#pragma once
#include <string>
#include <vector>
#include <unordered_map>
#include <memory>
#include <cstdint>

// Forward declarations - Renderer is the internal Vulkan renderer
class Renderer;
namespace C4JRender { enum eViewportType; }

class UIRenderer {
public:
    // Texture handle (index into the renderer's texture array)
    using TextureHandle = int;
    static constexpr TextureHandle INVALID_TEXTURE = -1;

    struct Rect { float x, y, w, h; };

    struct Color {
        float r, g, b, a;
        Color() : r(1), g(1), b(1), a(1) {}
        Color(float r, float g, float b, float a) : r(r), g(g), b(b), a(a) {}
    };

    struct UVRect {
        float u0, v0, u1, v1;
        UVRect() : u0(0), v0(0), u1(1), v1(1) {}
        UVRect(float u0, float v0, float u1, float v1) : u0(u0), v0(v0), u1(u1), v1(v1) {}
    };

    // Sprite definition for atlas-based rendering
    struct SpriteFrame {
        TextureHandle texture;
        UVRect uvs;
        int pixelWidth, pixelHeight;
    };

    // Nine-slice (9-patch) definition for scalable UI elements
    struct NineSlice {
        TextureHandle texture;
        int left, right, top, bottom; // insets in pixels
        int texWidth, texHeight;
    };

    // Bitmap font glyph
    struct Glyph {
        UVRect uvs;
        int width, height;
        int xOffset, yOffset;
        int xAdvance;
    };

    struct BitmapFont {
        TextureHandle texture;
        int lineHeight;
        int base;
        std::unordered_map<uint32_t, Glyph> glyphs; // keyed by codepoint
        std::unordered_map<uint64_t, int> kerning;   // packed pair -> amount
    };

    void init(Renderer *renderer, int screenWidth, int screenHeight);
    void shutdown();
    void setScreenSize(int width, int height);

    // Texture loading (uses renderer's existing libpng-based LoadTextureData)
    TextureHandle loadTexture(const std::string &filepath);
    TextureHandle loadTextureFromMemory(const uint8_t *data, int width, int height, int channels);
    void freeTexture(TextureHandle handle);

    // Font loading (BMFont text format)
    BitmapFont *loadBitmapFont(const std::string &fntFile);

    // Begin/end a UI rendering pass
    // Sets orthographic projection, disables depth, enables alpha blending
    void beginUI(C4JRender::eViewportType viewport);
    void endUI();

    // Drawing primitives
    void drawRect(const Rect &rect, const Color &color);
    void drawTexturedRect(TextureHandle tex, const Rect &dest,
                          const UVRect &uvs = UVRect(), const Color &tint = Color());
    void drawSprite(const SpriteFrame &sprite, float x, float y,
                    float scaleX = 1.0f, float scaleY = 1.0f, const Color &tint = Color());
    void drawNineSlice(const NineSlice &ns, const Rect &dest, const Color &tint = Color());
    void drawText(BitmapFont *font, const std::wstring &text, float x, float y,
                  const Color &color = Color(), float scale = 1.0f);
    float measureText(BitmapFont *font, const std::wstring &text, float scale = 1.0f);

    // Scissor/clipping
    void pushClipRect(const Rect &rect);
    void popClipRect();

    int getScreenWidth() const { return m_screenWidth; }
    int getScreenHeight() const { return m_screenHeight; }

private:
    Renderer *m_renderer = nullptr;
    int m_screenWidth = 1920;
    int m_screenHeight = 1080;

    // 1x1 white texture for solid color quads
    TextureHandle m_whiteTexture = INVALID_TEXTURE;

    struct ClipRect { float x, y, w, h; };
    std::vector<ClipRect> m_clipStack;

    // Cached loaded textures by path
    std::unordered_map<std::string, TextureHandle> m_textureCache;

    // Loaded bitmap fonts
    std::vector<std::unique_ptr<BitmapFont>> m_fonts;

    // Internal: emit a textured quad as 2 triangles via DrawVertices
    void emitQuad(TextureHandle tex, float x0, float y0, float x1, float y1,
                  float u0, float v0, float u1, float v1,
                  float r, float g, float b, float a);

    // Internal: emit an untextured colored quad (binds white texture)
    void emitColorQuad(float x0, float y0, float x1, float y1,
                       float r, float g, float b, float a);
};
