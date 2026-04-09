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

#include <cstring>
#include <cmath>
#include <limits>

// ─── Sampler cache ──────────────────────────────────────────────────────────

VkSampler Renderer::GetManagedSampler(uint32_t params)
{
    PROFILER_SCOPE("Renderer::GetManagedSampler", "GetManagedSampler", MP_ORCHID1)

    auto it = managedSamplers.find(params);
    if (it != managedSamplers.end())
        return it->second;

    const bool clampU = (params & 0x01) != 0;
    const bool clampV = (params & 0x02) != 0;
    const bool linearMin = (params & 0x04) != 0;
    const bool linearMag = (params & 0x08) != 0;

    VkSamplerCreateInfo samplerInfo = {};
    samplerInfo.sType = VK_STRUCTURE_TYPE_SAMPLER_CREATE_INFO;
    samplerInfo.minFilter = linearMin ? VK_FILTER_LINEAR : VK_FILTER_NEAREST;
    samplerInfo.magFilter = linearMag ? VK_FILTER_LINEAR : VK_FILTER_NEAREST;
    samplerInfo.mipmapMode = linearMin ? VK_SAMPLER_MIPMAP_MODE_LINEAR : VK_SAMPLER_MIPMAP_MODE_NEAREST;
    samplerInfo.addressModeU = clampU ? VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE : VK_SAMPLER_ADDRESS_MODE_REPEAT;
    samplerInfo.addressModeV = clampV ? VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE : VK_SAMPLER_ADDRESS_MODE_REPEAT;
    samplerInfo.addressModeW = VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE;
    samplerInfo.mipLodBias = 0.0f;
    samplerInfo.anisotropyEnable = VK_TRUE;
    samplerInfo.maxAnisotropy = 16.0f;
    samplerInfo.compareEnable = VK_FALSE;
    samplerInfo.compareOp = VK_COMPARE_OP_NEVER;
    samplerInfo.minLod = 0.0f;
    samplerInfo.maxLod = VK_LOD_CLAMP_NONE;
    samplerInfo.borderColor = VK_BORDER_COLOR_FLOAT_TRANSPARENT_BLACK;
    samplerInfo.unnormalizedCoordinates = VK_FALSE;

    VkSampler sampler = VK_NULL_HANDLE;
    vkCreateSampler(m_device, &samplerInfo, nullptr, &sampler);
    managedSamplers.emplace(params, sampler);
    return sampler;
}

// ─── Pipeline cache ─────────────────────────────────────────────────────────

VkPipeline Renderer::GetOrCreatePipeline(const PipelineStateKey &key)
{
    PROFILER_SCOPE("Renderer::GetOrCreatePipeline", "GetOrCreatePipeline", MP_ORCHID1)

    auto it = m_pipelineCache.find(key);
    if (it != m_pipelineCache.end())
        return it->second;

    // --- Shader stages ---
    VkPipelineShaderStageCreateInfo shaderStages[2] = {};
    shaderStages[0].sType = VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO;
    shaderStages[0].stage = VK_SHADER_STAGE_VERTEX_BIT;
    shaderStages[0].module = m_vertexShaders[key.vertexType];
    shaderStages[0].pName = "main";
    shaderStages[1].sType = VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO;
    shaderStages[1].stage = VK_SHADER_STAGE_FRAGMENT_BIT;
    shaderStages[1].module = m_pixelShaders[key.pixelShaderType];
    shaderStages[1].pName = "main";

    // --- Vertex input (empty – provided by vertex buffer bindings set up elsewhere) ---
    VkPipelineVertexInputStateCreateInfo vertexInputInfo = {};
    vertexInputInfo.sType = VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO;

    // --- Input assembly ---
    VkPipelineInputAssemblyStateCreateInfo inputAssembly = {};
    inputAssembly.sType = VK_STRUCTURE_TYPE_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO;
    inputAssembly.topology = static_cast<VkPrimitiveTopology>(key.topology);
    inputAssembly.primitiveRestartEnable = VK_FALSE;

    // --- Viewport / scissor (dynamic state) ---
    VkPipelineViewportStateCreateInfo viewportState = {};
    viewportState.sType = VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_STATE_CREATE_INFO;
    viewportState.viewportCount = 1;
    viewportState.scissorCount = 1;

    // --- Rasterizer ---
    VkPipelineRasterizationStateCreateInfo rasterizer = {};
    rasterizer.sType = VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_CREATE_INFO;
    rasterizer.depthClampEnable = VK_FALSE;
    rasterizer.rasterizerDiscardEnable = VK_FALSE;
    rasterizer.polygonMode = VK_POLYGON_MODE_FILL;
    rasterizer.lineWidth = 1.0f;

    if (!key.rasterizer.cullEnable)
        rasterizer.cullMode = VK_CULL_MODE_NONE;
    else
        rasterizer.cullMode = key.rasterizer.cullCW ? VK_CULL_MODE_BACK_BIT : VK_CULL_MODE_FRONT_BIT;

    rasterizer.frontFace = VK_FRONT_FACE_CLOCKWISE;
    rasterizer.depthBiasEnable = (key.rasterizer.depthBiasConstant != 0.0f || key.rasterizer.depthBiasSlope != 0.0f) ? VK_TRUE : VK_FALSE;
    rasterizer.depthBiasConstantFactor = key.rasterizer.depthBiasConstant;
    rasterizer.depthBiasSlopeFactor = key.rasterizer.depthBiasSlope;
    rasterizer.depthBiasClamp = 0.0f;

    // --- Multisampling ---
    VkPipelineMultisampleStateCreateInfo multisampling = {};
    multisampling.sType = VK_STRUCTURE_TYPE_PIPELINE_MULTISAMPLE_STATE_CREATE_INFO;
    multisampling.sampleShadingEnable = VK_FALSE;
    multisampling.rasterizationSamples = VK_SAMPLE_COUNT_1_BIT;

    // --- Depth / stencil ---
    VkPipelineDepthStencilStateCreateInfo depthStencil = {};
    depthStencil.sType = VK_STRUCTURE_TYPE_PIPELINE_DEPTH_STENCIL_STATE_CREATE_INFO;
    depthStencil.depthTestEnable = key.depthStencil.depthTestEnable ? VK_TRUE : VK_FALSE;
    depthStencil.depthWriteEnable = key.depthStencil.depthWriteEnable ? VK_TRUE : VK_FALSE;
    depthStencil.depthCompareOp = MapCompareOp(key.depthStencil.depthFunc);
    depthStencil.depthBoundsTestEnable = VK_FALSE;
    depthStencil.stencilTestEnable = key.depthStencil.stencilEnable ? VK_TRUE : VK_FALSE;

    if (key.depthStencil.stencilEnable)
    {
        VkStencilOpState stencilOp = {};
        stencilOp.failOp = VK_STENCIL_OP_KEEP;
        stencilOp.passOp = VK_STENCIL_OP_REPLACE;
        stencilOp.depthFailOp = VK_STENCIL_OP_KEEP;
        stencilOp.compareOp = MapCompareOp(key.depthStencil.stencilFunc);
        stencilOp.compareMask = key.depthStencil.stencilFuncMask;
        stencilOp.writeMask = key.depthStencil.stencilWriteMask;
        stencilOp.reference = key.depthStencil.stencilRef;
        depthStencil.front = stencilOp;
        depthStencil.back = stencilOp;
    }

    // --- Color blending ---
    VkPipelineColorBlendAttachmentState colorBlendAttachment = {};
    colorBlendAttachment.blendEnable = key.blend.blendEnable ? VK_TRUE : VK_FALSE;
    colorBlendAttachment.srcColorBlendFactor = MapBlendFactor(key.blend.srcBlend);
    colorBlendAttachment.dstColorBlendFactor = MapBlendFactor(key.blend.dstBlend);
    colorBlendAttachment.colorBlendOp = VK_BLEND_OP_ADD;
    colorBlendAttachment.srcAlphaBlendFactor = MapBlendFactor(key.blend.srcBlend);
    colorBlendAttachment.dstAlphaBlendFactor = MapBlendFactor(key.blend.dstBlend);
    colorBlendAttachment.alphaBlendOp = VK_BLEND_OP_ADD;

    colorBlendAttachment.colorWriteMask = 0;
    if (key.blend.writeMask & 0x1) colorBlendAttachment.colorWriteMask |= VK_COLOR_COMPONENT_R_BIT;
    if (key.blend.writeMask & 0x2) colorBlendAttachment.colorWriteMask |= VK_COLOR_COMPONENT_G_BIT;
    if (key.blend.writeMask & 0x4) colorBlendAttachment.colorWriteMask |= VK_COLOR_COMPONENT_B_BIT;
    if (key.blend.writeMask & 0x8) colorBlendAttachment.colorWriteMask |= VK_COLOR_COMPONENT_A_BIT;

    VkPipelineColorBlendStateCreateInfo colorBlending = {};
    colorBlending.sType = VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_STATE_CREATE_INFO;
    colorBlending.logicOpEnable = VK_FALSE;
    colorBlending.attachmentCount = 1;
    colorBlending.pAttachments = &colorBlendAttachment;

    // --- Dynamic state ---
    VkDynamicState dynamicStates[] = {
        VK_DYNAMIC_STATE_VIEWPORT,
        VK_DYNAMIC_STATE_SCISSOR,
        VK_DYNAMIC_STATE_DEPTH_BIAS,
        VK_DYNAMIC_STATE_BLEND_CONSTANTS,
        VK_DYNAMIC_STATE_LINE_WIDTH
    };

    VkPipelineDynamicStateCreateInfo dynamicState = {};
    dynamicState.sType = VK_STRUCTURE_TYPE_PIPELINE_DYNAMIC_STATE_CREATE_INFO;
    dynamicState.dynamicStateCount = sizeof(dynamicStates) / sizeof(dynamicStates[0]);
    dynamicState.pDynamicStates = dynamicStates;

    // --- Create pipeline ---
    VkGraphicsPipelineCreateInfo pipelineInfo = {};
    pipelineInfo.sType = VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO;
    pipelineInfo.stageCount = 2;
    pipelineInfo.pStages = shaderStages;
    pipelineInfo.pVertexInputState = &vertexInputInfo;
    pipelineInfo.pInputAssemblyState = &inputAssembly;
    pipelineInfo.pViewportState = &viewportState;
    pipelineInfo.pRasterizationState = &rasterizer;
    pipelineInfo.pMultisampleState = &multisampling;
    pipelineInfo.pDepthStencilState = &depthStencil;
    pipelineInfo.pColorBlendState = &colorBlending;
    pipelineInfo.pDynamicState = &dynamicState;
    pipelineInfo.layout = m_pipelineLayout;
    pipelineInfo.renderPass = m_renderPass;
    pipelineInfo.subpass = 0;

    VkPipeline pipeline = VK_NULL_HANDLE;
    vkCreateGraphicsPipelines(m_device, VK_NULL_HANDLE, 1, &pipelineInfo, nullptr, &pipeline);
    m_pipelineCache.emplace(key, pipeline);
    return pipeline;
}

// ─── Fog state ──────────────────────────────────────────────────────────────

void Renderer::StateSetFogEnable(bool enable)
{
    Context &c = getContext();
    c.fogEnabled = enable;
}

void Renderer::StateSetFogMode(int mode)
{
    Context &c = getContext();
    c.fogMode = mode;
}

void Renderer::StateSetFogNearDistance(float dist)
{
    Context &c = getContext();
    c.fogNearDistance = dist;
}

void Renderer::StateSetFogFarDistance(float dist)
{
    Context &c = getContext();
    c.fogFarDistance = dist;
}

void Renderer::StateSetFogDensity(float density)
{
    Context &c = getContext();
    c.fogDensity = density;
}

void Renderer::StateSetFogColour(float red, float green, float blue)
{
    Context &c = getContext();
    c.fogColourRed = red;
    c.fogColourBlue = blue;
    c.fogColourGreen = green;
}

void Renderer::UpdateFogState()
{
    PROFILER_SCOPE("Renderer::UpdateFogState", "UpdateFogState", MP_ORCHID1)
    Context &c = getContext();

    Float4 fogParams = {};
    if (c.fogEnabled)
    {
        if (c.fogMode == 1)
        {
            fogParams.x = c.fogFarDistance;
            fogParams.y = 1.0f / (c.fogFarDistance - c.fogNearDistance);
            fogParams.z = 1.0f;
        }
        else
        {
            fogParams.x = c.fogDensity;
            fogParams.z = 2.0f;
        }
    }

    c.vertexUBO.vecFog = fogParams;
    c.fragmentUBO.fog_colour = Float4(c.fogColourRed, c.fogColourGreen, c.fogColourBlue, 1.0f);
    c.uniformsDirty = true;
}

// ─── Lighting state ─────────────────────────────────────────────────────────

void Renderer::StateSetLightingEnable(bool enable)
{
    Context &c = getContext();
    if (c.commandBuffer != NULL && c.commandBuffer->isActive != 0)
    {
        c.commandBuffer->SetLightingEnable(enable);
        return;
    }
    c.lightingEnabled = enable;
}

void Renderer::StateSetLightColour(int light, float red, float green, float blue)
{
    if (light >= 2)
        return;

    Context &c = getContext();
    if (c.commandBuffer != NULL && c.commandBuffer->isActive != 0)
    {
        c.commandBuffer->SetLightColour(light, red, green, blue);
        return;
    }

    c.lightColour[light].x = red;
    c.lightColour[light].y = green;
    c.lightColour[light].z = blue;
    c.lightColour[light].w = 1.0f;
    c.lightingDirty = true;
}

void Renderer::StateSetLightAmbientColour(float red, float green, float blue)
{
    Context &c = getContext();
    if (c.commandBuffer != NULL && c.commandBuffer->isActive != 0)
    {
        c.commandBuffer->SetLightAmbientColour(red, green, blue);
        return;
    }

    c.lightAmbientColour.x = red;
    c.lightAmbientColour.y = green;
    c.lightAmbientColour.z = blue;
    c.lightAmbientColour.w = 1.0f;
    c.lightingDirty = true;
}

void Renderer::StateSetLightEnable(int light, bool enable)
{
    if (light >= 2)
        return;

    Context &c = getContext();
    if (c.commandBuffer != NULL && c.commandBuffer->isActive != 0)
    {
        c.commandBuffer->SetLightEnable(light, enable);
        return;
    }

    c.lightEnabled[light] = enable;
    c.lightingDirty = true;
}

void Renderer::UpdateLightingState()
{
    PROFILER_SCOPE("Renderer::UpdateLightingState", "UpdateLightingState", MP_ORCHID1)
    Context &c = getContext();
    if (!c.lightingDirty || !c.lightingEnabled)
        return;

    Float4 dir0 = c.lightDirection[0];
    Float4 col0 = c.lightColour[0];
    Float4 dir1 = c.lightDirection[1];
    Float4 col1 = c.lightColour[1];

    if (!c.lightEnabled[0])
    {
        dir0 = Float4();
        col0 = Float4();
    }

    if (!c.lightEnabled[1])
    {
        dir1 = Float4();
        col1 = Float4();
    }

    c.vertexUBO.vecLight0 = dir0;
    c.vertexUBO.vecLight0Col = col0;
    c.vertexUBO.vecLight1 = dir1;
    c.vertexUBO.vecLight1Col = col1;
    c.vertexUBO.vecLightAmbientCol = c.lightAmbientColour;
    c.uniformsDirty = true;
    c.lightingDirty = false;
}

void Renderer::StateSetLightDirection(int light, float x, float y, float z)
{
    if (light >= 2)
        return;

    Context &c = getContext();
    if (c.commandBuffer != NULL && c.commandBuffer->isActive != 0)
    {
        c.commandBuffer->SetLightDirection(light, x, y, z);
        return;
    }

    // Transform by current modelview matrix and normalize
    const int stackIndex = c.stackPos[MATRIX_MODE_MODELVIEW];
    const Mat4x4 &mv = c.matrixStacks[MATRIX_MODE_MODELVIEW][stackIndex];

    // Transform normal (ignore translation row)
    float tx = mv.m[0][0] * x + mv.m[1][0] * y + mv.m[2][0] * z;
    float ty = mv.m[0][1] * x + mv.m[1][1] * y + mv.m[2][1] * z;
    float tz = mv.m[0][2] * x + mv.m[1][2] * y + mv.m[2][2] * z;

    float len = std::sqrt(tx * tx + ty * ty + tz * tz);
    if (len > 1e-6f)
    {
        float invLen = 1.0f / len;
        tx *= invLen;
        ty *= invLen;
        tz *= invLen;
    }

    c.lightDirection[light] = Float4(tx, ty, tz, 0.0f);
    c.lightingDirty = true;
}

// ─── Colour / alpha state ───────────────────────────────────────────────────

void Renderer::StateSetColour(float r, float g, float b, float a)
{
    Context &c = getContext();
    if (c.commandBuffer != NULL && c.commandBuffer->isActive != 0)
    {
        c.commandBuffer->SetColor(r, g, b, a);
        return;
    }

    c.fragmentUBO.diffuse_colour = Float4(r, g, b, a);
    c.uniformsDirty = true;
}

void Renderer::StateSetAlphaFunc(int, float param)
{
    Context &c = getContext();
    c.alphaReference = param;
    c.fragmentUBO.alphaTestRef = Float4(0.0f, 0.0f, 0.0f, c.alphaTestEnabled ? c.alphaReference : 0.0f);
    c.uniformsDirty = true;
}

void Renderer::StateSetAlphaTestEnable(bool enable)
{
    Context &c = getContext();
    c.alphaTestEnabled = enable;
    c.fragmentUBO.alphaTestRef = Float4(0.0f, 0.0f, 0.0f, enable ? c.alphaReference : 0.0f);
    c.uniformsDirty = true;
}

// ─── Depth state ────────────────────────────────────────────────────────────

void Renderer::StateSetDepthMask(bool enable)
{
    Context &c = getContext();
    if (c.commandBuffer != NULL && c.commandBuffer->isActive != 0)
    {
        c.commandBuffer->SetDepthMask(enable);
        return;
    }
    c.depthStencilDesc.depthWriteEnable = enable;
    c.depthWriteEnabled = enable;
}

void Renderer::StateSetDepthTestEnable(bool enable)
{
    Context &c = getContext();
    if (c.commandBuffer != NULL && c.commandBuffer->isActive != 0)
    {
        c.commandBuffer->SetDepthTestEnable(enable);
        return;
    }
    c.depthStencilDesc.depthTestEnable = enable;
    c.depthTestEnabled = enable;
}

void Renderer::StateSetDepthFunc(int func)
{
    Context &c = getContext();
    if (c.commandBuffer != NULL && c.commandBuffer->isActive != 0)
    {
        c.commandBuffer->SetDepthFunc(func);
        return;
    }
    c.depthStencilDesc.depthFunc = func;
}

void Renderer::StateSetDepthSlopeAndBias(float slope, float bias)
{
    Context &c = getContext();
    const float scale = 65536.0f;
    c.rasterizerDesc.depthBiasConstant = bias * scale;
    c.rasterizerDesc.depthBiasSlope = slope * scale;
}

// ─── Blend state ────────────────────────────────────────────────────────────

void Renderer::StateSetBlendEnable(bool enable)
{
    Context &c = getContext();
    if (c.commandBuffer != NULL && c.commandBuffer->isActive != 0)
    {
        c.commandBuffer->SetBlendEnable(enable);
        return;
    }
    c.blendDesc.blendEnable = enable;
}

void Renderer::StateSetBlendFunc(int src, int dst)
{
    Context &c = getContext();
    if (c.commandBuffer != NULL && c.commandBuffer->isActive != 0)
    {
        c.commandBuffer->SetBlendFunc(src, dst);
        return;
    }
    c.blendDesc.srcBlend = src;
    c.blendDesc.dstBlend = dst;
}

void Renderer::StateSetBlendFactor(unsigned int colour)
{
    Context &c = getContext();
    if (c.commandBuffer != NULL && c.commandBuffer->isActive != 0)
    {
        c.commandBuffer->SetBlendFactor(colour);
        return;
    }

    const float scale = 255.0f;
    c.blendDesc.blendFactor[0] = static_cast<float>((colour >> 0) & 0xFF) / scale;
    c.blendDesc.blendFactor[1] = static_cast<float>((colour >> 8) & 0xFF) / scale;
    c.blendDesc.blendFactor[2] = static_cast<float>((colour >> 16) & 0xFF) / scale;
    c.blendDesc.blendFactor[3] = static_cast<float>((colour >> 24) & 0xFF) / scale;
}

void Renderer::StateSetWriteEnable(bool red, bool green, bool blue, bool alpha)
{
    Context &c = getContext();

    uint8_t mask = 0;
    mask |= red   ? 0x1 : 0;
    mask |= green ? 0x2 : 0;
    mask |= blue  ? 0x4 : 0;
    mask |= alpha ? 0x8 : 0;

    c.blendDesc.writeMask = mask;
}

// ─── Rasterizer state ───────────────────────────────────────────────────────

void Renderer::StateSetFaceCull(bool enable)
{
    Context &c = getContext();
    if (c.commandBuffer != NULL && c.commandBuffer->isActive != 0)
    {
        c.commandBuffer->SetFaceCull(enable);
        return;
    }
    c.rasterizerDesc.cullEnable = enable;
    c.faceCullEnabled = enable;
}

void Renderer::StateSetFaceCullCW(bool enable)
{
    Context &c = getContext();
    if (c.faceCullEnabled)
        c.rasterizerDesc.cullCW = enable;
    else
        c.rasterizerDesc.cullEnable = false;
}

void Renderer::StateSetLineWidth(float) {}

// ─── Viewport ───────────────────────────────────────────────────────────────

void Renderer::StateSetViewport(C4JRender::eViewportType viewportType)
{
    getContext();
    m_ViewportType = viewportType;

    const float fullWidth = static_cast<float>(backBufferWidth);
    const float fullHeight = static_cast<float>(backBufferHeight);

    float x = 0.0f;
    float y = 0.0f;
    float width = fullWidth;
    float height = fullHeight;

    switch (viewportType)
    {
    case C4JRender::VIEWPORT_TYPE_FULLSCREEN:
        break;
    case C4JRender::VIEWPORT_TYPE_SPLIT_TOP:
        height = fullHeight * 0.5f;
        break;
    case C4JRender::VIEWPORT_TYPE_SPLIT_BOTTOM:
        y = fullHeight * 0.5f;
        height = fullHeight * 0.5f;
        break;
    case C4JRender::VIEWPORT_TYPE_SPLIT_LEFT:
        width = fullWidth * 0.5f;
        break;
    case C4JRender::VIEWPORT_TYPE_SPLIT_RIGHT:
        x = fullWidth * 0.5f;
        width = fullWidth * 0.5f;
        break;
    case C4JRender::VIEWPORT_TYPE_QUADRANT_TOP_LEFT:
        width = fullWidth * 0.5f;
        height = fullHeight * 0.5f;
        break;
    case C4JRender::VIEWPORT_TYPE_QUADRANT_TOP_RIGHT:
        x = fullWidth * 0.5f;
        width = fullWidth * 0.5f;
        height = fullHeight * 0.5f;
        break;
    case C4JRender::VIEWPORT_TYPE_QUADRANT_BOTTOM_LEFT:
        y = fullHeight * 0.5f;
        width = fullWidth * 0.5f;
        height = fullHeight * 0.5f;
        break;
    case C4JRender::VIEWPORT_TYPE_QUADRANT_BOTTOM_RIGHT:
        x = fullWidth * 0.5f;
        y = fullHeight * 0.5f;
        width = fullWidth * 0.5f;
        height = fullHeight * 0.5f;
        break;
    default:
        break;
    }

    VkCommandBuffer cmd = m_drawCommandBuffers[m_currentFrame];

    VkViewport viewport = {};
    viewport.x = x;
    viewport.y = y;
    viewport.width = width;
    viewport.height = height;
    viewport.minDepth = 0.0f;
    viewport.maxDepth = 1.0f;
    vkCmdSetViewport(cmd, 0, 1, &viewport);

    VkRect2D scissor = {};
    scissor.offset = { static_cast<int32_t>(x), static_cast<int32_t>(y) };
    scissor.extent = { static_cast<uint32_t>(width), static_cast<uint32_t>(height) };
    vkCmdSetScissor(cmd, 0, 1, &scissor);
}

void Renderer::UpdateViewportState()
{
    // Viewport is set via dynamic state in StateSetViewport; nothing extra needed per-draw
}

void Renderer::StateSetEnableViewportClipPlanes(bool) {}

// ─── TexGen ─────────────────────────────────────────────────────────────────

void Renderer::StateSetTexGenCol(int col, float x, float y, float z, float w, bool eyeSpace)
{
    Context &c = getContext();

    float plane[4] = { x, y, z, w };

    if (eyeSpace)
    {
        // Inverse-transpose modelview matrix, then transform the plane
        Mat4x4 mv;
        std::memcpy(&mv, MatrixGet(MATRIX_MODE_MODELVIEW), sizeof(mv));

        // Simple 4x4 inverse (for affine transforms)
        // Build adjugate/cofactor approach – for robustness use a full inverse
        // Here we use the XMMatrixInverse equivalent: Cramer's rule style
        // For practical purposes, compute a 4x4 inverse:
        float inv[16];
        const float *m = mv.ptr();

        inv[0]  =  m[5]*m[10]*m[15] - m[5]*m[11]*m[14] - m[9]*m[6]*m[15] + m[9]*m[7]*m[14] + m[13]*m[6]*m[11] - m[13]*m[7]*m[10];
        inv[4]  = -m[4]*m[10]*m[15] + m[4]*m[11]*m[14] + m[8]*m[6]*m[15] - m[8]*m[7]*m[14] - m[12]*m[6]*m[11] + m[12]*m[7]*m[10];
        inv[8]  =  m[4]*m[9]*m[15]  - m[4]*m[11]*m[13] - m[8]*m[5]*m[15] + m[8]*m[7]*m[13] + m[12]*m[5]*m[11] - m[12]*m[7]*m[9];
        inv[12] = -m[4]*m[9]*m[14]  + m[4]*m[10]*m[13] + m[8]*m[5]*m[14] - m[8]*m[6]*m[13] - m[12]*m[5]*m[10] + m[12]*m[6]*m[9];
        inv[1]  = -m[1]*m[10]*m[15] + m[1]*m[11]*m[14] + m[9]*m[2]*m[15] - m[9]*m[3]*m[14] - m[13]*m[2]*m[11] + m[13]*m[3]*m[10];
        inv[5]  =  m[0]*m[10]*m[15] - m[0]*m[11]*m[14] - m[8]*m[2]*m[15] + m[8]*m[3]*m[14] + m[12]*m[2]*m[11] - m[12]*m[3]*m[10];
        inv[9]  = -m[0]*m[9]*m[15]  + m[0]*m[11]*m[13] + m[8]*m[1]*m[15] - m[8]*m[3]*m[13] - m[12]*m[1]*m[11] + m[12]*m[3]*m[9];
        inv[13] =  m[0]*m[9]*m[14]  - m[0]*m[10]*m[13] - m[8]*m[1]*m[14] + m[8]*m[2]*m[13] + m[12]*m[1]*m[10] - m[12]*m[2]*m[9];
        inv[2]  =  m[1]*m[6]*m[15]  - m[1]*m[7]*m[14]  - m[5]*m[2]*m[15] + m[5]*m[3]*m[14] + m[13]*m[2]*m[7]  - m[13]*m[3]*m[6];
        inv[6]  = -m[0]*m[6]*m[15]  + m[0]*m[7]*m[14]  + m[4]*m[2]*m[15] - m[4]*m[3]*m[14] - m[12]*m[2]*m[7]  + m[12]*m[3]*m[6];
        inv[10] =  m[0]*m[5]*m[15]  - m[0]*m[7]*m[13]  - m[4]*m[1]*m[15] + m[4]*m[3]*m[13] + m[12]*m[1]*m[7]  - m[12]*m[3]*m[5];
        inv[14] = -m[0]*m[5]*m[14]  + m[0]*m[6]*m[13]  + m[4]*m[1]*m[14] - m[4]*m[2]*m[13] - m[12]*m[1]*m[6]  + m[12]*m[2]*m[5];
        inv[3]  = -m[1]*m[6]*m[11]  + m[1]*m[7]*m[10]  + m[5]*m[2]*m[11] - m[5]*m[3]*m[10] - m[9]*m[2]*m[7]   + m[9]*m[3]*m[6];
        inv[7]  =  m[0]*m[6]*m[11]  - m[0]*m[7]*m[10]  - m[4]*m[2]*m[11] + m[4]*m[3]*m[10] + m[8]*m[2]*m[7]   - m[8]*m[3]*m[6];
        inv[11] = -m[0]*m[5]*m[11]  + m[0]*m[7]*m[9]   + m[4]*m[1]*m[11] - m[4]*m[3]*m[9]  - m[8]*m[1]*m[7]   + m[8]*m[3]*m[5];
        inv[15] =  m[0]*m[5]*m[10]  - m[0]*m[6]*m[9]   - m[4]*m[1]*m[10] + m[4]*m[2]*m[9]  + m[8]*m[1]*m[6]   - m[8]*m[2]*m[5];

        float det = m[0]*inv[0] + m[1]*inv[4] + m[2]*inv[8] + m[3]*inv[12];
        if (std::fabs(det) > 1e-6f)
        {
            float invDet = 1.0f / det;
            // Transform plane by inverse matrix (plane = plane * M^-1)
            float px = plane[0]*inv[0]*invDet + plane[1]*inv[1]*invDet + plane[2]*inv[2]*invDet  + plane[3]*inv[3]*invDet;
            float py = plane[0]*inv[4]*invDet + plane[1]*inv[5]*invDet + plane[2]*inv[6]*invDet  + plane[3]*inv[7]*invDet;
            float pz = plane[0]*inv[8]*invDet + plane[1]*inv[9]*invDet + plane[2]*inv[10]*invDet + plane[3]*inv[11]*invDet;
            float pw = plane[0]*inv[12]*invDet+ plane[1]*inv[13]*invDet+ plane[2]*inv[14]*invDet + plane[3]*inv[15]*invDet;
            plane[0] = px; plane[1] = py; plane[2] = pz; plane[3] = pw;
        }
    }

    const int activeSet = eyeSpace ? 0 : 1;
    const int inactiveSet = eyeSpace ? 1 : 0;

    float *active = c.texGenMatrices[activeSet].ptr();
    active[col + 0]  = plane[0];
    active[col + 4]  = plane[1];
    active[col + 8]  = plane[2];
    active[col + 12] = plane[3];

    float *inactive = c.texGenMatrices[inactiveSet].ptr();
    inactive[col + 0]  = 0.0f;
    inactive[col + 4]  = 0.0f;
    inactive[col + 8]  = 0.0f;
    inactive[col + 12] = 0.0f;
}

void Renderer::UpdateTexGenState()
{
    PROFILER_SCOPE("Renderer::UpdateTexGenState", "UpdateTexGenState", MP_ORCHID1)
    Context &c = getContext();
    c.vertexUBO.matTexGenObj = c.texGenMatrices[1];
    c.vertexUBO.matTexGenEye = c.texGenMatrices[0];
    c.uniformsDirty = true;
}

// ─── Vertex texture UV ──────────────────────────────────────────────────────

void Renderer::StateSetVertexTextureUV(float u, float v)
{
    Context &c = getContext();
    c.vertexUBO.vecUVT2 = Float4(u - 1.0f, v - 1.0f, 0.0f, 0.0f);
    c.uniformsDirty = true;
}

// ─── Stencil ────────────────────────────────────────────────────────────────

void Renderer::StateSetStencil(int function, uint8_t stencil_ref, uint8_t stencil_func_mask, uint8_t stencil_write_mask)
{
    Context &c = getContext();
    c.depthStencilDesc.stencilEnable = true;
    c.depthStencilDesc.stencilRef = stencil_ref;
    c.depthStencilDesc.stencilFuncMask = stencil_func_mask;
    c.depthStencilDesc.stencilWriteMask = stencil_write_mask;
    c.depthStencilDesc.stencilFunc = function;
}

// ─── Forced LOD ─────────────────────────────────────────────────────────────

void Renderer::StateSetForceLOD(int LOD)
{
    Context &c = getContext();
    c.forcedLOD = LOD;
    c.fragmentUBO.forcedLod = Float4(static_cast<float>(LOD), 0.0f, 0.0f, 0.0f);
    c.uniformsDirty = true;
}

// ─── Uniform buffer upload ──────────────────────────────────────────────────

void Renderer::UpdateUniformBuffers()
{
    PROFILER_SCOPE("Renderer::UpdateUniformBuffers", "UpdateUniformBuffers", MP_ORCHID1)
    Context &c = getContext();
    if (!c.uniformsDirty)
        return;

    std::memcpy(m_vertexUBOMapped[m_currentFrame], &c.vertexUBO, sizeof(VertexUBO));
    std::memcpy(m_fragmentUBOMapped[m_currentFrame], &c.fragmentUBO, sizeof(FragmentUBO));
    c.uniformsDirty = false;
}

// ─── State batch update ─────────────────────────────────────────────────────

void Renderer::StateUpdate()
{
    PROFILER_SCOPE("Renderer::StateUpdate", "StateUpdate", MP_ORCHID1)
    Context &c = getContext();

    VkCommandBuffer cmd = m_drawCommandBuffers[m_currentFrame];

    // Set dynamic depth bias
    vkCmdSetDepthBias(cmd, c.rasterizerDesc.depthBiasConstant, 0.0f, c.rasterizerDesc.depthBiasSlope);

    // Set dynamic blend constants
    vkCmdSetBlendConstants(cmd, c.blendDesc.blendFactor);

    // Set dynamic line width
    vkCmdSetLineWidth(cmd, c.rasterizerDesc.lineWidth);
}
