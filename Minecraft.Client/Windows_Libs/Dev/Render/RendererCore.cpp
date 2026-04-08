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

#include "stdafx.h"
#include "Renderer.h"

#include <GLFW/glfw3.h>
#include <cassert>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <algorithm>
#include <limits>

// ---------------------------------------------------------------------------
// Singleton & statics
// ---------------------------------------------------------------------------
Renderer InternalRenderManager;

thread_local Renderer::Context *Renderer::tlsContext = nullptr;
std::mutex Renderer::totalAllocMutex;

uint32_t Renderer::s_auiWidths[]  = { 1920, 512, 256, 128, 64, 0 };
uint32_t Renderer::s_auiHeights[] = { 1080, 512, 256, 128, 64 };
VkFormat Renderer::textureFormats[] = { VK_FORMAT_R8G8B8A8_UNORM };
int Renderer::totalAlloc = 0;

static const unsigned int kVertexBufferSize = 0x100000; // 1 MB
static const unsigned int kScreenGrabWidth  = 1920;
static const unsigned int kScreenGrabHeight = 1080;
static const unsigned int kThumbnailSize    = 64;

static const unsigned int g_vertexStrides[C4JRender::VERTEX_TYPE_COUNT] = { 32, 16, 32, 32 };

// ---------------------------------------------------------------------------
// Validation layer debug callback (debug builds only)
// ---------------------------------------------------------------------------
#ifndef NDEBUG
static VKAPI_ATTR VkBool32 VKAPI_CALL vkDebugCallback(
    VkDebugUtilsMessageSeverityFlagBitsEXT      severity,
    VkDebugUtilsMessageTypeFlagsEXT             type,
    const VkDebugUtilsMessengerCallbackDataEXT *pCallbackData,
    void *)
{
    if (severity >= VK_DEBUG_UTILS_MESSAGE_SEVERITY_WARNING_BIT_EXT)
        fprintf(stderr, "[Vulkan] %s\n", pCallbackData->pMessage);
    return VK_FALSE;
}
#endif

// ---------------------------------------------------------------------------
// Helper: topology mapping
// ---------------------------------------------------------------------------
VkPrimitiveTopology Renderer::MapTopology(C4JRender::ePrimitiveType type)
{
    switch (type)
    {
    case C4JRender::PRIMITIVE_TYPE_TRIANGLE_LIST:  return VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST;
    case C4JRender::PRIMITIVE_TYPE_TRIANGLE_STRIP: return VK_PRIMITIVE_TOPOLOGY_TRIANGLE_STRIP;
    case C4JRender::PRIMITIVE_TYPE_TRIANGLE_FAN:   return VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST; // emulated via index buffer
    case C4JRender::PRIMITIVE_TYPE_QUAD_LIST:      return VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST; // emulated via index buffer
    case C4JRender::PRIMITIVE_TYPE_LINE_LIST:      return VK_PRIMITIVE_TOPOLOGY_LINE_LIST;
    case C4JRender::PRIMITIVE_TYPE_LINE_STRIP:     return VK_PRIMITIVE_TOPOLOGY_LINE_STRIP;
    default:                                       return VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST;
    }
}

// ---------------------------------------------------------------------------
// Helper: comparison-op mapping (GL-style constants -> VkCompareOp)
// ---------------------------------------------------------------------------
VkCompareOp Renderer::MapCompareOp(int func)
{
    switch (func)
    {
    case 0:  return VK_COMPARE_OP_NEVER;
    case 1:  return VK_COMPARE_OP_LESS;
    case 2:  return VK_COMPARE_OP_NOT_EQUAL;
    case 3:  return VK_COMPARE_OP_EQUAL;         // GL_EQUAL
    case 4:  return VK_COMPARE_OP_LESS_OR_EQUAL;  // GL_LEQUAL
    case 5:  return VK_COMPARE_OP_GREATER;        // GL_GREATER
    case 6:  return VK_COMPARE_OP_GREATER_OR_EQUAL; // GL_GEQUAL
    case 7:  return VK_COMPARE_OP_NOT_EQUAL;
    case 8:  return VK_COMPARE_OP_ALWAYS;         // GL_ALWAYS
    default: return VK_COMPARE_OP_LESS_OR_EQUAL;
    }
}

// ---------------------------------------------------------------------------
// Helper: blend-factor mapping (GL-style constants -> VkBlendFactor)
// ---------------------------------------------------------------------------
VkBlendFactor Renderer::MapBlendFactor(int factor)
{
    switch (factor)
    {
    case 0:  return VK_BLEND_FACTOR_ZERO;                  // GL_ZERO
    case 1:  return VK_BLEND_FACTOR_ONE;                   // GL_ONE
    case 3:  return VK_BLEND_FACTOR_SRC_COLOR;             // GL_SRC_COLOR
    case 4:  return VK_BLEND_FACTOR_ONE_MINUS_SRC_COLOR;   // GL_ONE_MINUS_SRC_COLOR
    case 5:  return VK_BLEND_FACTOR_SRC_ALPHA;             // GL_SRC_ALPHA
    case 6:  return VK_BLEND_FACTOR_ONE_MINUS_SRC_ALPHA;   // GL_ONE_MINUS_SRC_ALPHA
    case 7:  return VK_BLEND_FACTOR_DST_ALPHA;             // GL_DST_ALPHA
    case 9:  return VK_BLEND_FACTOR_DST_COLOR;             // GL_DST_COLOR
    case 10: return VK_BLEND_FACTOR_ONE_MINUS_DST_COLOR;   // GL_ONE_MINUS_DST_COLOR
    case 14: return VK_BLEND_FACTOR_CONSTANT_ALPHA;        // GL_CONSTANT_ALPHA
    case 15: return VK_BLEND_FACTOR_ONE_MINUS_CONSTANT_ALPHA;
    default: return VK_BLEND_FACTOR_ONE;
    }
}

// ---------------------------------------------------------------------------
// Helper: create a VkShaderModule from SPIR-V bytecode
// ---------------------------------------------------------------------------
VkShaderModule Renderer::CreateShaderModule(const uint32_t *code, size_t size)
{
    VkShaderModuleCreateInfo createInfo = {};
    createInfo.sType    = VK_STRUCTURE_TYPE_SHADER_MODULE_CREATE_INFO;
    createInfo.codeSize = size;
    createInfo.pCode    = code;

    VkShaderModule module = VK_NULL_HANDLE;
    vkCreateShaderModule(m_device, &createInfo, nullptr, &module);
    return module;
}

// ---------------------------------------------------------------------------
// Helper: single-time command buffer for one-shot transfers
// ---------------------------------------------------------------------------
VkCommandBuffer Renderer::BeginSingleTimeCommands()
{
    VkCommandBufferAllocateInfo allocInfo = {};
    allocInfo.sType              = VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO;
    allocInfo.level              = VK_COMMAND_BUFFER_LEVEL_PRIMARY;
    allocInfo.commandPool        = m_commandPool;
    allocInfo.commandBufferCount = 1;

    VkCommandBuffer cmd;
    vkAllocateCommandBuffers(m_device, &allocInfo, &cmd);

    VkCommandBufferBeginInfo beginInfo = {};
    beginInfo.sType = VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO;
    beginInfo.flags = VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT;
    vkBeginCommandBuffer(cmd, &beginInfo);

    return cmd;
}

void Renderer::EndSingleTimeCommands(VkCommandBuffer cmd)
{
    vkEndCommandBuffer(cmd);

    VkSubmitInfo submitInfo = {};
    submitInfo.sType              = VK_STRUCTURE_TYPE_SUBMIT_INFO;
    submitInfo.commandBufferCount = 1;
    submitInfo.pCommandBuffers    = &cmd;

    vkQueueSubmit(m_graphicsQueue, 1, &submitInfo, VK_NULL_HANDLE);
    vkQueueWaitIdle(m_graphicsQueue);

    vkFreeCommandBuffers(m_device, m_commandPool, 1, &cmd);
}

// ---------------------------------------------------------------------------
// Context constructor (no arguments – all Vulkan)
// ---------------------------------------------------------------------------
Renderer::Context::Context()
    : annotateDepth(0)
    , stackType(0)
    , textureIdx(0)
    , faceCullEnabled(true)
    , depthTestEnabled(true)
    , depthWriteEnabled(true)
    , alphaTestEnabled(false)
    , alphaReference(1.0f)
    , fogEnabled(false)
    , fogNearDistance(0.0f)
    , fogFarDistance(0.0f)
    , fogDensity(0.0f)
    , fogColourRed(0.0f)
    , fogColourGreen(0.0f)
    , fogColourBlue(0.0f)
    , fogMode(0)
    , lightingEnabled(false)
    , lightingDirty(false)
    , forcedLOD(-1)
    , dynamicVertexBase(0)
    , dynamicVertexOffset(0)
    , dynamicVertexMapped(nullptr)
    , commandBuffer(nullptr)
    , recordingBufferIndex(0)
    , recordingVertexType(0)
    , recordingPrimitiveType(0)
    , deferredModeEnabled(false)
    , deferredBuffers()
    , uniformsDirty(true)
{
    memset(matrixStacks, 0, sizeof(matrixStacks));
    memset(matrixDirty, 0, sizeof(matrixDirty));
    memset(stackPos, 0, sizeof(stackPos));
    memset(lightEnabled, 0, sizeof(lightEnabled));
    memset(lightDirection, 0, sizeof(lightDirection));
    memset(lightColour, 0, sizeof(lightColour));
    memset(&lightAmbientColour, 0, sizeof(lightAmbientColour));
    memset(texGenMatrices, 0, sizeof(texGenMatrices));

    // Init all matrix stacks to identity
    Mat4x4 identity = Mat4x4::Identity();
    for (uint32_t i = 0; i < MATRIX_MODE_MODELVIEW_MAX; ++i)
    {
        matrixStacks[i][0] = identity;
        stackPos[i] = 0;
    }

    // Default blend state
    blendDesc.blendEnable = false;
    blendDesc.srcBlend    = GL_ONE;
    blendDesc.dstBlend    = GL_ZERO;
    blendDesc.writeMask   = 0xF;
    blendDesc.blendFactor[0] = 0.0f;
    blendDesc.blendFactor[1] = 0.0f;
    blendDesc.blendFactor[2] = 0.0f;
    blendDesc.blendFactor[3] = 0.0f;

    // Default depth/stencil state
    depthStencilDesc.depthTestEnable  = true;
    depthStencilDesc.depthWriteEnable = true;
    depthStencilDesc.depthFunc        = GL_LEQUAL;
    depthStencilDesc.stencilEnable    = false;
    depthStencilDesc.stencilRef       = 0;
    depthStencilDesc.stencilFuncMask  = 0xFF;
    depthStencilDesc.stencilWriteMask = 0xFF;
    depthStencilDesc.stencilFunc      = GL_ALWAYS;

    // Default rasterizer state
    rasterizerDesc.cullEnable       = false;
    rasterizerDesc.cullCW           = false;
    rasterizerDesc.depthBiasSlope   = 0.0f;
    rasterizerDesc.depthBiasConstant = 0.0f;
    rasterizerDesc.lineWidth        = 1.0f;

    // Zero-init UBO data
    memset(&vertexUBO, 0, sizeof(vertexUBO));
    memset(&fragmentUBO, 0, sizeof(fragmentUBO));

    // Set identity matrices in vertex UBO
    vertexUBO.matWV  = identity;
    vertexUBO.matWV2 = identity;
    vertexUBO.matP   = identity;
    vertexUBO.matUV  = identity;

    // Default diffuse colour = white
    fragmentUBO.diffuse_colour = Float4(1.0f, 1.0f, 1.0f, 1.0f);

    dynamicVertexBuffer.buffer     = VK_NULL_HANDLE;
    dynamicVertexBuffer.allocation = VK_NULL_HANDLE;
}

// ---------------------------------------------------------------------------
// InitialiseContext
// ---------------------------------------------------------------------------
void Renderer::InitialiseContext(bool fromPresent)
{
    (void)fromPresent;

    if (tlsContext)
    {
        delete tlsContext;
        tlsContext = nullptr;
    }

    tlsContext = new (std::nothrow) Renderer::Context();
}

// ---------------------------------------------------------------------------
// getContext
// ---------------------------------------------------------------------------
Renderer::Context &Renderer::getContext()
{
    return *tlsContext;
}

// ---------------------------------------------------------------------------
// SetupShaders – placeholder shader modules (TODO: load actual SPIR-V)
// ---------------------------------------------------------------------------
void Renderer::SetupShaders()
{
    vertexStrideTable = new unsigned int[C4JRender::VERTEX_TYPE_COUNT];
    for (uint32_t i = 0; i < C4JRender::VERTEX_TYPE_COUNT; ++i)
        vertexStrideTable[i] = g_vertexStrides[i];

    // Placeholder: set all shader modules to VK_NULL_HANDLE.
    // Actual SPIR-V bytecode arrays will be compiled separately and loaded via CreateShaderModule().
    for (uint32_t i = 0; i < C4JRender::VERTEX_TYPE_COUNT; ++i)
        m_vertexShaders[i] = VK_NULL_HANDLE; // TODO: CreateShaderModule(standard_vert_spv, sizeof(standard_vert_spv)), etc.

    m_screenSpaceVS = VK_NULL_HANDLE; // TODO: screen_space.vert.spv
    m_screenClearVS = VK_NULL_HANDLE; // TODO: screen_clear.vert.spv

    for (uint32_t i = 0; i < C4JRender::PIXEL_SHADER_COUNT; ++i)
        m_pixelShaders[i] = VK_NULL_HANDLE; // TODO: standard.frag.spv, projection.frag.spv, forcelod.frag.spv

    m_screenSpacePS = VK_NULL_HANDLE; // TODO: screen_space.frag.spv
    m_screenClearPS = VK_NULL_HANDLE; // TODO: screen_clear.frag.spv
}

// ---------------------------------------------------------------------------
// SetupRenderPass
// ---------------------------------------------------------------------------
void Renderer::SetupRenderPass()
{
    // Color attachment (swapchain surface)
    VkAttachmentDescription colorAttachment = {};
    colorAttachment.format         = m_swapchainFormat;
    colorAttachment.samples        = VK_SAMPLE_COUNT_1_BIT;
    colorAttachment.loadOp         = VK_ATTACHMENT_LOAD_OP_CLEAR;
    colorAttachment.storeOp        = VK_ATTACHMENT_STORE_OP_STORE;
    colorAttachment.stencilLoadOp  = VK_ATTACHMENT_LOAD_OP_DONT_CARE;
    colorAttachment.stencilStoreOp = VK_ATTACHMENT_STORE_OP_DONT_CARE;
    colorAttachment.initialLayout  = VK_IMAGE_LAYOUT_UNDEFINED;
    colorAttachment.finalLayout    = VK_IMAGE_LAYOUT_PRESENT_SRC_KHR;

    // Depth attachment
    VkAttachmentDescription depthAttachment = {};
    depthAttachment.format         = m_depthFormat;
    depthAttachment.samples        = VK_SAMPLE_COUNT_1_BIT;
    depthAttachment.loadOp         = VK_ATTACHMENT_LOAD_OP_CLEAR;
    depthAttachment.storeOp        = VK_ATTACHMENT_STORE_OP_DONT_CARE;
    depthAttachment.stencilLoadOp  = VK_ATTACHMENT_LOAD_OP_DONT_CARE;
    depthAttachment.stencilStoreOp = VK_ATTACHMENT_STORE_OP_DONT_CARE;
    depthAttachment.initialLayout  = VK_IMAGE_LAYOUT_UNDEFINED;
    depthAttachment.finalLayout    = VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL;

    VkAttachmentReference colorRef = {};
    colorRef.attachment = 0;
    colorRef.layout     = VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL;

    VkAttachmentReference depthRef = {};
    depthRef.attachment = 1;
    depthRef.layout     = VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL;

    VkSubpassDescription subpass = {};
    subpass.pipelineBindPoint       = VK_PIPELINE_BIND_POINT_GRAPHICS;
    subpass.colorAttachmentCount    = 1;
    subpass.pColorAttachments       = &colorRef;
    subpass.pDepthStencilAttachment = &depthRef;

    VkSubpassDependency dependency = {};
    dependency.srcSubpass    = VK_SUBPASS_EXTERNAL;
    dependency.dstSubpass    = 0;
    dependency.srcStageMask  = VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT | VK_PIPELINE_STAGE_EARLY_FRAGMENT_TESTS_BIT;
    dependency.srcAccessMask = 0;
    dependency.dstStageMask  = VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT | VK_PIPELINE_STAGE_EARLY_FRAGMENT_TESTS_BIT;
    dependency.dstAccessMask = VK_ACCESS_COLOR_ATTACHMENT_WRITE_BIT | VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_WRITE_BIT;

    VkAttachmentDescription attachments[] = { colorAttachment, depthAttachment };

    VkRenderPassCreateInfo rpInfo = {};
    rpInfo.sType           = VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO;
    rpInfo.attachmentCount = 2;
    rpInfo.pAttachments    = attachments;
    rpInfo.subpassCount    = 1;
    rpInfo.pSubpasses      = &subpass;
    rpInfo.dependencyCount = 1;
    rpInfo.pDependencies   = &dependency;

    VkResult result = vkCreateRenderPass(m_device, &rpInfo, nullptr, &m_renderPass);
    assert(result == VK_SUCCESS);
}

// ---------------------------------------------------------------------------
// SetupFramebuffers
// ---------------------------------------------------------------------------
void Renderer::SetupFramebuffers()
{
    m_swapchainFramebuffers.resize(m_swapchainImageViews.size());

    for (size_t i = 0; i < m_swapchainImageViews.size(); ++i)
    {
        VkImageView attachments[] = { m_swapchainImageViews[i], m_depthImageView };

        VkFramebufferCreateInfo fbInfo = {};
        fbInfo.sType           = VK_STRUCTURE_TYPE_FRAMEBUFFER_CREATE_INFO;
        fbInfo.renderPass      = m_renderPass;
        fbInfo.attachmentCount = 2;
        fbInfo.pAttachments    = attachments;
        fbInfo.width           = m_swapchainExtent.width;
        fbInfo.height          = m_swapchainExtent.height;
        fbInfo.layers          = 1;

        VkResult result = vkCreateFramebuffer(m_device, &fbInfo, nullptr, &m_swapchainFramebuffers[i]);
        assert(result == VK_SUCCESS);
    }
}

// ---------------------------------------------------------------------------
// SetupDescriptorLayouts
// ---------------------------------------------------------------------------
void Renderer::SetupDescriptorLayouts()
{
    // Set 0: uniform buffers (vertex UBO @ binding 0, fragment UBO @ binding 1)
    {
        VkDescriptorSetLayoutBinding bindings[2] = {};

        bindings[0].binding         = 0;
        bindings[0].descriptorType  = VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER;
        bindings[0].descriptorCount = 1;
        bindings[0].stageFlags      = VK_SHADER_STAGE_VERTEX_BIT;

        bindings[1].binding         = 1;
        bindings[1].descriptorType  = VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER;
        bindings[1].descriptorCount = 1;
        bindings[1].stageFlags      = VK_SHADER_STAGE_FRAGMENT_BIT;

        VkDescriptorSetLayoutCreateInfo layoutInfo = {};
        layoutInfo.sType        = VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_CREATE_INFO;
        layoutInfo.bindingCount = 2;
        layoutInfo.pBindings    = bindings;

        vkCreateDescriptorSetLayout(m_device, &layoutInfo, nullptr, &m_uniformDescriptorLayout);
    }

    // Set 1: textures (diffuse sampler @ binding 0, light sampler @ binding 1)
    {
        VkDescriptorSetLayoutBinding bindings[2] = {};

        bindings[0].binding         = 0;
        bindings[0].descriptorType  = VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
        bindings[0].descriptorCount = 1;
        bindings[0].stageFlags      = VK_SHADER_STAGE_FRAGMENT_BIT;

        bindings[1].binding         = 1;
        bindings[1].descriptorType  = VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
        bindings[1].descriptorCount = 1;
        bindings[1].stageFlags      = VK_SHADER_STAGE_FRAGMENT_BIT;

        VkDescriptorSetLayoutCreateInfo layoutInfo = {};
        layoutInfo.sType        = VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_CREATE_INFO;
        layoutInfo.bindingCount = 2;
        layoutInfo.pBindings    = bindings;

        vkCreateDescriptorSetLayout(m_device, &layoutInfo, nullptr, &m_textureDescriptorLayout);
    }

    // Pipeline layout with both descriptor set layouts
    {
        VkDescriptorSetLayout setLayouts[] = { m_uniformDescriptorLayout, m_textureDescriptorLayout };

        VkPipelineLayoutCreateInfo pipelineLayoutInfo = {};
        pipelineLayoutInfo.sType          = VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO;
        pipelineLayoutInfo.setLayoutCount = 2;
        pipelineLayoutInfo.pSetLayouts    = setLayouts;

        vkCreatePipelineLayout(m_device, &pipelineLayoutInfo, nullptr, &m_pipelineLayout);
    }

    // Descriptor pool
    {
        VkDescriptorPoolSize poolSizes[2] = {};
        poolSizes[0].type            = VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER;
        poolSizes[0].descriptorCount = VK_MAX_FRAMES_IN_FLIGHT * 2; // vertex + fragment per frame
        poolSizes[1].type            = VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
        poolSizes[1].descriptorCount = VK_MAX_FRAMES_IN_FLIGHT * 2;

        VkDescriptorPoolCreateInfo poolInfo = {};
        poolInfo.sType         = VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_CREATE_INFO;
        poolInfo.poolSizeCount = 2;
        poolInfo.pPoolSizes    = poolSizes;
        poolInfo.maxSets       = VK_MAX_FRAMES_IN_FLIGHT * 2;

        vkCreateDescriptorPool(m_device, &poolInfo, nullptr, &m_descriptorPool);
    }

    // Allocate per-frame uniform descriptor sets
    {
        VkDescriptorSetLayout layouts[VK_MAX_FRAMES_IN_FLIGHT];
        for (uint32_t i = 0; i < VK_MAX_FRAMES_IN_FLIGHT; ++i)
            layouts[i] = m_uniformDescriptorLayout;

        VkDescriptorSetAllocateInfo allocInfo = {};
        allocInfo.sType              = VK_STRUCTURE_TYPE_DESCRIPTOR_SET_ALLOCATE_INFO;
        allocInfo.descriptorPool     = m_descriptorPool;
        allocInfo.descriptorSetCount = VK_MAX_FRAMES_IN_FLIGHT;
        allocInfo.pSetLayouts        = layouts;

        vkAllocateDescriptorSets(m_device, &allocInfo, m_uniformDescriptorSets.data());
    }
}

// ---------------------------------------------------------------------------
// SetupSyncObjects
// ---------------------------------------------------------------------------
void Renderer::SetupSyncObjects()
{
    VkSemaphoreCreateInfo semInfo = {};
    semInfo.sType = VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO;

    VkFenceCreateInfo fenceInfo = {};
    fenceInfo.sType = VK_STRUCTURE_TYPE_FENCE_CREATE_INFO;
    fenceInfo.flags = VK_FENCE_CREATE_SIGNALED_BIT;

    for (uint32_t i = 0; i < VK_MAX_FRAMES_IN_FLIGHT; ++i)
    {
        vkCreateSemaphore(m_device, &semInfo, nullptr, &m_imageAvailableSemaphores[i]);
        vkCreateSemaphore(m_device, &semInfo, nullptr, &m_renderFinishedSemaphores[i]);
        vkCreateFence(m_device, &fenceInfo, nullptr, &m_inFlightFences[i]);
    }
}

// ---------------------------------------------------------------------------
// SetupIndexBuffers
// ---------------------------------------------------------------------------
void Renderer::SetupIndexBuffers()
{
    // Quad index buffer: convert 0x4000 quads to triangle list (6 indices per quad)
    {
        const uint32_t quadCount  = 0x4000;
        const uint32_t indexCount = quadCount * 6; // 0x18000
        const VkDeviceSize bufSize = indexCount * sizeof(uint16_t); // 0x30000

        uint16_t *quadIndices = new uint16_t[indexCount];
        for (uint32_t i = 0; i < quadCount; ++i)
        {
            uint16_t base = static_cast<uint16_t>(i * 4);
            uint32_t offset = i * 6;
            quadIndices[offset + 0] = base;
            quadIndices[offset + 1] = base + 1;
            quadIndices[offset + 2] = base + 3;
            quadIndices[offset + 3] = base + 1;
            quadIndices[offset + 4] = base + 2;
            quadIndices[offset + 5] = base + 3;
        }

        // Staging buffer
        VkAllocatedBuffer staging = {};
        VkBufferCreateInfo stagingBufInfo = {};
        stagingBufInfo.sType = VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO;
        stagingBufInfo.size  = bufSize;
        stagingBufInfo.usage = VK_BUFFER_USAGE_TRANSFER_SRC_BIT;

        VmaAllocationCreateInfo stagingAlloc = {};
        stagingAlloc.usage = VMA_MEMORY_USAGE_CPU_ONLY;

        vmaCreateBuffer(m_allocator, &stagingBufInfo, &stagingAlloc, &staging.buffer, &staging.allocation, nullptr);

        void *mapped;
        vmaMapMemory(m_allocator, staging.allocation, &mapped);
        memcpy(mapped, quadIndices, bufSize);
        vmaUnmapMemory(m_allocator, staging.allocation);
        delete[] quadIndices;

        // Device-local index buffer
        VkBufferCreateInfo idxBufInfo = {};
        idxBufInfo.sType = VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO;
        idxBufInfo.size  = bufSize;
        idxBufInfo.usage = VK_BUFFER_USAGE_INDEX_BUFFER_BIT | VK_BUFFER_USAGE_TRANSFER_DST_BIT;

        VmaAllocationCreateInfo idxAlloc = {};
        idxAlloc.usage = VMA_MEMORY_USAGE_GPU_ONLY;

        vmaCreateBuffer(m_allocator, &idxBufInfo, &idxAlloc, &quadIndexBuffer.buffer, &quadIndexBuffer.allocation, nullptr);

        VkCommandBuffer cmd = BeginSingleTimeCommands();
        VkBufferCopy copyRegion = {};
        copyRegion.size = bufSize;
        vkCmdCopyBuffer(cmd, staging.buffer, quadIndexBuffer.buffer, 1, &copyRegion);
        EndSingleTimeCommands(cmd);

        vmaDestroyBuffer(m_allocator, staging.buffer, staging.allocation);
    }

    // Fan index buffer: 0x2FFFA indices for triangle-fan emulation
    {
        const uint32_t indexCount = 0x2FFFA;
        const VkDeviceSize bufSize = indexCount * sizeof(uint16_t); // 0x5FFF4

        uint16_t *fanIndices = new uint16_t[indexCount];
        for (uint32_t i = 0; i < 65534; ++i)
        {
            uint32_t offset = i * 3;
            fanIndices[offset + 0] = 0;
            fanIndices[offset + 1] = static_cast<uint16_t>(i + 1);
            fanIndices[offset + 2] = static_cast<uint16_t>(i + 2);
        }

        VkAllocatedBuffer staging = {};
        VkBufferCreateInfo stagingBufInfo = {};
        stagingBufInfo.sType = VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO;
        stagingBufInfo.size  = bufSize;
        stagingBufInfo.usage = VK_BUFFER_USAGE_TRANSFER_SRC_BIT;

        VmaAllocationCreateInfo stagingAlloc = {};
        stagingAlloc.usage = VMA_MEMORY_USAGE_CPU_ONLY;

        vmaCreateBuffer(m_allocator, &stagingBufInfo, &stagingAlloc, &staging.buffer, &staging.allocation, nullptr);

        void *mapped;
        vmaMapMemory(m_allocator, staging.allocation, &mapped);
        memcpy(mapped, fanIndices, bufSize);
        vmaUnmapMemory(m_allocator, staging.allocation);
        delete[] fanIndices;

        VkBufferCreateInfo idxBufInfo = {};
        idxBufInfo.sType = VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO;
        idxBufInfo.size  = bufSize;
        idxBufInfo.usage = VK_BUFFER_USAGE_INDEX_BUFFER_BIT | VK_BUFFER_USAGE_TRANSFER_DST_BIT;

        VmaAllocationCreateInfo idxAlloc = {};
        idxAlloc.usage = VMA_MEMORY_USAGE_GPU_ONLY;

        vmaCreateBuffer(m_allocator, &idxBufInfo, &idxAlloc, &fanIndexBuffer.buffer, &fanIndexBuffer.allocation, nullptr);

        VkCommandBuffer cmd = BeginSingleTimeCommands();
        VkBufferCopy copyRegion = {};
        copyRegion.size = bufSize;
        vkCmdCopyBuffer(cmd, staging.buffer, fanIndexBuffer.buffer, 1, &copyRegion);
        EndSingleTimeCommands(cmd);

        vmaDestroyBuffer(m_allocator, staging.buffer, staging.allocation);
    }
}

// ---------------------------------------------------------------------------
// SetupUniformBuffers
// ---------------------------------------------------------------------------
void Renderer::SetupUniformBuffers()
{
    for (uint32_t i = 0; i < VK_MAX_FRAMES_IN_FLIGHT; ++i)
    {
        // Vertex UBO
        {
            VkBufferCreateInfo bufInfo = {};
            bufInfo.sType = VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO;
            bufInfo.size  = sizeof(VertexUBO);
            bufInfo.usage = VK_BUFFER_USAGE_UNIFORM_BUFFER_BIT;

            VmaAllocationCreateInfo allocInfo = {};
            allocInfo.usage = VMA_MEMORY_USAGE_CPU_TO_GPU;
            allocInfo.flags = VMA_ALLOCATION_CREATE_MAPPED_BIT;

            VmaAllocationInfo allocationInfo = {};
            vmaCreateBuffer(m_allocator, &bufInfo, &allocInfo,
                            &m_vertexUBOBuffers[i].buffer, &m_vertexUBOBuffers[i].allocation, &allocationInfo);
            m_vertexUBOMapped[i] = allocationInfo.pMappedData;
        }

        // Fragment UBO
        {
            VkBufferCreateInfo bufInfo = {};
            bufInfo.sType = VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO;
            bufInfo.size  = sizeof(FragmentUBO);
            bufInfo.usage = VK_BUFFER_USAGE_UNIFORM_BUFFER_BIT;

            VmaAllocationCreateInfo allocInfo = {};
            allocInfo.usage = VMA_MEMORY_USAGE_CPU_TO_GPU;
            allocInfo.flags = VMA_ALLOCATION_CREATE_MAPPED_BIT;

            VmaAllocationInfo allocationInfo = {};
            vmaCreateBuffer(m_allocator, &bufInfo, &allocInfo,
                            &m_fragmentUBOBuffers[i].buffer, &m_fragmentUBOBuffers[i].allocation, &allocationInfo);
            m_fragmentUBOMapped[i] = allocationInfo.pMappedData;
        }

        // Write descriptor sets to point at these buffers
        VkDescriptorBufferInfo vertexBufInfo = {};
        vertexBufInfo.buffer = m_vertexUBOBuffers[i].buffer;
        vertexBufInfo.offset = 0;
        vertexBufInfo.range  = sizeof(VertexUBO);

        VkDescriptorBufferInfo fragmentBufInfo = {};
        fragmentBufInfo.buffer = m_fragmentUBOBuffers[i].buffer;
        fragmentBufInfo.offset = 0;
        fragmentBufInfo.range  = sizeof(FragmentUBO);

        VkWriteDescriptorSet writes[2] = {};

        writes[0].sType           = VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET;
        writes[0].dstSet          = m_uniformDescriptorSets[i];
        writes[0].dstBinding      = 0;
        writes[0].descriptorType  = VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER;
        writes[0].descriptorCount = 1;
        writes[0].pBufferInfo     = &vertexBufInfo;

        writes[1].sType           = VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET;
        writes[1].dstSet          = m_uniformDescriptorSets[i];
        writes[1].dstBinding      = 1;
        writes[1].descriptorType  = VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER;
        writes[1].descriptorCount = 1;
        writes[1].pBufferInfo     = &fragmentBufInfo;

        vkUpdateDescriptorSets(m_device, 2, writes, 0, nullptr);
    }
}

// ---------------------------------------------------------------------------
// Initialise (main entry point – creates all Vulkan objects)
// ---------------------------------------------------------------------------
void Renderer::Initialise(void *windowHandle, uint32_t width, uint32_t height)
{
    backBufferWidth  = width;
    backBufferHeight = height;
    m_currentFrame   = 0;
    m_renderPassActive = false;
    m_debugMessenger   = VK_NULL_HANDLE;

    // -----------------------------------------------------------------------
    // 1. Create VkInstance
    // -----------------------------------------------------------------------
    {
        VkApplicationInfo appInfo = {};
        appInfo.sType              = VK_STRUCTURE_TYPE_APPLICATION_INFO;
        appInfo.pApplicationName   = "MinecraftConsoles";
        appInfo.applicationVersion = VK_MAKE_VERSION(1, 0, 0);
        appInfo.pEngineName        = "4J";
        appInfo.engineVersion      = VK_MAKE_VERSION(1, 0, 0);
        appInfo.apiVersion         = VK_API_VERSION_1_2;

        // Required extensions from GLFW
        uint32_t glfwExtCount = 0;
        const char **glfwExtensions = glfwGetRequiredInstanceExtensions(&glfwExtCount);

        std::vector<const char *> extensions(glfwExtensions, glfwExtensions + glfwExtCount);

        std::vector<const char *> validationLayers;

#ifndef NDEBUG
        validationLayers.push_back("VK_LAYER_KHRONOS_validation");
        extensions.push_back(VK_EXT_DEBUG_UTILS_EXTENSION_NAME);
#endif

        VkInstanceCreateInfo createInfo = {};
        createInfo.sType                   = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
        createInfo.pApplicationInfo        = &appInfo;
        createInfo.enabledExtensionCount   = static_cast<uint32_t>(extensions.size());
        createInfo.ppEnabledExtensionNames = extensions.data();
        createInfo.enabledLayerCount       = static_cast<uint32_t>(validationLayers.size());
        createInfo.ppEnabledLayerNames     = validationLayers.data();

        VkResult result = vkCreateInstance(&createInfo, nullptr, &m_instance);
        assert(result == VK_SUCCESS);
    }

    // -----------------------------------------------------------------------
    // 1b. Debug messenger (debug builds only)
    // -----------------------------------------------------------------------
#ifndef NDEBUG
    {
        VkDebugUtilsMessengerCreateInfoEXT debugInfo = {};
        debugInfo.sType           = VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CREATE_INFO_EXT;
        debugInfo.messageSeverity = VK_DEBUG_UTILS_MESSAGE_SEVERITY_VERBOSE_BIT_EXT |
                                    VK_DEBUG_UTILS_MESSAGE_SEVERITY_WARNING_BIT_EXT |
                                    VK_DEBUG_UTILS_MESSAGE_SEVERITY_ERROR_BIT_EXT;
        debugInfo.messageType     = VK_DEBUG_UTILS_MESSAGE_TYPE_GENERAL_BIT_EXT |
                                    VK_DEBUG_UTILS_MESSAGE_TYPE_VALIDATION_BIT_EXT |
                                    VK_DEBUG_UTILS_MESSAGE_TYPE_PERFORMANCE_BIT_EXT;
        debugInfo.pfnUserCallback = vkDebugCallback;

        auto createFunc = (PFN_vkCreateDebugUtilsMessengerEXT)
            vkGetInstanceProcAddr(m_instance, "vkCreateDebugUtilsMessengerEXT");
        if (createFunc)
            createFunc(m_instance, &debugInfo, nullptr, &m_debugMessenger);
    }
#endif

    // -----------------------------------------------------------------------
    // 2. Create surface from window handle (GLFW)
    // -----------------------------------------------------------------------
    {
        VkResult result = glfwCreateWindowSurface(m_instance, (GLFWwindow *)windowHandle, nullptr, &m_surface);
        assert(result == VK_SUCCESS);
    }

    // -----------------------------------------------------------------------
    // 3. Pick physical device
    // -----------------------------------------------------------------------
    {
        uint32_t deviceCount = 0;
        vkEnumeratePhysicalDevices(m_instance, &deviceCount, nullptr);
        assert(deviceCount > 0);

        std::vector<VkPhysicalDevice> devices(deviceCount);
        vkEnumeratePhysicalDevices(m_instance, &deviceCount, devices.data());

        m_physicalDevice = VK_NULL_HANDLE;
        for (const auto &dev : devices)
        {
            VkPhysicalDeviceProperties props;
            vkGetPhysicalDeviceProperties(dev, &props);
            if (props.deviceType == VK_PHYSICAL_DEVICE_TYPE_DISCRETE_GPU)
            {
                m_physicalDevice = dev;
                break;
            }
        }
        if (m_physicalDevice == VK_NULL_HANDLE)
            m_physicalDevice = devices[0];
    }

    // -----------------------------------------------------------------------
    // 4. Find queue families
    // -----------------------------------------------------------------------
    {
        uint32_t queueFamilyCount = 0;
        vkGetPhysicalDeviceQueueFamilyProperties(m_physicalDevice, &queueFamilyCount, nullptr);
        std::vector<VkQueueFamilyProperties> queueFamilies(queueFamilyCount);
        vkGetPhysicalDeviceQueueFamilyProperties(m_physicalDevice, &queueFamilyCount, queueFamilies.data());

        m_graphicsQueueFamily = UINT32_MAX;
        m_presentQueueFamily  = UINT32_MAX;

        for (uint32_t i = 0; i < queueFamilyCount; ++i)
        {
            if (queueFamilies[i].queueFlags & VK_QUEUE_GRAPHICS_BIT)
                m_graphicsQueueFamily = i;

            VkBool32 presentSupport = false;
            vkGetPhysicalDeviceSurfaceSupportKHR(m_physicalDevice, i, m_surface, &presentSupport);
            if (presentSupport)
                m_presentQueueFamily = i;

            if (m_graphicsQueueFamily != UINT32_MAX && m_presentQueueFamily != UINT32_MAX)
                break;
        }
        assert(m_graphicsQueueFamily != UINT32_MAX);
        assert(m_presentQueueFamily  != UINT32_MAX);
    }

    // -----------------------------------------------------------------------
    // 5. Create logical device
    // -----------------------------------------------------------------------
    {
        float queuePriority = 1.0f;
        std::vector<VkDeviceQueueCreateInfo> queueCreateInfos;

        uint32_t uniqueFamilies[] = { m_graphicsQueueFamily, m_presentQueueFamily };
        uint32_t uniqueCount = (m_graphicsQueueFamily == m_presentQueueFamily) ? 1 : 2;

        for (uint32_t i = 0; i < uniqueCount; ++i)
        {
            VkDeviceQueueCreateInfo queueInfo = {};
            queueInfo.sType            = VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO;
            queueInfo.queueFamilyIndex = uniqueFamilies[i];
            queueInfo.queueCount       = 1;
            queueInfo.pQueuePriorities = &queuePriority;
            queueCreateInfos.push_back(queueInfo);
        }

        const char *deviceExtensions[] = { VK_KHR_SWAPCHAIN_EXTENSION_NAME };

        VkPhysicalDeviceFeatures deviceFeatures = {};
        deviceFeatures.fillModeNonSolid = VK_TRUE;
        deviceFeatures.wideLines        = VK_TRUE;

        VkDeviceCreateInfo deviceInfo = {};
        deviceInfo.sType                   = VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO;
        deviceInfo.queueCreateInfoCount    = static_cast<uint32_t>(queueCreateInfos.size());
        deviceInfo.pQueueCreateInfos       = queueCreateInfos.data();
        deviceInfo.pEnabledFeatures        = &deviceFeatures;
        deviceInfo.enabledExtensionCount   = 1;
        deviceInfo.ppEnabledExtensionNames = deviceExtensions;

        VkResult result = vkCreateDevice(m_physicalDevice, &deviceInfo, nullptr, &m_device);
        assert(result == VK_SUCCESS);

        vkGetDeviceQueue(m_device, m_graphicsQueueFamily, 0, &m_graphicsQueue);
        vkGetDeviceQueue(m_device, m_presentQueueFamily, 0, &m_presentQueue);
    }

    // -----------------------------------------------------------------------
    // 6. Create VMA allocator
    // -----------------------------------------------------------------------
    {
        VmaAllocatorCreateInfo allocatorInfo = {};
        allocatorInfo.physicalDevice = m_physicalDevice;
        allocatorInfo.device         = m_device;
        allocatorInfo.instance       = m_instance;

        VkResult result = vmaCreateAllocator(&allocatorInfo, &m_allocator);
        assert(result == VK_SUCCESS);
    }

    // -----------------------------------------------------------------------
    // 7. Create swapchain
    // -----------------------------------------------------------------------
    {
        VkSurfaceCapabilitiesKHR capabilities;
        vkGetPhysicalDeviceSurfaceCapabilitiesKHR(m_physicalDevice, m_surface, &capabilities);

        uint32_t formatCount = 0;
        vkGetPhysicalDeviceSurfaceFormatsKHR(m_physicalDevice, m_surface, &formatCount, nullptr);
        std::vector<VkSurfaceFormatKHR> formats(formatCount);
        vkGetPhysicalDeviceSurfaceFormatsKHR(m_physicalDevice, m_surface, &formatCount, formats.data());

        uint32_t presentModeCount = 0;
        vkGetPhysicalDeviceSurfacePresentModesKHR(m_physicalDevice, m_surface, &presentModeCount, nullptr);
        std::vector<VkPresentModeKHR> presentModes(presentModeCount);
        vkGetPhysicalDeviceSurfacePresentModesKHR(m_physicalDevice, m_surface, &presentModeCount, presentModes.data());

        // Pick surface format (prefer SRGB)
        VkSurfaceFormatKHR surfaceFormat = formats[0];
        for (const auto &fmt : formats)
        {
            if (fmt.format == VK_FORMAT_B8G8R8A8_SRGB && fmt.colorSpace == VK_COLOR_SPACE_SRGB_NONLINEAR_KHR)
            {
                surfaceFormat = fmt;
                break;
            }
        }
        m_swapchainFormat = surfaceFormat.format;

        // Pick present mode (prefer mailbox for low-latency)
        VkPresentModeKHR presentMode = VK_PRESENT_MODE_FIFO_KHR;
        for (const auto &mode : presentModes)
        {
            if (mode == VK_PRESENT_MODE_MAILBOX_KHR)
            {
                presentMode = mode;
                break;
            }
        }

        // Extent
        if (capabilities.currentExtent.width != UINT32_MAX)
        {
            m_swapchainExtent = capabilities.currentExtent;
        }
        else
        {
            m_swapchainExtent.width  = std::max(capabilities.minImageExtent.width,
                                                std::min(capabilities.maxImageExtent.width, width));
            m_swapchainExtent.height = std::max(capabilities.minImageExtent.height,
                                                std::min(capabilities.maxImageExtent.height, height));
        }
        backBufferWidth  = m_swapchainExtent.width;
        backBufferHeight = m_swapchainExtent.height;

        uint32_t imageCount = capabilities.minImageCount + 1;
        if (capabilities.maxImageCount > 0 && imageCount > capabilities.maxImageCount)
            imageCount = capabilities.maxImageCount;

        VkSwapchainCreateInfoKHR swapInfo = {};
        swapInfo.sType            = VK_STRUCTURE_TYPE_SWAPCHAIN_CREATE_INFO_KHR;
        swapInfo.surface          = m_surface;
        swapInfo.minImageCount    = imageCount;
        swapInfo.imageFormat      = surfaceFormat.format;
        swapInfo.imageColorSpace  = surfaceFormat.colorSpace;
        swapInfo.imageExtent      = m_swapchainExtent;
        swapInfo.imageArrayLayers = 1;
        swapInfo.imageUsage       = VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT | VK_IMAGE_USAGE_TRANSFER_SRC_BIT;

        if (m_graphicsQueueFamily != m_presentQueueFamily)
        {
            uint32_t families[] = { m_graphicsQueueFamily, m_presentQueueFamily };
            swapInfo.imageSharingMode      = VK_SHARING_MODE_CONCURRENT;
            swapInfo.queueFamilyIndexCount = 2;
            swapInfo.pQueueFamilyIndices   = families;
        }
        else
        {
            swapInfo.imageSharingMode = VK_SHARING_MODE_EXCLUSIVE;
        }

        swapInfo.preTransform   = capabilities.currentTransform;
        swapInfo.compositeAlpha = VK_COMPOSITE_ALPHA_OPAQUE_BIT_KHR;
        swapInfo.presentMode    = presentMode;
        swapInfo.clipped        = VK_TRUE;
        swapInfo.oldSwapchain   = VK_NULL_HANDLE;

        VkResult result = vkCreateSwapchainKHR(m_device, &swapInfo, nullptr, &m_swapchain);
        assert(result == VK_SUCCESS);

        // Retrieve swapchain images
        vkGetSwapchainImagesKHR(m_device, m_swapchain, &imageCount, nullptr);
        m_swapchainImages.resize(imageCount);
        vkGetSwapchainImagesKHR(m_device, m_swapchain, &imageCount, m_swapchainImages.data());

        // Create image views
        m_swapchainImageViews.resize(imageCount);
        for (uint32_t i = 0; i < imageCount; ++i)
        {
            VkImageViewCreateInfo viewInfo = {};
            viewInfo.sType    = VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO;
            viewInfo.image    = m_swapchainImages[i];
            viewInfo.viewType = VK_IMAGE_VIEW_TYPE_2D;
            viewInfo.format   = m_swapchainFormat;
            viewInfo.subresourceRange.aspectMask     = VK_IMAGE_ASPECT_COLOR_BIT;
            viewInfo.subresourceRange.baseMipLevel   = 0;
            viewInfo.subresourceRange.levelCount     = 1;
            viewInfo.subresourceRange.baseArrayLayer = 0;
            viewInfo.subresourceRange.layerCount     = 1;

            vkCreateImageView(m_device, &viewInfo, nullptr, &m_swapchainImageViews[i]);
        }
    }

    // -----------------------------------------------------------------------
    // 8. Create depth buffer
    // -----------------------------------------------------------------------
    m_depthFormat = VK_FORMAT_D32_SFLOAT;
    {
        VkImageCreateInfo imgInfo = {};
        imgInfo.sType       = VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO;
        imgInfo.imageType   = VK_IMAGE_TYPE_2D;
        imgInfo.format      = m_depthFormat;
        imgInfo.extent      = { m_swapchainExtent.width, m_swapchainExtent.height, 1 };
        imgInfo.mipLevels   = 1;
        imgInfo.arrayLayers = 1;
        imgInfo.samples     = VK_SAMPLE_COUNT_1_BIT;
        imgInfo.tiling      = VK_IMAGE_TILING_OPTIMAL;
        imgInfo.usage       = VK_IMAGE_USAGE_DEPTH_STENCIL_ATTACHMENT_BIT;

        VmaAllocationCreateInfo allocInfo = {};
        allocInfo.usage = VMA_MEMORY_USAGE_GPU_ONLY;

        vmaCreateImage(m_allocator, &imgInfo, &allocInfo,
                       &m_depthImage.image, &m_depthImage.allocation, nullptr);

        VkImageViewCreateInfo viewInfo = {};
        viewInfo.sType    = VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO;
        viewInfo.image    = m_depthImage.image;
        viewInfo.viewType = VK_IMAGE_VIEW_TYPE_2D;
        viewInfo.format   = m_depthFormat;
        viewInfo.subresourceRange.aspectMask     = VK_IMAGE_ASPECT_DEPTH_BIT;
        viewInfo.subresourceRange.baseMipLevel   = 0;
        viewInfo.subresourceRange.levelCount     = 1;
        viewInfo.subresourceRange.baseArrayLayer = 0;
        viewInfo.subresourceRange.layerCount     = 1;

        vkCreateImageView(m_device, &viewInfo, nullptr, &m_depthImageView);
    }

    // -----------------------------------------------------------------------
    // 9. Command pool
    // -----------------------------------------------------------------------
    {
        VkCommandPoolCreateInfo poolInfo = {};
        poolInfo.sType            = VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO;
        poolInfo.flags            = VK_COMMAND_POOL_CREATE_RESET_COMMAND_BUFFER_BIT;
        poolInfo.queueFamilyIndex = m_graphicsQueueFamily;

        vkCreateCommandPool(m_device, &poolInfo, nullptr, &m_commandPool);

        VkCommandBufferAllocateInfo allocInfo = {};
        allocInfo.sType              = VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO;
        allocInfo.commandPool        = m_commandPool;
        allocInfo.level              = VK_COMMAND_BUFFER_LEVEL_PRIMARY;
        allocInfo.commandBufferCount = VK_MAX_FRAMES_IN_FLIGHT;

        vkAllocateCommandBuffers(m_device, &allocInfo, m_drawCommandBuffers.data());
    }

    // -----------------------------------------------------------------------
    // 10. Setup sub-systems
    // -----------------------------------------------------------------------
    SetupRenderPass();
    SetupFramebuffers();
    SetupShaders();
    SetupDescriptorLayouts();
    SetupSyncObjects();
    SetupIndexBuffers();
    SetupUniformBuffers();

    // -----------------------------------------------------------------------
    // 11. Context for the main thread
    // -----------------------------------------------------------------------
    InitialiseContext(true);

    #ifdef ENABLE_PROFILING
    MicroProfileOnThreadCreate("MainRenderThread");
    MicroProfileSetEnableAllGroups(true);
    #endif

    // -----------------------------------------------------------------------
    // 12. Command buffer system (game-level, not Vulkan)
    // -----------------------------------------------------------------------
    m_commandHandleToIndex = new int16_t[NUM_COMMAND_HANDLES];
    m_commandBuffers       = new CommandBuffer *[MAX_COMMAND_BUFFERS];
    m_commandMatrices      = new Mat4x4[MAX_COMMAND_BUFFERS];
    m_commandIndexToHandle = new int[MAX_COMMAND_BUFFERS];
    m_commandVertexTypes   = new uint8_t[MAX_COMMAND_BUFFERS];
    m_commandPrimitiveTypes = new uint8_t[MAX_COMMAND_BUFFERS];

    memset(m_commandHandleToIndex, 0xFF, NUM_COMMAND_HANDLES * sizeof(int16_t));
    memset(m_commandBuffers, 0, MAX_COMMAND_BUFFERS * sizeof(CommandBuffer *));
    memset(m_commandIndexToHandle, 0, MAX_COMMAND_BUFFERS * sizeof(int));
    memset(m_commandVertexTypes, 0, MAX_COMMAND_BUFFERS);
    memset(m_commandPrimitiveTypes, 0, MAX_COMMAND_BUFFERS);

    reservedRendererDword2 = 0;
    reservedRendererDword3 = 0;
    m_bShouldScreenGrabNextFrame = false;
    m_bSuspended = false;

    // -----------------------------------------------------------------------
    // 13. Textures
    // -----------------------------------------------------------------------
    memset(m_textures, 0, sizeof(m_textures));
    defaultTextureIndex = TextureCreate();
    TextureBind(defaultTextureIndex);

    // Create default 1×1 white texture
    unsigned char whitePixel[4] = { 0xFF, 0xFF, 0xFF, 0xFF };
    TextureData(1, 1, whitePixel, 0, C4JRender::TEXTURE_FORMAT_RxGyBzAw);

    // -----------------------------------------------------------------------
    // 14. Dynamic vertex buffer (host-visible, persistently mapped)
    // -----------------------------------------------------------------------
    {
        Renderer::Context &c = getContext();

        VkBufferCreateInfo bufInfo = {};
        bufInfo.sType = VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO;
        bufInfo.size  = kVertexBufferSize;
        bufInfo.usage = VK_BUFFER_USAGE_VERTEX_BUFFER_BIT;

        VmaAllocationCreateInfo allocInfo = {};
        allocInfo.usage = VMA_MEMORY_USAGE_CPU_TO_GPU;
        allocInfo.flags = VMA_ALLOCATION_CREATE_MAPPED_BIT;

        VmaAllocationInfo allocationInfo = {};
        vmaCreateBuffer(m_allocator, &bufInfo, &allocInfo,
                        &c.dynamicVertexBuffer.buffer, &c.dynamicVertexBuffer.allocation, &allocationInfo);
        c.dynamicVertexMapped  = allocationInfo.pMappedData;
        c.dynamicVertexBase    = reinterpret_cast<uint64_t>(c.dynamicVertexMapped);
        c.dynamicVertexOffset  = 0;
    }

    // -----------------------------------------------------------------------
    // 15. Final state init
    // -----------------------------------------------------------------------
    const float clearColour[4] = { 0.0f, 0.0f, 0.0f, 0.0f };
    SetClearColour(clearColour);

    presentCount    = 0;
    activeVertexType = static_cast<uint32_t>(-1);
    activePixelType  = static_cast<uint32_t>(-1);
    m_ViewportType  = C4JRender::VIEWPORT_TYPE_FULLSCREEN;

    StateSetViewport(C4JRender::VIEWPORT_TYPE_FULLSCREEN);
    StateSetVertexTextureUV(0.0f, 0.0f);
    TextureBindVertex(-1);
}

// ---------------------------------------------------------------------------
// StartFrame
// ---------------------------------------------------------------------------
void Renderer::StartFrame()
{
    PROFILER_SCOPE("Renderer::StartFrame", "StartFrame", MP_MAGENTA)

    // Wait for the previous frame using this slot to finish
    vkWaitForFences(m_device, 1, &m_inFlightFences[m_currentFrame], VK_TRUE, UINT64_MAX);
    vkResetFences(m_device, 1, &m_inFlightFences[m_currentFrame]);

    // Acquire next swapchain image
    VkResult acquireResult = vkAcquireNextImageKHR(
        m_device, m_swapchain, UINT64_MAX,
        m_imageAvailableSemaphores[m_currentFrame], VK_NULL_HANDLE, &m_currentImageIndex);

    if (acquireResult == VK_ERROR_OUT_OF_DATE_KHR)
    {
        // TODO: handle swapchain recreation
        return;
    }

    // Reset and begin command buffer
    VkCommandBuffer cmd = m_drawCommandBuffers[m_currentFrame];
    vkResetCommandBuffer(cmd, 0);

    VkCommandBufferBeginInfo beginInfo = {};
    beginInfo.sType = VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO;
    vkBeginCommandBuffer(cmd, &beginInfo);

    // Begin render pass
    VkRenderPassBeginInfo rpBeginInfo = {};
    rpBeginInfo.sType             = VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO;
    rpBeginInfo.renderPass        = m_renderPass;
    rpBeginInfo.framebuffer       = m_swapchainFramebuffers[m_currentImageIndex];
    rpBeginInfo.renderArea.offset = { 0, 0 };
    rpBeginInfo.renderArea.extent = m_swapchainExtent;

    VkClearValue clearValues[2] = {};
    clearValues[0].color = {{ m_fClearColor[0], m_fClearColor[1], m_fClearColor[2], m_fClearColor[3] }};
    clearValues[1].depthStencil = { 1.0f, 0 };

    rpBeginInfo.clearValueCount = 2;
    rpBeginInfo.pClearValues    = clearValues;

    vkCmdBeginRenderPass(cmd, &rpBeginInfo, VK_SUBPASS_CONTENTS_INLINE);
    m_renderPassActive = true;

    // Set default viewport and scissor
    VkViewport viewport = {};
    viewport.x        = 0.0f;
    viewport.y        = 0.0f;
    viewport.width    = static_cast<float>(backBufferWidth);
    viewport.height   = static_cast<float>(backBufferHeight);
    viewport.minDepth = 0.0f;
    viewport.maxDepth = 1.0f;
    vkCmdSetViewport(cmd, 0, 1, &viewport);

    VkRect2D scissor = {};
    scissor.offset = { 0, 0 };
    scissor.extent = m_swapchainExtent;
    vkCmdSetScissor(cmd, 0, 1, &scissor);

    // Reset per-frame state
    activeVertexType = static_cast<uint32_t>(-1);
    activePixelType  = static_cast<uint32_t>(-1);

    TextureBindVertex(-1);
    TextureBind(-1);

    PROFILER_SCOPE("Renderer::StartFrame", "State", MP_MAGENTA)

    StateSetColour(1.0f, 1.0f, 1.0f, 1.0f);
    StateSetDepthMask(true);
    StateSetBlendEnable(true);
    StateSetBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    StateSetBlendFactor(0xFFFFFFFF);
    StateSetAlphaFunc(GL_GREATER, 0.1f);
    StateSetDepthFunc(GL_LEQUAL);
    StateSetFaceCull(true);
    StateSetLineWidth(1.0f);
    StateSetWriteEnable(true, true, true, true);
    StateSetDepthTestEnable(false);
    StateSetAlphaTestEnable(true);

    // Reset dynamic vertex offset
    Renderer::Context &c = getContext();
    c.dynamicVertexOffset = 0;

    #ifdef ENABLE_PROFILING
    MicroProfileFlip(nullptr);
    #endif
}

// ---------------------------------------------------------------------------
// Present
// ---------------------------------------------------------------------------
void Renderer::Present()
{
    PROFILER_SCOPE("Renderer::Present", "Present", MP_MAGENTA)

    VkCommandBuffer cmd = m_drawCommandBuffers[m_currentFrame];

    // End the render pass
    if (m_renderPassActive)
    {
        vkCmdEndRenderPass(cmd);
        m_renderPassActive = false;
    }

    // Handle screen grab before ending the command buffer
    if (m_bShouldScreenGrabNextFrame)
    {
        // TODO: implement Vulkan screen capture (vkCmdCopyImageToBuffer + readback)
        m_bShouldScreenGrabNextFrame = false;
    }

    // End command buffer
    vkEndCommandBuffer(cmd);

    // Submit
    VkSemaphore waitSemaphores[]      = { m_imageAvailableSemaphores[m_currentFrame] };
    VkPipelineStageFlags waitStages[] = { VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT };
    VkSemaphore signalSemaphores[]    = { m_renderFinishedSemaphores[m_currentFrame] };

    VkSubmitInfo submitInfo = {};
    submitInfo.sType                = VK_STRUCTURE_TYPE_SUBMIT_INFO;
    submitInfo.waitSemaphoreCount   = 1;
    submitInfo.pWaitSemaphores      = waitSemaphores;
    submitInfo.pWaitDstStageMask    = waitStages;
    submitInfo.commandBufferCount   = 1;
    submitInfo.pCommandBuffers      = &cmd;
    submitInfo.signalSemaphoreCount = 1;
    submitInfo.pSignalSemaphores    = signalSemaphores;

    vkQueueSubmit(m_graphicsQueue, 1, &submitInfo, m_inFlightFences[m_currentFrame]);

    // Present
    VkPresentInfoKHR presentInfo = {};
    presentInfo.sType              = VK_STRUCTURE_TYPE_PRESENT_INFO_KHR;
    presentInfo.waitSemaphoreCount = 1;
    presentInfo.pWaitSemaphores    = signalSemaphores;
    presentInfo.swapchainCount     = 1;
    presentInfo.pSwapchains        = &m_swapchain;
    presentInfo.pImageIndices      = &m_currentImageIndex;

    VkResult presentResult = vkQueuePresentKHR(m_presentQueue, &presentInfo);
    if (presentResult == VK_ERROR_OUT_OF_DATE_KHR || presentResult == VK_SUBOPTIMAL_KHR)
    {
        // TODO: handle swapchain recreation
    }

    // Advance frame index
    m_currentFrame = (m_currentFrame + 1) % VK_MAX_FRAMES_IN_FLIGHT;
    ++presentCount;
}

// ---------------------------------------------------------------------------
// Clear
// ---------------------------------------------------------------------------
void Renderer::Clear(int flags, VkRect2D *pRect)
{
    PROFILER_SCOPE("Renderer::Clear", "Clear", MP_MAGENTA)

    if (!m_renderPassActive)
        return;

    VkCommandBuffer cmd = m_drawCommandBuffers[m_currentFrame];

    // If no rect specified, do a full attachment clear via vkCmdClearAttachments
    uint32_t attachmentCount = 0;
    VkClearAttachment clearAttachments[2] = {};

    if (flags & CLEAR_COLOUR_FLAG)
    {
        clearAttachments[attachmentCount].aspectMask      = VK_IMAGE_ASPECT_COLOR_BIT;
        clearAttachments[attachmentCount].colorAttachment = 0;
        clearAttachments[attachmentCount].clearValue.color = {{ m_fClearColor[0], m_fClearColor[1], m_fClearColor[2], m_fClearColor[3] }};
        ++attachmentCount;
    }

    if (flags & CLEAR_DEPTH_FLAG)
    {
        clearAttachments[attachmentCount].aspectMask = VK_IMAGE_ASPECT_DEPTH_BIT;
        clearAttachments[attachmentCount].clearValue.depthStencil = { 1.0f, 0 };
        ++attachmentCount;
    }

    if (attachmentCount == 0)
        return;

    VkClearRect clearRect = {};
    if (pRect)
    {
        clearRect.rect = *pRect;
    }
    else
    {
        clearRect.rect.offset = { 0, 0 };
        clearRect.rect.extent = m_swapchainExtent;
    }
    clearRect.baseArrayLayer = 0;
    clearRect.layerCount     = 1;

    vkCmdClearAttachments(cmd, attachmentCount, clearAttachments, 1, &clearRect);

    activeVertexType = static_cast<uint32_t>(-1);
    activePixelType  = static_cast<uint32_t>(-1);
}

// ---------------------------------------------------------------------------
// SetClearColour
// ---------------------------------------------------------------------------
void Renderer::SetClearColour(const float colourRGBA[4])
{
    for (int i = 0; i < 4; ++i)
        m_fClearColor[i] = colourRGBA[i];

    // Update the fragment UBO clear colour for shaders that reference it
    if (tlsContext)
    {
        Renderer::Context &c = getContext();
        c.fragmentUBO.clear_colour = Float4(colourRGBA[0], colourRGBA[1], colourRGBA[2], colourRGBA[3]);
        c.uniformsDirty = true;
    }
}

// ---------------------------------------------------------------------------
// ConvertLinearToPng
// ---------------------------------------------------------------------------
void Renderer::ConvertLinearToPng(ImageFileBuffer *pngOut, unsigned char *linearData, unsigned int width, unsigned int height)
{
    const size_t dataSize       = static_cast<size_t>(width) * static_cast<size_t>(height) * 4;
    const size_t outputCapacity = (dataSize * 24) / 20 + 256;

    void *outputBuffer = malloc(outputCapacity);
    int outputLength = 0;

    SaveTextureDataToMemory(
        outputBuffer,
        static_cast<int>(outputCapacity),
        &outputLength,
        static_cast<int>(width),
        static_cast<int>(height),
        reinterpret_cast<int *>(linearData)
    );

    pngOut->m_type       = ImageFileBuffer::e_typePNG;
    pngOut->m_pBuffer    = outputBuffer;
    pngOut->m_bufferSize = outputLength;
}

// ---------------------------------------------------------------------------
// Screen capture / thumbnail
// ---------------------------------------------------------------------------
void Renderer::DoScreenGrabOnNextPresent()
{
    m_bShouldScreenGrabNextFrame = true;
}

void Renderer::CaptureScreen(ImageFileBuffer *, XSOCIAL_PREVIEWIMAGE *)
{
    // TODO: implement Vulkan screen capture
    // Use vkCmdCopyImageToBuffer to read the swapchain image into a staging buffer,
    // then encode as PNG/JPG.
}

void Renderer::CaptureThumbnail(ImageFileBuffer *pngOut)
{
    // TODO: implement Vulkan thumbnail capture
    // Requires rendering to offscreen render targets at reduced resolution,
    // then reading back via staging buffer.
    (void)pngOut;
}

// ---------------------------------------------------------------------------
// Simple getters / state
// ---------------------------------------------------------------------------
bool Renderer::IsHiDef()
{
    return true;
}

bool Renderer::IsWidescreen()
{
    return true;
}

// ---------------------------------------------------------------------------
// Conditional survey / rendering (stubs – no Vulkan equivalent needed)
// ---------------------------------------------------------------------------
void Renderer::BeginConditionalSurvey(int) {}
void Renderer::EndConditionalSurvey() {}
void Renderer::BeginConditionalRendering(int) {}
void Renderer::EndConditionalRendering() {}

// ---------------------------------------------------------------------------
// Debug events (VK_EXT_debug_utils)
// ---------------------------------------------------------------------------
void Renderer::BeginEvent(const wchar_t *eventName)
{
#ifndef NDEBUG
    auto cmdBeginLabel = (PFN_vkCmdBeginDebugUtilsLabelEXT)
        vkGetInstanceProcAddr(m_instance, "vkCmdBeginDebugUtilsLabelEXT");
    if (cmdBeginLabel && m_renderPassActive)
    {
        // Convert wide string to narrow for Vulkan label
        char narrowName[256];
        size_t i = 0;
        while (eventName[i] && i < sizeof(narrowName) - 1)
        {
            narrowName[i] = static_cast<char>(eventName[i]);
            ++i;
        }
        narrowName[i] = '\0';

        VkDebugUtilsLabelEXT label = {};
        label.sType      = VK_STRUCTURE_TYPE_DEBUG_UTILS_LABEL_EXT;
        label.pLabelName = narrowName;
        label.color[0]   = 1.0f;
        label.color[1]   = 0.0f;
        label.color[2]   = 1.0f;
        label.color[3]   = 1.0f;

        VkCommandBuffer cmd = m_drawCommandBuffers[m_currentFrame];
        cmdBeginLabel(cmd, &label);
    }
#else
    (void)eventName;
#endif

    Renderer::Context &c = getContext();
    ++c.annotateDepth;
}

void Renderer::EndEvent()
{
    Renderer::Context &c = getContext();
    --c.annotateDepth;
    assert(c.annotateDepth >= 0);

#ifndef NDEBUG
    auto cmdEndLabel = (PFN_vkCmdEndDebugUtilsLabelEXT)
        vkGetInstanceProcAddr(m_instance, "vkCmdEndDebugUtilsLabelEXT");
    if (cmdEndLabel && m_renderPassActive)
    {
        VkCommandBuffer cmd = m_drawCommandBuffers[m_currentFrame];
        cmdEndLabel(cmd);
    }
#endif
}

// ---------------------------------------------------------------------------
// Suspend / Resume
// ---------------------------------------------------------------------------
void Renderer::Suspend()
{
    m_bSuspended = true;
}

bool Renderer::Suspended()
{
    return m_bSuspended;
}

void Renderer::Resume()
{
    m_bSuspended = false;
}

// ---------------------------------------------------------------------------
// UpdateGamma (no-op – gamma handled by swapchain format / post-process)
// ---------------------------------------------------------------------------
void Renderer::UpdateGamma(unsigned short) {}
