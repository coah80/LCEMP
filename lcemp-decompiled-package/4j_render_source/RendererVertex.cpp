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

void Renderer::DrawVertexBuffer(C4JRender::ePrimitiveType PrimitiveType, int count, VkBuffer buffer, C4JRender::eVertexType vType,
                                C4JRender::ePixelShaderType psType)
{
    PROFILER_SCOPE("Renderer::DrawVertexBuffer", "DrawVertexBuffer", MP_RED2)
    Renderer::Context &c = getContext();
    VkCommandBuffer cmd = m_drawCommandBuffers[m_currentFrame];

    int drawCount = count;
    bool indexed = false;

    PROFILER_SCOPE("Renderer::DrawVertexBuffer", "DrawVertexSetup", MP_RED2)
    DrawVertexSetup(vType, psType, PrimitiveType, &drawCount, &indexed);
    StateUpdate();

    const VkDeviceSize offset = 0;
    vkCmdBindVertexBuffers(cmd, 0, 1, &buffer, &offset);

    if (indexed)
        vkCmdDrawIndexed(cmd, drawCount, 1, 0, 0, 0);
    else
        vkCmdDraw(cmd, count, 1, 0, 0);
}

void Renderer::DrawVertexSetup(C4JRender::eVertexType vType, C4JRender::ePixelShaderType psType, C4JRender::ePrimitiveType PrimitiveType, int *count,
                                bool *indexed)
{
    PROFILER_SCOPE("Renderer::DrawVertexSetup", "DrawVertexSetup", MP_RED2)
    Renderer::Context &c = getContext();
    VkCommandBuffer cmd = m_drawCommandBuffers[m_currentFrame];

    C4JRender::eVertexType effectiveVertexType = vType;
    if (effectiveVertexType == C4JRender::VERTEX_TYPE_PF3_TF2_CB4_NB4_XW1 && c.lightingEnabled)
        effectiveVertexType = C4JRender::VERTEX_TYPE_PF3_TF2_CB4_NB4_XW1_LIT;

    // Track active vertex/pixel shader types for pipeline selection
    if (static_cast<uint32_t>(effectiveVertexType) != activeVertexType)
        activeVertexType = effectiveVertexType;

    if (static_cast<uint32_t>(psType) != activePixelType)
        activePixelType = psType;

    // Update matrix uniforms into the vertex UBO
    if (c.matrixDirty[MATRIX_MODE_MODELVIEW])
    {
        std::memcpy(&c.vertexUBO.matWV, MatrixGet(MATRIX_MODE_MODELVIEW), sizeof(Mat4x4));
        c.matrixDirty[MATRIX_MODE_MODELVIEW] = false;
        c.uniformsDirty = true;
    }

    if (c.matrixDirty[MATRIX_MODE_MODELVIEW_PROJECTION])
    {
        std::memcpy(&c.vertexUBO.matP, MatrixGet(MATRIX_MODE_MODELVIEW_PROJECTION), sizeof(Mat4x4));
        c.matrixDirty[MATRIX_MODE_MODELVIEW_PROJECTION] = false;
        c.uniformsDirty = true;
    }

    if (c.matrixDirty[MATRIX_MODE_MODELVIEW_TEXTURE])
    {
        std::memcpy(&c.vertexUBO.matUV, MatrixGet(MATRIX_MODE_MODELVIEW_TEXTURE), sizeof(Mat4x4));
        c.matrixDirty[MATRIX_MODE_MODELVIEW_TEXTURE] = false;
        c.uniformsDirty = true;
    }

    UpdateFogState();
    UpdateViewportState();
    UpdateLightingState();
    UpdateTexGenState();

    // Handle topology conversion
    VkPrimitiveTopology topology = MapTopology(PrimitiveType);

    if (PrimitiveType == C4JRender::PRIMITIVE_TYPE_QUAD_LIST)
    {
        vkCmdBindIndexBuffer(cmd, quadIndexBuffer.buffer, 0, VK_INDEX_TYPE_UINT16);
        *count = (*count * 6) / 4;
        *indexed = true;
        topology = VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST;
    }
    else if (PrimitiveType == C4JRender::PRIMITIVE_TYPE_TRIANGLE_FAN)
    {
        vkCmdBindIndexBuffer(cmd, fanIndexBuffer.buffer, 0, VK_INDEX_TYPE_UINT16);
        *count = (*count - 2) * 3;
        *indexed = true;
        topology = VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST;
    }
    else
    {
        *indexed = false;
    }

    // Upload uniforms and bind pipeline + descriptors
    UpdateUniformBuffers();

    PipelineStateKey key = {};
    key.vertexType = activeVertexType;
    key.pixelShaderType = activePixelType;
    key.topology = static_cast<uint32_t>(topology);
    key.blend = c.blendDesc;
    key.depthStencil = c.depthStencilDesc;
    key.rasterizer = c.rasterizerDesc;

    VkPipeline pipeline = GetOrCreatePipeline(key);
    vkCmdBindPipeline(cmd, VK_PIPELINE_BIND_POINT_GRAPHICS, pipeline);

    VkDescriptorSet sets[] = { m_uniformDescriptorSets[m_currentFrame] };
    vkCmdBindDescriptorSets(cmd, VK_PIPELINE_BIND_POINT_GRAPHICS, m_pipelineLayout, 0, 1, sets, 0, nullptr);
}

void Renderer::DrawVertices(C4JRender::ePrimitiveType PrimitiveType, int count, void *vertices, C4JRender::eVertexType vType,
                            C4JRender::ePixelShaderType psType)
{
    PROFILER_SCOPE("Renderer::DrawVertices", "DrawVertices", MP_RED2)
    Renderer::Context &c = getContext();
    VkCommandBuffer cmd = m_drawCommandBuffers[m_currentFrame];
    Renderer::CommandBuffer *commandBuffer = c.commandBuffer;

    if (commandBuffer != NULL)
    {
        C4JRender::eVertexType effectiveVertexType = vType;
        if (effectiveVertexType == C4JRender::VERTEX_TYPE_PF3_TF2_CB4_NB4_XW1 && c.lightingEnabled)
            effectiveVertexType = C4JRender::VERTEX_TYPE_PF3_TF2_CB4_NB4_XW1_LIT;

        c.recordingPrimitiveType = PrimitiveType;
        c.recordingVertexType = effectiveVertexType;
        const unsigned int stride = vertexStrideTable[effectiveVertexType];
        commandBuffer->AddVertices(stride, static_cast<unsigned int>(count), vertices, c);
        return;
    }

    int drawCount = count;
    bool indexed = false;

    PROFILER_SCOPE("Renderer::DrawVertices", "DrawVertexSetup", MP_RED2)
    DrawVertexSetup(vType, psType, PrimitiveType, &drawCount, &indexed);

    const unsigned int stride = vertexStrideTable[vType];
    const unsigned int vertexBytes = stride * static_cast<unsigned int>(count);

    assert(vertexBytes <= Context::VERTEX_BUFFER_SIZE);

    uint32_t vertexOffset = c.dynamicVertexOffset;
    if (vertexOffset + vertexBytes > Context::VERTEX_BUFFER_SIZE)
        vertexOffset = 0;

    // Copy vertex data to persistently mapped dynamic vertex buffer
    std::memcpy(static_cast<uint8_t *>(c.dynamicVertexMapped) + vertexOffset, vertices, vertexBytes);

    StateUpdate();

    const VkDeviceSize vkOffset = static_cast<VkDeviceSize>(vertexOffset);
    vkCmdBindVertexBuffers(cmd, 0, 1, &c.dynamicVertexBuffer.buffer, &vkOffset);

    if (indexed)
        vkCmdDrawIndexed(cmd, drawCount, 1, 0, 0, 0);
    else
        vkCmdDraw(cmd, count, 1, 0, 0);

    c.dynamicVertexOffset = vertexOffset + vertexBytes;
}
