#pragma once
/*
MIT License

Copyright (c) 2026 Patoke

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

#include "4J_Render.h"
#include "Profiler.h"
#include <cstdint>
#include <cstring>
#include <unordered_map>
#include <vector>
#include <mutex>
#include <array>

#include <vulkan/vulkan.h>
#include "vk_mem_alloc.h"

#define MATRIX_MODE_MODELVIEW            0
#define MATRIX_MODE_MODELVIEW_PROJECTION 1
#define MATRIX_MODE_MODELVIEW_TEXTURE    2
#define MATRIX_MODE_MODELVIEW_CBUFF      3
#define MATRIX_MODE_MODELVIEW_MAX        4

#define STACK_TYPES    4
#define STACK_SIZE     16
#define MAX_MIP_LEVELS 5
#define MAX_TEXTURES 512

#define NUM_COMMAND_HANDLES 0x800000
#define MAX_COMMAND_BUFFERS 16000

#define VK_MAX_FRAMES_IN_FLIGHT 2

// Cross-platform math types replacing DirectXMath
struct alignas(16) Mat4x4 {
    float m[4][4];

    Mat4x4() { memset(m, 0, sizeof(m)); }

    static Mat4x4 Identity() {
        Mat4x4 r;
        r.m[0][0] = r.m[1][1] = r.m[2][2] = r.m[3][3] = 1.0f;
        return r;
    }

    float *ptr() { return &m[0][0]; }
    const float *ptr() const { return &m[0][0]; }

    Mat4x4 operator*(const Mat4x4 &rhs) const {
        Mat4x4 r;
        for (int i = 0; i < 4; i++)
            for (int j = 0; j < 4; j++) {
                r.m[i][j] = 0.0f;
                for (int k = 0; k < 4; k++)
                    r.m[i][j] += m[i][k] * rhs.m[k][j];
            }
        return r;
    }
};

struct Float4 {
    float x, y, z, w;
    Float4() : x(0), y(0), z(0), w(0) {}
    Float4(float x, float y, float z, float w) : x(x), y(y), z(z), w(w) {}
};

// Vulkan buffer with VMA allocation
struct VkAllocatedBuffer {
    VkBuffer buffer = VK_NULL_HANDLE;
    VmaAllocation allocation = VK_NULL_HANDLE;
};

// Vulkan image with VMA allocation
struct VkAllocatedImage {
    VkImage image = VK_NULL_HANDLE;
    VmaAllocation allocation = VK_NULL_HANDLE;
};

// Blend state description matching D3D11 semantics
struct BlendStateDesc {
    bool blendEnable = false;
    int srcBlend = 1;   // VK_BLEND_FACTOR_ONE
    int dstBlend = 0;   // VK_BLEND_FACTOR_ZERO
    uint8_t writeMask = 0xF; // RGBA
    float blendFactor[4] = {0, 0, 0, 0};

    bool operator==(const BlendStateDesc &o) const {
        return blendEnable == o.blendEnable && srcBlend == o.srcBlend &&
               dstBlend == o.dstBlend && writeMask == o.writeMask;
    }
};

// Depth/stencil state description
struct DepthStencilStateDesc {
    bool depthTestEnable = true;
    bool depthWriteEnable = true;
    int depthFunc = 4; // LESS_EQUAL
    bool stencilEnable = false;
    uint8_t stencilRef = 0;
    uint8_t stencilFuncMask = 0xFF;
    uint8_t stencilWriteMask = 0xFF;
    int stencilFunc = 8; // ALWAYS

    bool operator==(const DepthStencilStateDesc &o) const {
        return depthTestEnable == o.depthTestEnable && depthWriteEnable == o.depthWriteEnable &&
               depthFunc == o.depthFunc && stencilEnable == o.stencilEnable &&
               stencilRef == o.stencilRef && stencilFunc == o.stencilFunc;
    }
};

// Rasterizer state description
struct RasterizerStateDesc {
    bool cullEnable = false;
    bool cullCW = false; // false=CCW, true=CW
    float depthBiasSlope = 0.0f;
    float depthBiasConstant = 0.0f;
    float lineWidth = 1.0f;

    bool operator==(const RasterizerStateDesc &o) const {
        return cullEnable == o.cullEnable && cullCW == o.cullCW &&
               depthBiasSlope == o.depthBiasSlope && depthBiasConstant == o.depthBiasConstant;
    }
};

// Pipeline state key for caching
struct PipelineStateKey {
    uint32_t vertexType;
    uint32_t pixelShaderType;
    uint32_t topology;
    BlendStateDesc blend;
    DepthStencilStateDesc depthStencil;
    RasterizerStateDesc rasterizer;

    bool operator==(const PipelineStateKey &o) const {
        return vertexType == o.vertexType && pixelShaderType == o.pixelShaderType &&
               topology == o.topology && blend == o.blend &&
               depthStencil == o.depthStencil && rasterizer == o.rasterizer;
    }
};

struct PipelineStateKeyHash {
    size_t operator()(const PipelineStateKey &k) const {
        size_t h = 0;
        auto combine = [&](size_t v) { h ^= v + 0x9e3779b9 + (h << 6) + (h >> 2); };
        combine(k.vertexType);
        combine(k.pixelShaderType);
        combine(k.topology);
        combine(k.blend.blendEnable);
        combine(k.blend.srcBlend);
        combine(k.blend.dstBlend);
        combine(k.depthStencil.depthTestEnable);
        combine(k.depthStencil.depthWriteEnable);
        combine(k.depthStencil.depthFunc);
        combine(k.rasterizer.cullEnable);
        return h;
    }
};

// UBO layouts matching GLSL shader uniforms
struct VertexUBO {
    Mat4x4 matWV;
    Mat4x4 matWV2;
    Mat4x4 matP;
    Mat4x4 matUV;
    Float4 vecUVT2;
    Float4 vecFog;
    Float4 vecLightAmbientCol;
    Float4 vecLight0Col;
    Float4 vecLight1Col;
    Float4 vecLight0;
    Float4 vecLight1;
    Mat4x4 matTexGenObj;
    Mat4x4 matTexGenEye;
    Float4 vecWV2Trans;
    Float4 v_scaleoffset;
};

struct FragmentUBO {
    Float4 diffuse_colour;
    Float4 fog_colour;
    Float4 unkColor;
    Float4 alphaTestRef;
    Float4 clear_colour;
    Float4 forcedLod;
};

class Renderer
{
public:
    struct Context;
    struct CommandBuffer;

    void UpdateGamma(unsigned short usGamma);
    void MatrixMode(int type);
    void MatrixSetIdentity();
    void MatrixTranslate(float x, float y, float z);
    void MatrixRotate(float angle, float x, float y, float z);
    void MatrixScale(float x, float y, float z);
    void MatrixPerspective(float fovy, float aspect, float zNear, float zFar);
    void MatrixOrthogonal(float left, float right, float bottom, float top, float zNear, float zFar);
    void MatrixPop();
    void MatrixPush();
    void MatrixMult(float *mat);
    const float *MatrixGet(int type);
    void Set_matrixDirty();

    void Initialise(void *windowHandle, uint32_t width, uint32_t height);
    void InitialiseContext(bool fromPresent);
    void StartFrame();
    void DoScreenGrabOnNextPresent();
    void Present();
    void Clear(int flags, VkRect2D *pRect);
    void SetClearColour(const float colourRGBA[4]);
    bool IsWidescreen();
    bool IsHiDef();
    void CaptureThumbnail(ImageFileBuffer *pngOut);
    void CaptureScreen(ImageFileBuffer *jpgOut, XSOCIAL_PREVIEWIMAGE *previewOut);
    void BeginConditionalSurvey(int identifier);
    void EndConditionalSurvey();
    void BeginConditionalRendering(int identifier);
    void EndConditionalRendering();
    void DrawVertices(C4JRender::ePrimitiveType PrimitiveType, int count, void *dataIn, C4JRender::eVertexType vType,
                      C4JRender::ePixelShaderType psType);
    void DrawVertexBuffer(C4JRender::ePrimitiveType PrimitiveType, int count, VkBuffer buffer, C4JRender::eVertexType vType,
                          C4JRender::ePixelShaderType psType);
    void CBuffLockStaticCreations();
    int CBuffCreate(int count);
    void CBuffDelete(int first, int count);
    void CBuffStart(int index, bool full);
    void CBuffClear(int index);
    int CBuffSize(int index);
    void CBuffEnd();
    bool CBuffCall(int index, bool full);
    void CBuffTick();
    void CBuffDeferredModeStart();
    void CBuffDeferredModeEnd();
    int TextureCreate();
    void TextureFree(int idx);
    void TextureBind(int idx);
    void TextureBindVertex(int idx);
    void TextureSetTextureLevels(int levels);
    int TextureGetTextureLevels();
    void TextureSetParam(int param, int value);
    void TextureDynamicUpdateStart();
    void TextureDynamicUpdateEnd();
    void TextureData(int width, int height, void *data, int level, C4JRender::eTextureFormat format);
    void TextureDataUpdate(int xoffset, int yoffset, int width, int height, void *data, int level);
    int LoadTextureData(const char *szFilename, D3DXIMAGE_INFO *pSrcInfo, int **ppDataOut);
    int LoadTextureData(uint8_t *pbData, uint32_t dwBytes, D3DXIMAGE_INFO *pSrcInfo, int **ppDataOut);
    int SaveTextureData(const char *szFilename, D3DXIMAGE_INFO *pSrcInfo, int *ppDataOut);
    int SaveTextureDataToMemory(void *pOutput, int outputCapacity, int *outputLength, int width, int height, int *ppDataIn);
    void TextureGetStats();
    VkImageView TextureGetTexture(int idx);
    void StateSetColour(float r, float g, float b, float a);
    void StateSetDepthMask(bool enable);
    void StateSetBlendEnable(bool enable);
    void StateSetBlendFunc(int src, int dst);
    void StateSetBlendFactor(unsigned int colour);
    void StateSetAlphaFunc(int func, float param);
    void StateSetDepthFunc(int func);
    void StateSetFaceCull(bool enable);
    void StateSetFaceCullCW(bool enable);
    void StateSetLineWidth(float width);
    void StateSetWriteEnable(bool red, bool green, bool blue, bool alpha);
    void StateSetDepthTestEnable(bool enable);
    void StateSetAlphaTestEnable(bool enable);
    void StateSetDepthSlopeAndBias(float slope, float bias);
    void StateSetFogEnable(bool enable);
    void StateSetFogMode(int mode);
    void StateSetFogNearDistance(float dist);
    void StateSetFogFarDistance(float dist);
    void StateSetFogDensity(float density);
    void StateSetFogColour(float red, float green, float blue);
    void StateSetLightingEnable(bool enable);
    void StateSetVertexTextureUV(float u, float v);
    void StateSetLightColour(int light, float red, float green, float blue);
    void StateSetLightAmbientColour(float red, float green, float blue);
    void StateSetLightDirection(int light, float x, float y, float z);
    void StateSetLightEnable(int light, bool enable);
    void StateSetViewport(C4JRender::eViewportType viewportType);
    void StateSetEnableViewportClipPlanes(bool enable);
    void StateSetTexGenCol(int col, float x, float y, float z, float w, bool eyeSpace);
    void StateSetStencil(int function, uint8_t stencil_ref, uint8_t stencil_func_mask, uint8_t stencil_write_mask);
    void StateSetForceLOD(int LOD);
    void BeginEvent(const wchar_t *eventName);
    void EndEvent();
    void Suspend();
    bool Suspended();
    void Resume();
    void StateUpdate();
private:
    void SetupShaders();
    void SetupDescriptorLayouts();
    void SetupRenderPass();
    void SetupFramebuffers();
    void SetupSyncObjects();
    void SetupIndexBuffers();
    void SetupUniformBuffers();
    void ConvertLinearToPng(ImageFileBuffer *pngOut, unsigned char *linearData, unsigned int width, unsigned int height);
    void DrawVertexSetup(C4JRender::eVertexType vType, C4JRender::ePixelShaderType psType, C4JRender::ePrimitiveType primitiveType, int *count,
                         bool *drawIndexed);
    void UpdateTexGenState();
    void UpdateLightingState();
    void UpdateViewportState();
    void UpdateFogState();
    void UpdateTextureState(bool vertexSampler);
    void UpdateUniformBuffers();
    void MultWithStack(Mat4x4 matrix);
    VkPipeline GetOrCreatePipeline(const PipelineStateKey &key);
    VkSampler GetManagedSampler(uint32_t params);
    void DeleteInternalBuffer(int index);
    Renderer::Context &getContext();
    VkShaderModule CreateShaderModule(const uint32_t *code, size_t size);
    void TransitionImageLayout(VkImage image, VkFormat format, VkImageLayout oldLayout, VkImageLayout newLayout, uint32_t mipLevels);
    void CopyBufferToImage(VkBuffer buffer, VkImage image, uint32_t width, uint32_t height);
    VkCommandBuffer BeginSingleTimeCommands();
    void EndSingleTimeCommands(VkCommandBuffer commandBuffer);

    VkPrimitiveTopology MapTopology(C4JRender::ePrimitiveType type);
    VkCompareOp MapCompareOp(int func);
    VkBlendFactor MapBlendFactor(int factor);

public:
    struct Texture
    {
        bool allocated;
        VkAllocatedImage image;
        VkImageView view;
        VkSampler sampler;
        uint32_t width;
        uint32_t height;
        uint32_t textureFlags;
        uint32_t mipLevels;
        uint32_t textureFormat;
        uint32_t samplerParams;
    };

    struct TexgenCBuffer
    {
        Mat4x4 unk0;
        Mat4x4 unk1;
    };

    enum eCommandType
    {
        COMMAND_ADD_MATRIX,
        COMMAND_ADD_VERTICES,
        COMMAND_BIND_TEXTURE,
        COMMAND_SET_COLOR,
        COMMAND_SET_DEPTH_FUNC,
        COMMAND_SET_DEPTH_MASK,
        COMMAND_SET_DEPTH_TEST,
        COMMAND_SET_LIGHTING_ENABLE,
        COMMAND_SET_LIGHT_ENABLE,
        COMMAND_SET_LIGHT_DIRECTION,
        COMMAND_SET_LIGHT_COLOUR,
        COMMAND_SET_LIGHT_AMBIENT_COLOUR,
        COMMAND_SET_BLEND_ENABLE,
        COMMAND_SET_BLEND_FUNC,
        COMMAND_SET_BLEND_FACTOR,
        COMMAND_SET_FACE_CULL,
    };

    struct CommandBuffer
    {
        CommandBuffer(bool full);
        ~CommandBuffer();
        void StartRecording();
        void EndRecording(VmaAllocator allocator);
        std::uint64_t GetAllocated();
        bool IsBusy();
        void AddMatrix(const float *matrix);
        void AddVertices(unsigned int stride, unsigned int count, void *dataIn, Renderer::Context &c);
        void BindTexture(int idx);
        void SetColor(float r, float g, float b, float a);
        void SetDepthFunc(int func);
        void SetDepthMask(bool enable);
        void SetDepthTestEnable(bool enable);
        void SetLightingEnable(bool enable);
        void SetLightEnable(int light, bool enable);
        void SetLightDirection(int light, float x, float y, float z);
        void SetLightColour(int light, float r, float g, float b);
        void SetLightAmbientColour(float r, float g, float b);
        void SetBlendEnable(bool enable);
        void SetBlendFunc(int src, int dst);
        void SetBlendFactor(unsigned int factor);
        void SetFaceCull(bool enable);
        void Render(C4JRender::eVertexType vType, Renderer::Context &c, int primitiveType);

        struct Command
        {
            Renderer::eCommandType m_command_type;
            uint8_t commandPadding[12];

            union
            {
                uint8_t data[64];

                struct
                {
                    float m_matrix[16];
                } add_matrix;

                struct
                {
                    unsigned int m_vertex_index_start;
                    unsigned int m_vertex_count;
                } add_vertices;

                struct
                {
                    unsigned int m_texture_index;
                } bind_texture;

                struct
                {
                    float m_color[4];
                } set_color;

                struct
                {
                    int m_depth_func;
                } set_depth_func;

                struct
                {
                    bool m_enable;
                } set_depth_mask;

                struct
                {
                    bool m_enable;
                } set_depth_test;

                struct
                {
                    bool m_enable;
                } set_lighting_enable;

                struct
                {
                    int m_light_index;
                    bool m_enable;
                } set_light_enable;

                struct
                {
                    int m_light_index;
                    float padding[3];
                    float m_direction[4];
                } set_light_direction;

                struct
                {
                    int m_light_index;
                    float m_color[3];
                } set_light_colour;

                struct
                {
                    uint8_t padding;
                    float m_color[3];
                } set_light_ambient_colour;

                struct
                {
                    bool m_enable;
                } set_blend_enable;

                struct
                {
                    int m_src;
                    int m_dst;
                } set_blend_func;

                struct
                {
                    unsigned int m_blend_factor;
                } set_blend_factor;

                struct
                {
                    bool m_enable;
                } set_face_cull;
            };
        };
        VkAllocatedBuffer m_vertexBuffer;
        void *m_vertexData;
        std::uint64_t m_vertexDataLength;
        std::vector<Command> m_commands;
        std::uint64_t m_allocated;
        uint8_t isActive;
    };

    struct DeferredCBuff
    {
        Renderer::CommandBuffer *m_command_buf;
        int m_vertex_index;
        int m_vertex_type;
        int m_primitive_type;
        Mat4x4 m_matrix;
    };

    struct Context
    {
        static const unsigned int VERTEX_BUFFER_SIZE = 0x100000;

        Context();

        uint32_t annotateDepth;
        Mat4x4 matrixStacks[MATRIX_MODE_MODELVIEW_MAX][STACK_SIZE];
        bool matrixDirty[MATRIX_MODE_MODELVIEW_MAX];
        uint32_t stackPos[MATRIX_MODE_MODELVIEW_MAX];
        uint32_t stackType;
        uint32_t textureIdx;
        bool faceCullEnabled;
        bool depthTestEnabled;
        bool alphaTestEnabled;
        float alphaReference;
        bool depthWriteEnabled;
        bool fogEnabled;
        float fogNearDistance;
        float fogFarDistance;
        float fogDensity;
        float fogColourRed;
        float fogColourBlue;
        float fogColourGreen;
        uint32_t fogMode;
        bool lightingEnabled;
        bool lightEnabled[2];
        bool lightingDirty;
        uint32_t forcedLOD;
        Float4 lightDirection[2];
        Float4 lightColour[2];
        Float4 lightAmbientColour;

        // Uniform data (uploaded to UBO each draw)
        VertexUBO vertexUBO;
        FragmentUBO fragmentUBO;
        bool uniformsDirty;

        uint64_t dynamicVertexBase;
        uint32_t dynamicVertexOffset;
        VkAllocatedBuffer dynamicVertexBuffer;
        void *dynamicVertexMapped; // persistently mapped

        Mat4x4 texGenMatrices[2];
        Renderer::CommandBuffer *commandBuffer;
        uint32_t recordingBufferIndex;
        uint32_t recordingVertexType;
        uint32_t recordingPrimitiveType;
        bool deferredModeEnabled;
        std::vector<DeferredCBuff> deferredBuffers;

        BlendStateDesc blendDesc;
        DepthStencilStateDesc depthStencilDesc;
        RasterizerStateDesc rasterizerDesc;
    };

    static thread_local Context *tlsContext;
    static std::mutex totalAllocMutex;
    static uint32_t s_auiWidths[];
    static uint32_t s_auiHeights[];
    static VkFormat textureFormats[];
    static int totalAlloc;

    float m_fClearColor[4];

    // Vulkan core objects
    VkInstance m_instance;
    VkPhysicalDevice m_physicalDevice;
    VkDevice m_device;
    VmaAllocator m_allocator;
    VkQueue m_graphicsQueue;
    VkQueue m_presentQueue;
    uint32_t m_graphicsQueueFamily;
    uint32_t m_presentQueueFamily;
    VkSurfaceKHR m_surface;
    VkDebugUtilsMessengerEXT m_debugMessenger;

    // Swapchain
    VkSwapchainKHR m_swapchain;
    VkFormat m_swapchainFormat;
    VkExtent2D m_swapchainExtent;
    std::vector<VkImage> m_swapchainImages;
    std::vector<VkImageView> m_swapchainImageViews;
    std::vector<VkFramebuffer> m_swapchainFramebuffers;
    uint32_t m_currentImageIndex;

    // Depth buffer
    VkAllocatedImage m_depthImage;
    VkImageView m_depthImageView;
    VkFormat m_depthFormat;

    // Render pass
    VkRenderPass m_renderPass;
    bool m_renderPassActive;

    // Descriptor sets
    VkDescriptorSetLayout m_uniformDescriptorLayout;   // set 0: UBOs
    VkDescriptorSetLayout m_textureDescriptorLayout;   // set 1: textures
    VkDescriptorPool m_descriptorPool;
    // Per-frame descriptor sets for uniforms
    std::array<VkDescriptorSet, VK_MAX_FRAMES_IN_FLIGHT> m_uniformDescriptorSets;
    // Per-frame uniform buffers
    std::array<VkAllocatedBuffer, VK_MAX_FRAMES_IN_FLIGHT> m_vertexUBOBuffers;
    std::array<VkAllocatedBuffer, VK_MAX_FRAMES_IN_FLIGHT> m_fragmentUBOBuffers;
    std::array<void*, VK_MAX_FRAMES_IN_FLIGHT> m_vertexUBOMapped;
    std::array<void*, VK_MAX_FRAMES_IN_FLIGHT> m_fragmentUBOMapped;

    VkPipelineLayout m_pipelineLayout;

    // Shaders
    VkShaderModule m_vertexShaders[C4JRender::VERTEX_TYPE_COUNT];
    VkShaderModule m_screenSpaceVS;
    VkShaderModule m_screenClearVS;
    VkShaderModule m_pixelShaders[C4JRender::PIXEL_SHADER_COUNT];
    VkShaderModule m_screenSpacePS;
    VkShaderModule m_screenClearPS;

    // Vertex input descriptions
    unsigned int *vertexStrideTable;

    // Index buffers (for quad/fan topology conversion)
    VkAllocatedBuffer quadIndexBuffer;
    VkAllocatedBuffer fanIndexBuffer;

    // Synchronization
    std::array<VkSemaphore, VK_MAX_FRAMES_IN_FLIGHT> m_imageAvailableSemaphores;
    std::array<VkSemaphore, VK_MAX_FRAMES_IN_FLIGHT> m_renderFinishedSemaphores;
    std::array<VkFence, VK_MAX_FRAMES_IN_FLIGHT> m_inFlightFences;
    uint32_t m_currentFrame;

    // Command buffers (Vulkan)
    VkCommandPool m_commandPool;
    std::array<VkCommandBuffer, VK_MAX_FRAMES_IN_FLIGHT> m_drawCommandBuffers;

    // Textures
    uint32_t defaultTextureIndex;
    Renderer::Texture m_textures[512];

    // State
    uint32_t backBufferWidth;
    uint32_t backBufferHeight;
    uint32_t presentCount;
    uint32_t activeVertexType;
    uint32_t activePixelType;
    C4JRender::eViewportType m_ViewportType;

    // Command buffer system (game-level, not Vulkan)
    std::mutex m_commandBufferMutex;
    int16_t *m_commandHandleToIndex;
    CommandBuffer **m_commandBuffers;
    uint8_t *m_commandPrimitiveTypes;
    Mat4x4 *m_commandMatrices;
    int *m_commandIndexToHandle;
    uint8_t *m_commandVertexTypes;
    uint32_t reservedRendererDword1; // next handle search start
    uint32_t reservedRendererDword2;
    uint32_t reservedRendererDword3;
    uint8_t reservedRendererByte1; // static creation lock flag

    // Pipeline cache
    std::unordered_map<PipelineStateKey, VkPipeline, PipelineStateKeyHash> m_pipelineCache;
    std::unordered_map<uint32_t, VkSampler> managedSamplers;

    bool m_bShouldScreenGrabNextFrame;
    bool m_bSuspended;
};

// Singleton
extern Renderer InternalRenderManager;
