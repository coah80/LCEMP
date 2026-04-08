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

#include <cassert>
#include <cstdint>
#include <cstring>
#include <cmath>
#include <new>

// ─── CommandBuffer ──────────────────────────────────────────────────────────

Renderer::CommandBuffer::CommandBuffer(bool full)
    : m_vertexBuffer{}
    , m_vertexData(NULL)
    , m_vertexDataLength(0)
    , m_commands()
    , m_allocated(0x1000)
    , isActive(full ? 1 : 0)
{
    m_vertexData = malloc(m_allocated);
    std::lock_guard<std::mutex> lock(Renderer::totalAllocMutex);
    Renderer::totalAlloc += static_cast<int>(m_allocated);
}

Renderer::CommandBuffer::~CommandBuffer()
{
    if (m_vertexBuffer.buffer != VK_NULL_HANDLE)
        vmaDestroyBuffer(InternalRenderManager.m_allocator, m_vertexBuffer.buffer, m_vertexBuffer.allocation);

    free(m_vertexData);

    std::lock_guard<std::mutex> lock(Renderer::totalAllocMutex);
    Renderer::totalAlloc -= static_cast<int>(m_allocated);
}

void Renderer::CommandBuffer::StartRecording() {}

void Renderer::CommandBuffer::EndRecording(VmaAllocator allocator)
{
    if (m_vertexDataLength != 0)
    {
        VkBufferCreateInfo bufInfo = {};
        bufInfo.sType = VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO;
        bufInfo.size = static_cast<VkDeviceSize>(m_vertexDataLength);
        bufInfo.usage = VK_BUFFER_USAGE_VERTEX_BUFFER_BIT | VK_BUFFER_USAGE_TRANSFER_DST_BIT;
        bufInfo.sharingMode = VK_SHARING_MODE_EXCLUSIVE;

        VmaAllocationCreateInfo allocInfo = {};
        allocInfo.usage = VMA_MEMORY_USAGE_CPU_TO_GPU;

        vmaCreateBuffer(allocator, &bufInfo, &allocInfo, &m_vertexBuffer.buffer, &m_vertexBuffer.allocation, nullptr);

        void *mapped;
        vmaMapMemory(allocator, m_vertexBuffer.allocation, &mapped);
        std::memcpy(mapped, m_vertexData, m_vertexDataLength);
        vmaUnmapMemory(allocator, m_vertexBuffer.allocation);
    }

    free(m_vertexData);
    m_vertexData = NULL;
}

std::uint64_t Renderer::CommandBuffer::GetAllocated()
{
    return m_allocated;
}

bool Renderer::CommandBuffer::IsBusy()
{
    return false;
}

void Renderer::CommandBuffer::AddMatrix(const float *matrix)
{
    Command command = {};
    command.m_command_type = COMMAND_ADD_MATRIX;
    memcpy(command.add_matrix.m_matrix, matrix, sizeof(command.add_matrix.m_matrix));
    m_commands.push_back(command);
}

void Renderer::CommandBuffer::AddVertices(unsigned int stride, unsigned int count, void *dataIn, Renderer::Context &c)
{
    PROFILER_SCOPE("Renderer::CommandBuffer::AddVertices", "AddVertices", MP_ORANGE)

    if (c.matrixDirty[MATRIX_MODE_MODELVIEW_CBUFF])
    {
        AddMatrix(InternalRenderManager.MatrixGet(MATRIX_MODE_MODELVIEW_CBUFF));
        c.matrixDirty[MATRIX_MODE_MODELVIEW_CBUFF] = false;
    }

    const std::uint64_t vertexOffset = m_vertexDataLength;
    const std::uint64_t copySize = std::uint64_t(stride) * std::uint64_t(count);

    Command command = {};
    command.m_command_type = COMMAND_ADD_VERTICES;
    command.add_vertices.m_vertex_index_start = (unsigned int)vertexOffset;
    command.add_vertices.m_vertex_count = count;

    m_vertexDataLength = vertexOffset + copySize;
    if (m_vertexDataLength > m_allocated)
    {
        {
            std::lock_guard<std::mutex> lock(Renderer::totalAllocMutex);
            Renderer::totalAlloc -= static_cast<int>(m_allocated);
        }

        m_allocated = ((m_vertexDataLength + (0x1000 - 1)) & ~(0x1000 - 1));
        m_vertexData = std::realloc(m_vertexData, m_allocated);

        {
            std::lock_guard<std::mutex> lock(Renderer::totalAllocMutex);
            Renderer::totalAlloc += static_cast<int>(m_allocated);
        }
    }

    const std::size_t byteCount = std::size_t(stride) * std::size_t(count);
    memcpy(static_cast<std::uint8_t *>(m_vertexData) + vertexOffset, dataIn, byteCount);
    m_commands.push_back(command);
}

void Renderer::CommandBuffer::BindTexture(int idx)
{
    Command command = {};
    command.m_command_type = COMMAND_BIND_TEXTURE;
    command.bind_texture.m_texture_index = idx;
    m_commands.push_back(command);
}

void Renderer::CommandBuffer::SetColor(float r, float g, float b, float a)
{
    Command command = {};
    command.m_command_type = COMMAND_SET_COLOR;
    command.set_color.m_color[0] = r;
    command.set_color.m_color[1] = g;
    command.set_color.m_color[2] = b;
    command.set_color.m_color[3] = a;
    m_commands.push_back(command);
}

void Renderer::CommandBuffer::SetDepthFunc(int func)
{
    Command command = {};
    command.m_command_type = COMMAND_SET_DEPTH_FUNC;
    command.set_depth_func.m_depth_func = func;
    m_commands.push_back(command);
}

void Renderer::CommandBuffer::SetDepthMask(bool enable)
{
    Command command = {};
    command.m_command_type = COMMAND_SET_DEPTH_MASK;
    command.set_depth_mask.m_enable = enable;
    m_commands.push_back(command);
}

void Renderer::CommandBuffer::SetDepthTestEnable(bool enable)
{
    Command command = {};
    command.m_command_type = COMMAND_SET_DEPTH_TEST;
    command.set_depth_test.m_enable = enable;
    m_commands.push_back(command);
}

void Renderer::CommandBuffer::SetLightingEnable(bool enable)
{
    Command command = {};
    command.m_command_type = COMMAND_SET_LIGHTING_ENABLE;
    command.set_lighting_enable.m_enable = enable;
    m_commands.push_back(command);
}

void Renderer::CommandBuffer::SetLightEnable(int light, bool enable)
{
    Command command = {};
    command.m_command_type = COMMAND_SET_LIGHT_ENABLE;
    command.set_light_enable.m_light_index = light;
    command.set_light_enable.m_enable = enable;
    m_commands.push_back(command);
}

void Renderer::CommandBuffer::SetLightDirection(int light, float x, float y, float z)
{
    Renderer::Context &c = InternalRenderManager.getContext();
    const std::uint32_t depth = c.stackPos[MATRIX_MODE_MODELVIEW_CBUFF];
    const Mat4x4 &matrix = c.matrixStacks[MATRIX_MODE_MODELVIEW_CBUFF][depth];

    // Transform normal by modelview (ignore translation)
    float tx = matrix.m[0][0] * x + matrix.m[1][0] * y + matrix.m[2][0] * z;
    float ty = matrix.m[0][1] * x + matrix.m[1][1] * y + matrix.m[2][1] * z;
    float tz = matrix.m[0][2] * x + matrix.m[1][2] * y + matrix.m[2][2] * z;

    // Normalize
    float len = std::sqrt(tx * tx + ty * ty + tz * tz);
    if (len > 1e-6f)
    {
        float invLen = 1.0f / len;
        tx *= invLen;
        ty *= invLen;
        tz *= invLen;
    }

    Command command = {};
    command.m_command_type = COMMAND_SET_LIGHT_DIRECTION;
    command.set_light_direction.m_light_index = light;
    command.set_light_direction.m_direction[0] = tx;
    command.set_light_direction.m_direction[1] = ty;
    command.set_light_direction.m_direction[2] = tz;
    command.set_light_direction.m_direction[3] = 0.0f;
    m_commands.push_back(command);
}

void Renderer::CommandBuffer::SetLightColour(int light, float r, float g, float b)
{
    Command command = {};
    command.m_command_type = COMMAND_SET_LIGHT_COLOUR;
    command.set_light_colour.m_light_index = light;
    command.set_light_colour.m_color[0] = r;
    command.set_light_colour.m_color[1] = g;
    command.set_light_colour.m_color[2] = b;
    m_commands.push_back(command);
}

void Renderer::CommandBuffer::SetLightAmbientColour(float r, float g, float b)
{
    Command command = {};
    command.m_command_type = COMMAND_SET_LIGHT_AMBIENT_COLOUR;
    command.set_light_ambient_colour.m_color[0] = r;
    command.set_light_ambient_colour.m_color[1] = g;
    command.set_light_ambient_colour.m_color[2] = b;
    m_commands.push_back(command);
}

void Renderer::CommandBuffer::SetBlendEnable(bool enable)
{
    Command command = {};
    command.m_command_type = COMMAND_SET_BLEND_ENABLE;
    command.set_blend_enable.m_enable = enable;
    m_commands.push_back(command);
}

void Renderer::CommandBuffer::SetBlendFunc(int src, int dst)
{
    Command command = {};
    command.m_command_type = COMMAND_SET_BLEND_FUNC;
    command.set_blend_func.m_src = src;
    command.set_blend_func.m_dst = dst;
    m_commands.push_back(command);
}

void Renderer::CommandBuffer::SetBlendFactor(unsigned int factor)
{
    Command command = {};
    command.m_command_type = COMMAND_SET_BLEND_FACTOR;
    command.set_blend_factor.m_blend_factor = factor;
    m_commands.push_back(command);
}

void Renderer::CommandBuffer::SetFaceCull(bool enable)
{
    Command command = {};
    command.m_command_type = COMMAND_SET_FACE_CULL;
    command.set_face_cull.m_enable = enable;
    m_commands.push_back(command);
}

void Renderer::CommandBuffer::Render(C4JRender::eVertexType vType, Renderer::Context &c, int primitiveType)
{
    PROFILER_SCOPE("Renderer::CommandBuffer::Render", "Render", MP_ORANGE)

    if (m_vertexBuffer.buffer == VK_NULL_HANDLE)
        return;

    VkCommandBuffer cmd = InternalRenderManager.m_drawCommandBuffers[InternalRenderManager.m_currentFrame];
    int drawVertexType = vType;
    int shaderVertexType = drawVertexType;
    bool matrixOverride = false;

    for (const Command &command : m_commands)
    {
        PROFILER_SCOPE("Renderer::CommandBuffer::Render", "ProcessCommand", MP_ORANGE)

        switch (command.m_command_type)
        {
        case COMMAND_ADD_MATRIX:
        {
            if (drawVertexType == C4JRender::VERTEX_TYPE_COMPRESSED)
            {
                // Upload compressed translation vector via UBO
                c.vertexUBO.vecWV2Trans = Float4(
                    command.add_matrix.m_matrix[12], command.add_matrix.m_matrix[13],
                    command.add_matrix.m_matrix[14], command.add_matrix.m_matrix[15]
                );
                c.uniformsDirty = true;
            }
            else
            {
                // Upload local transform matrix into matWV2
                std::memcpy(&c.vertexUBO.matWV2, command.add_matrix.m_matrix, sizeof(Mat4x4));
                c.uniformsDirty = true;
                matrixOverride = true;
            }
            break;
        }
        case COMMAND_ADD_VERTICES:
        {
            if (isActive)
            {
                InternalRenderManager.UpdateLightingState();

                if (drawVertexType == C4JRender::VERTEX_TYPE_PF3_TF2_CB4_NB4_XW1)
                {
                    if (c.lightingEnabled)
                    {
                        drawVertexType = C4JRender::VERTEX_TYPE_PF3_TF2_CB4_NB4_XW1_LIT;
                        shaderVertexType = C4JRender::VERTEX_TYPE_PF3_TF2_CB4_NB4_XW1_LIT;
                    }
                }
                else if (drawVertexType == C4JRender::VERTEX_TYPE_PF3_TF2_CB4_NB4_XW1_LIT && !c.lightingEnabled)
                {
                    drawVertexType = C4JRender::VERTEX_TYPE_PF3_TF2_CB4_NB4_XW1;
                    shaderVertexType = C4JRender::VERTEX_TYPE_PF3_TF2_CB4_NB4_XW1;
                }

                if (static_cast<uint32_t>(drawVertexType) != InternalRenderManager.activeVertexType)
                    InternalRenderManager.activeVertexType = drawVertexType;
            }

            InternalRenderManager.UpdateUniformBuffers();

            // Build pipeline key and bind
            PipelineStateKey key = {};
            key.vertexType = InternalRenderManager.activeVertexType;
            key.pixelShaderType = InternalRenderManager.activePixelType;

            VkPrimitiveTopology topo = InternalRenderManager.MapTopology(static_cast<C4JRender::ePrimitiveType>(primitiveType));
            bool drawIndexed = false;
            unsigned int drawCount = command.add_vertices.m_vertex_count;

            if (primitiveType == C4JRender::PRIMITIVE_TYPE_QUAD_LIST)
            {
                drawCount = (drawCount * 6) / 4;
                drawIndexed = true;
                topo = VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST;
            }
            else if (primitiveType == C4JRender::PRIMITIVE_TYPE_TRIANGLE_FAN)
            {
                drawCount = (drawCount - 2) * 3;
                drawIndexed = true;
                topo = VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST;
            }

            key.topology = static_cast<uint32_t>(topo);
            key.blend = c.blendDesc;
            key.depthStencil = c.depthStencilDesc;
            key.rasterizer = c.rasterizerDesc;

            VkPipeline pipeline = InternalRenderManager.GetOrCreatePipeline(key);
            vkCmdBindPipeline(cmd, VK_PIPELINE_BIND_POINT_GRAPHICS, pipeline);

            VkDescriptorSet sets[] = { InternalRenderManager.m_uniformDescriptorSets[InternalRenderManager.m_currentFrame] };
            vkCmdBindDescriptorSets(cmd, VK_PIPELINE_BIND_POINT_GRAPHICS, InternalRenderManager.m_pipelineLayout, 0, 1, sets, 0, nullptr);

            InternalRenderManager.StateUpdate();

            const VkDeviceSize offset = static_cast<VkDeviceSize>(command.add_vertices.m_vertex_index_start);
            vkCmdBindVertexBuffers(cmd, 0, 1, &m_vertexBuffer.buffer, &offset);

            if (drawIndexed)
            {
                if (primitiveType == C4JRender::PRIMITIVE_TYPE_QUAD_LIST)
                    vkCmdBindIndexBuffer(cmd, InternalRenderManager.quadIndexBuffer.buffer, 0, VK_INDEX_TYPE_UINT16);
                else
                    vkCmdBindIndexBuffer(cmd, InternalRenderManager.fanIndexBuffer.buffer, 0, VK_INDEX_TYPE_UINT16);
                vkCmdDrawIndexed(cmd, drawCount, 1, 0, 0, 0);
            }
            else
            {
                vkCmdDraw(cmd, drawCount, 1, 0, 0);
            }
            break;
        }
        case COMMAND_BIND_TEXTURE:
        {
            c.textureIdx = command.bind_texture.m_texture_index;
            InternalRenderManager.UpdateTextureState(false);
            break;
        }
        case COMMAND_SET_COLOR:
        {
            c.fragmentUBO.diffuse_colour = Float4(
                command.set_color.m_color[0], command.set_color.m_color[1],
                command.set_color.m_color[2], command.set_color.m_color[3]
            );
            c.uniformsDirty = true;
            break;
        }
        case COMMAND_SET_DEPTH_FUNC:
        {
            c.depthStencilDesc.depthFunc = command.set_depth_func.m_depth_func;
            break;
        }
        case COMMAND_SET_DEPTH_MASK:
        {
            c.depthWriteEnabled = command.set_depth_mask.m_enable;
            c.depthStencilDesc.depthWriteEnable = command.set_depth_mask.m_enable;
            break;
        }
        case COMMAND_SET_DEPTH_TEST:
        {
            c.depthTestEnabled = command.set_depth_test.m_enable;
            c.depthStencilDesc.depthTestEnable = command.set_depth_test.m_enable;
            break;
        }
        case COMMAND_SET_LIGHTING_ENABLE:
        {
            c.lightingEnabled = command.set_lighting_enable.m_enable;
            break;
        }
        case COMMAND_SET_LIGHT_ENABLE:
        {
            const int light = command.set_light_enable.m_light_index;
            if (light >= 0 && light < 2)
            {
                c.lightEnabled[light] = command.set_light_enable.m_enable;
                c.lightingDirty = true;
            }
            break;
        }
        case COMMAND_SET_LIGHT_DIRECTION:
        {
            const int light = command.set_light_direction.m_light_index;
            if (light >= 0 && light < 2)
            {
                c.lightDirection[light].x = command.set_light_direction.m_direction[0];
                c.lightDirection[light].y = command.set_light_direction.m_direction[1];
                c.lightDirection[light].z = command.set_light_direction.m_direction[2];
                c.lightDirection[light].w = command.set_light_direction.m_direction[3];
                c.lightingDirty = true;
            }
            break;
        }
        case COMMAND_SET_LIGHT_COLOUR:
        {
            const int light = command.set_light_colour.m_light_index;
            if (light >= 0 && light < 2)
            {
                c.lightColour[light].x = command.set_light_colour.m_color[0];
                c.lightColour[light].y = command.set_light_colour.m_color[1];
                c.lightColour[light].z = command.set_light_colour.m_color[2];
                c.lightColour[light].w = 1.0f;
                c.lightingDirty = true;
            }
            break;
        }
        case COMMAND_SET_LIGHT_AMBIENT_COLOUR:
        {
            c.lightAmbientColour.x = command.set_light_ambient_colour.m_color[0];
            c.lightAmbientColour.y = command.set_light_ambient_colour.m_color[1];
            c.lightAmbientColour.z = command.set_light_ambient_colour.m_color[2];
            c.lightAmbientColour.w = 1.0f;
            c.lightingDirty = true;
            break;
        }
        case COMMAND_SET_BLEND_ENABLE:
        {
            c.blendDesc.blendEnable = command.set_blend_enable.m_enable;
            break;
        }
        case COMMAND_SET_BLEND_FUNC:
        {
            c.blendDesc.srcBlend = command.set_blend_func.m_src;
            c.blendDesc.dstBlend = command.set_blend_func.m_dst;
            break;
        }
        case COMMAND_SET_BLEND_FACTOR:
        {
            const unsigned int factor = command.set_blend_factor.m_blend_factor;
            c.blendDesc.blendFactor[0] = float((factor >> 0) & 0xFF) / 255.0f;
            c.blendDesc.blendFactor[1] = float((factor >> 8) & 0xFF) / 255.0f;
            c.blendDesc.blendFactor[2] = float((factor >> 16) & 0xFF) / 255.0f;
            c.blendDesc.blendFactor[3] = float((factor >> 24) & 0xFF) / 255.0f;
            break;
        }
        case COMMAND_SET_FACE_CULL:
        {
            c.rasterizerDesc.cullEnable = command.set_face_cull.m_enable;
            c.faceCullEnabled = command.set_face_cull.m_enable;
            break;
        }
        default:
            break;
        }
    }

    if (matrixOverride)
    {
        c.vertexUBO.matWV2 = Mat4x4::Identity();
        c.uniformsDirty = true;
    }
}

// ─── CBuffCall ──────────────────────────────────────────────────────────────

bool Renderer::CBuffCall(int index, bool full)
{
    std::lock_guard<std::mutex> lock(m_commandBufferMutex);

    bool result = false;
    const int commandIndex = m_commandHandleToIndex[index];
    if (commandIndex >= 0)
    {
        Renderer::Context &c = getContext();
        const std::uint8_t vertexType = m_commandVertexTypes[commandIndex];
        const std::uint8_t primitiveType = m_commandPrimitiveTypes[commandIndex];

        if (full)
        {
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
            UpdateLightingState();
            UpdateViewportState();
            UpdateTexGenState();

            if (vertexType != activeVertexType)
                activeVertexType = vertexType;

            int pixelType = 0;
            if (static_cast<int>(c.forcedLOD) > -1)
            {
                c.fragmentUBO.forcedLod = Float4(static_cast<float>(static_cast<int>(c.forcedLOD)), 0.0f, 0.0f, 0.0f);
                c.uniformsDirty = true;
                pixelType = C4JRender::PIXEL_SHADER_TYPE_FORCELOD;
            }

            if (static_cast<uint32_t>(pixelType) != activePixelType)
                activePixelType = pixelType;
        }

        m_commandBuffers[commandIndex]->Render(static_cast<C4JRender::eVertexType>(vertexType), c, primitiveType);

        if (full)
        {
            MultWithStack(m_commandMatrices[commandIndex]);
            c.matrixStacks[MATRIX_MODE_MODELVIEW_CBUFF][0] = Mat4x4::Identity();
            c.matrixDirty[MATRIX_MODE_MODELVIEW_CBUFF] = true;
        }

        result = true;
    }

    return result;
}

// ─── CBuffClear ─────────────────────────────────────────────────────────────

void Renderer::CBuffClear(int index)
{
    std::lock_guard<std::mutex> lock(m_commandBufferMutex);

    std::int16_t *externalToInternal = static_cast<std::int16_t *>(m_commandHandleToIndex);
    const int internalIndex = externalToInternal[index];
    if (internalIndex >= 0)
    {
        DeleteInternalBuffer(internalIndex);
        externalToInternal[index] = static_cast<std::int16_t>(-2);
    }
}

// ─── CBuffCreate ────────────────────────────────────────────────────────────

int Renderer::CBuffCreate(int count)
{
    std::lock_guard<std::mutex> lock(m_commandBufferMutex);

    int first = reservedRendererDword1;
    if (first < NUM_COMMAND_HANDLES)
    {
        int probe = first;
        int end = first + count;
        while (true)
        {
            assert(first < NUM_COMMAND_HANDLES);

            int cursor = probe;
            while (cursor < end && cursor < NUM_COMMAND_HANDLES && m_commandHandleToIndex[cursor] == static_cast<std::int16_t>(-1))
                ++cursor;

            if (cursor >= end)
                break;

            ++first;
            ++probe;
            ++end;
            if (first >= NUM_COMMAND_HANDLES || end > NUM_COMMAND_HANDLES)
            {
                first = -1;
                break;
            }
        }

        if (first >= 0)
        {
            const int allocationEnd = first + count;
            for (int i = first; i < allocationEnd; ++i)
                m_commandHandleToIndex[i] = static_cast<std::int16_t>(-2);

            if (reservedRendererByte1)
                reservedRendererDword1 = allocationEnd;
        }
    }
    else
    {
        first = -1;
    }

    return first;
}

// ─── CBuffDeferredMode ──────────────────────────────────────────────────────

void Renderer::CBuffDeferredModeEnd()
{
    Renderer::Context &c = getContext();
    if (!c.deferredModeEnabled)
        return;

    std::lock_guard<std::mutex> lock(m_commandBufferMutex);
    c.deferredModeEnabled = false;

    for (std::vector<Renderer::DeferredCBuff>::const_iterator it = c.deferredBuffers.begin(); it != c.deferredBuffers.end(); ++it)
    {
        const Renderer::DeferredCBuff &deferred = *it;
        const int existingIndex = m_commandHandleToIndex[deferred.m_vertex_index];
        if (existingIndex >= 0)
            DeleteInternalBuffer(existingIndex);

        if (static_cast<int>(reservedRendererDword2 + reservedRendererDword3 + 10) > MAX_COMMAND_BUFFERS)
            assert(false);

        const int internalSlot = reservedRendererDword2;
        ++reservedRendererDword2;

        m_commandHandleToIndex[deferred.m_vertex_index] = static_cast<std::int16_t>(internalSlot);
        m_commandIndexToHandle[internalSlot] = deferred.m_vertex_index;
        m_commandVertexTypes[internalSlot] = static_cast<std::uint8_t>(deferred.m_vertex_type);
        m_commandPrimitiveTypes[internalSlot] = static_cast<std::uint8_t>(deferred.m_primitive_type);
        m_commandBuffers[internalSlot] = deferred.m_command_buf;
        m_commandMatrices[internalSlot] = deferred.m_matrix;
    }

    c.deferredBuffers.clear();
}

void Renderer::CBuffDeferredModeStart()
{
    getContext().deferredModeEnabled = true;
}

// ─── CBuffDelete ────────────────────────────────────────────────────────────

void Renderer::CBuffDelete(int first, int count)
{
    std::lock_guard<std::mutex> lock(m_commandBufferMutex);

    const int end = first + count;
    for (int i = first; i < end; ++i)
    {
        const int internalIndex = m_commandHandleToIndex[i];
        if (internalIndex >= 0)
            DeleteInternalBuffer(internalIndex);

        m_commandHandleToIndex[i] = static_cast<std::int16_t>(-1);
    }
}

// ─── CBuffEnd ───────────────────────────────────────────────────────────────

void Renderer::CBuffEnd()
{
    Renderer::Context &c = getContext();

    assert(c.stackType == MATRIX_MODE_MODELVIEW_CBUFF);
    assert(c.stackPos[MATRIX_MODE_MODELVIEW_CBUFF] == 0);

    std::lock_guard<std::mutex> lock(m_commandBufferMutex);

    if (c.deferredModeEnabled)
    {
        Renderer::DeferredCBuff deferred;
        deferred.m_command_buf = c.commandBuffer;
        deferred.m_vertex_index = c.recordingBufferIndex;
        deferred.m_vertex_type = c.recordingVertexType;
        deferred.m_primitive_type = c.recordingPrimitiveType;
        deferred.m_matrix = c.matrixStacks[MATRIX_MODE_MODELVIEW_CBUFF][0];
        c.deferredBuffers.push_back(deferred);
    }
    else
    {
        const int existingIndex = m_commandHandleToIndex[c.recordingBufferIndex];
        if (existingIndex >= 0)
            DeleteInternalBuffer(existingIndex);

        if (static_cast<int>(reservedRendererDword2 + reservedRendererDword3 + 10) > MAX_COMMAND_BUFFERS)
            assert(false);

        const int internalSlot = reservedRendererDword2;
        ++reservedRendererDword2;

        m_commandHandleToIndex[c.recordingBufferIndex] = static_cast<std::int16_t>(internalSlot);
        m_commandIndexToHandle[internalSlot] = c.recordingBufferIndex;
        m_commandVertexTypes[internalSlot] = static_cast<std::uint8_t>(c.recordingVertexType);
        m_commandPrimitiveTypes[internalSlot] = static_cast<std::uint8_t>(c.recordingPrimitiveType);
        m_commandBuffers[internalSlot] = c.commandBuffer;
        m_commandMatrices[internalSlot] = c.matrixStacks[MATRIX_MODE_MODELVIEW_CBUFF][0];
    }

    c.stackType = MATRIX_MODE_MODELVIEW;
    c.commandBuffer->EndRecording(m_allocator);
    c.commandBuffer = NULL;
}

// ─── CBuffLockStaticCreations ───────────────────────────────────────────────

void Renderer::CBuffLockStaticCreations()
{
    reservedRendererByte1 = 0;
}

// ─── CBuffSize ──────────────────────────────────────────────────────────────

int Renderer::CBuffSize(int index)
{
    if (index == -1)
        return totalAlloc < 0 ? 0 : totalAlloc;

    unsigned int size = 0;
    std::lock_guard<std::mutex> lock(m_commandBufferMutex);
    const int commandIndex = m_commandHandleToIndex[index];
    if (commandIndex >= 0)
        size = static_cast<unsigned int>(m_commandBuffers[commandIndex]->GetAllocated());
    return size;
}

// ─── CBuffStart ─────────────────────────────────────────────────────────────

void Renderer::CBuffStart(int index, bool full)
{
    Renderer::Context &c = getContext();
    c.commandBuffer = new (std::nothrow) Renderer::CommandBuffer(full);
    c.recordingBufferIndex = index;

    assert(c.stackType == MATRIX_MODE_MODELVIEW);

    c.stackType = MATRIX_MODE_MODELVIEW_CBUFF;
    c.stackPos[MATRIX_MODE_MODELVIEW_CBUFF] = 0;
    c.matrixStacks[MATRIX_MODE_MODELVIEW_CBUFF][0] = Mat4x4::Identity();
    c.matrixDirty[MATRIX_MODE_MODELVIEW_CBUFF] = true;
}

// ─── CBuffTick ──────────────────────────────────────────────────────────────

void Renderer::CBuffTick()
{
    std::lock_guard<std::mutex> lock(m_commandBufferMutex);

    const int firstPending = MAX_COMMAND_BUFFERS - static_cast<int>(reservedRendererDword3);
    for (int i = firstPending; i < MAX_COMMAND_BUFFERS; ++i)
    {
        Renderer::CommandBuffer *buffer = m_commandBuffers[i];
        if (buffer)
            delete buffer;
        m_commandBuffers[i] = NULL;
    }

    reservedRendererDword3 = 0;
}

// ─── DeleteInternalBuffer ───────────────────────────────────────────────────

void Renderer::DeleteInternalBuffer(int index)
{
    // NOTE: caller must already hold m_commandBufferMutex

    ++reservedRendererDword3;
    const int recycledSlot = MAX_COMMAND_BUFFERS - static_cast<int>(reservedRendererDword3);

    m_commandBuffers[recycledSlot] = m_commandBuffers[index];
    m_commandMatrices[recycledSlot] = m_commandMatrices[index];

    if (reservedRendererDword2-- != 1)
    {
        const int lastActive = reservedRendererDword2;

        m_commandBuffers[index] = m_commandBuffers[lastActive];
        m_commandMatrices[index] = m_commandMatrices[lastActive];
        m_commandVertexTypes[index] = m_commandVertexTypes[lastActive];
        m_commandPrimitiveTypes[index] = m_commandPrimitiveTypes[lastActive];

        const int commandIndex = m_commandIndexToHandle[lastActive];
        m_commandHandleToIndex[commandIndex] = static_cast<std::int16_t>(index);
        m_commandIndexToHandle[index] = commandIndex;
    }
}
