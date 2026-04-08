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
#include "libpng/png.h"

static unsigned char *dataStart;
static unsigned char *dataCurr;
static unsigned char *dataEnd;

VkFormat Renderer::textureFormats[] = { VK_FORMAT_R8G8B8A8_UNORM };

static void user_write_data_init(unsigned char *pBuffer, int size)
{
    dataStart = pBuffer;
    dataCurr = pBuffer;
    dataEnd = pBuffer + size;
}

static int user_write_data_bytes_written()
{
    return static_cast<int>(dataCurr - dataStart);
}

static void user_write_data(png_struct_def *png_ptr, unsigned char *src, size_t length)
{
    int bytesToWrite = static_cast<int>(dataEnd - dataCurr);
    if (static_cast<int>(length) < bytesToWrite)
        bytesToWrite = static_cast<int>(length);

    memcpy(dataCurr, src, bytesToWrite);
    dataCurr += bytesToWrite;
}

static void user_flush_data(png_struct_def *png_ptr)
{
}

int Renderer::TextureCreate()
{
    PROFILER_SCOPE("Renderer::TextureCreate", "TextureCreate", MP_PURPLE4)
    for (int i = 0; i < MAX_TEXTURES; i++)
    {
        if (!m_textures[i].allocated)
        {
            m_textures[i].image = {};
            m_textures[i].view = VK_NULL_HANDLE;
            m_textures[i].sampler = VK_NULL_HANDLE;
            m_textures[i].allocated = true;
            m_textures[i].mipLevels = 1;
            m_textures[i].textureFormat = 0;
            m_textures[i].width = 0;
            m_textures[i].height = 0;
            m_textures[i].samplerParams = 0;
            return i;
        }
    }
    return -1;
}

void Renderer::TextureFree(int idx)
{
    PROFILER_SCOPE("Renderer::TextureFree", "TextureFree", MP_PURPLE4)
    if (m_textures[idx].view != VK_NULL_HANDLE)
    {
        vkDestroyImageView(m_device, m_textures[idx].view, nullptr);
        m_textures[idx].view = VK_NULL_HANDLE;
    }
    if (m_textures[idx].image.image != VK_NULL_HANDLE)
    {
        vmaDestroyImage(m_allocator, m_textures[idx].image.image, m_textures[idx].image.allocation);
        m_textures[idx].image = {};
    }
    m_textures[idx].allocated = false;
}

void Renderer::TextureBind(int idx)
{
    PROFILER_SCOPE("Renderer::TextureBind", "TextureBind", MP_PURPLE4)
    if (idx == -1)
        idx = defaultTextureIndex;

    Context &c = getContext();

    if (c.commandBuffer && c.commandBuffer->isActive)
        c.commandBuffer->BindTexture(idx);

    c.textureIdx = idx;
    UpdateTextureState(false);
}

void Renderer::TextureBindVertex(int idx)
{
    PROFILER_SCOPE("Renderer::TextureBindVertex", "TextureBindVertex", MP_PURPLE4)
    if (idx == -1)
        idx = defaultTextureIndex;

    Context &c = getContext();
    c.textureIdx = idx;
    UpdateTextureState(true);
}

void Renderer::TextureSetTextureLevels(int levels)
{
    Context &c = getContext();
    m_textures[c.textureIdx].mipLevels = levels;
}

int Renderer::TextureGetTextureLevels()
{
    Context &c = getContext();
    return m_textures[c.textureIdx].mipLevels;
}

void Renderer::TextureData(int width, int height, void *data, int level, C4JRender::eTextureFormat format)
{
    PROFILER_SCOPE("Renderer::TextureData", "TextureData", MP_PURPLE4)
    Context &c = getContext();
    int idx = c.textureIdx;

    m_textures[idx].textureFormat = format;
    const VkFormat vkFormat = textureFormats[format];

    if (level == 0)
    {
        // Destroy previous image if it exists
        if (m_textures[idx].view != VK_NULL_HANDLE)
        {
            vkDestroyImageView(m_device, m_textures[idx].view, nullptr);
            m_textures[idx].view = VK_NULL_HANDLE;
        }
        if (m_textures[idx].image.image != VK_NULL_HANDLE)
        {
            vmaDestroyImage(m_allocator, m_textures[idx].image.image, m_textures[idx].image.allocation);
            m_textures[idx].image = {};
        }

        m_textures[idx].width = width;
        m_textures[idx].height = height;

        // Create VkImage
        VkImageCreateInfo imageInfo = {};
        imageInfo.sType = VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO;
        imageInfo.imageType = VK_IMAGE_TYPE_2D;
        imageInfo.format = vkFormat;
        imageInfo.extent = { static_cast<uint32_t>(width), static_cast<uint32_t>(height), 1 };
        imageInfo.mipLevels = m_textures[idx].mipLevels;
        imageInfo.arrayLayers = 1;
        imageInfo.samples = VK_SAMPLE_COUNT_1_BIT;
        imageInfo.tiling = VK_IMAGE_TILING_OPTIMAL;
        imageInfo.usage = VK_IMAGE_USAGE_TRANSFER_DST_BIT | VK_IMAGE_USAGE_SAMPLED_BIT;
        imageInfo.sharingMode = VK_SHARING_MODE_EXCLUSIVE;
        imageInfo.initialLayout = VK_IMAGE_LAYOUT_UNDEFINED;

        VmaAllocationCreateInfo allocInfo = {};
        allocInfo.usage = VMA_MEMORY_USAGE_GPU_ONLY;

        vmaCreateImage(m_allocator, &imageInfo, &allocInfo, &m_textures[idx].image.image, &m_textures[idx].image.allocation, nullptr);

        // Create VkImageView
        VkImageViewCreateInfo viewInfo = {};
        viewInfo.sType = VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO;
        viewInfo.image = m_textures[idx].image.image;
        viewInfo.viewType = VK_IMAGE_VIEW_TYPE_2D;
        viewInfo.format = vkFormat;
        viewInfo.subresourceRange.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
        viewInfo.subresourceRange.baseMipLevel = 0;
        viewInfo.subresourceRange.levelCount = m_textures[idx].mipLevels;
        viewInfo.subresourceRange.baseArrayLayer = 0;
        viewInfo.subresourceRange.layerCount = 1;

        vkCreateImageView(m_device, &viewInfo, nullptr, &m_textures[idx].view);
    }

    // Upload pixel data via staging buffer
    if (data != nullptr)
    {
        const uint32_t mipWidth = static_cast<uint32_t>(width);
        const uint32_t mipHeight = static_cast<uint32_t>(height);
        const VkDeviceSize imageSize = static_cast<VkDeviceSize>(mipWidth) * mipHeight * 4;

        // Create staging buffer
        VkBufferCreateInfo stagingBufInfo = {};
        stagingBufInfo.sType = VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO;
        stagingBufInfo.size = imageSize;
        stagingBufInfo.usage = VK_BUFFER_USAGE_TRANSFER_SRC_BIT;
        stagingBufInfo.sharingMode = VK_SHARING_MODE_EXCLUSIVE;

        VmaAllocationCreateInfo stagingAllocInfo = {};
        stagingAllocInfo.usage = VMA_MEMORY_USAGE_CPU_ONLY;

        VkAllocatedBuffer stagingBuffer = {};
        vmaCreateBuffer(m_allocator, &stagingBufInfo, &stagingAllocInfo, &stagingBuffer.buffer, &stagingBuffer.allocation, nullptr);

        void *mapped;
        vmaMapMemory(m_allocator, stagingBuffer.allocation, &mapped);
        std::memcpy(mapped, data, imageSize);
        vmaUnmapMemory(m_allocator, stagingBuffer.allocation);

        // Transition, copy, transition
        TransitionImageLayout(m_textures[idx].image.image, vkFormat,
            VK_IMAGE_LAYOUT_UNDEFINED, VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL, m_textures[idx].mipLevels);

        VkCommandBuffer cmd = BeginSingleTimeCommands();

        VkBufferImageCopy region = {};
        region.bufferOffset = 0;
        region.bufferRowLength = 0;
        region.bufferImageHeight = 0;
        region.imageSubresource.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
        region.imageSubresource.mipLevel = level;
        region.imageSubresource.baseArrayLayer = 0;
        region.imageSubresource.layerCount = 1;
        region.imageOffset = { 0, 0, 0 };
        region.imageExtent = { mipWidth, mipHeight, 1 };

        vkCmdCopyBufferToImage(cmd, stagingBuffer.buffer, m_textures[idx].image.image,
            VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL, 1, &region);

        EndSingleTimeCommands(cmd);

        TransitionImageLayout(m_textures[idx].image.image, vkFormat,
            VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL, VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL, m_textures[idx].mipLevels);

        vmaDestroyBuffer(m_allocator, stagingBuffer.buffer, stagingBuffer.allocation);
    }
}

void Renderer::TextureDataUpdate(int xoffset, int yoffset, int width, int height, void *data, int level)
{
    PROFILER_SCOPE("Renderer::TextureDataUpdate", "TextureDataUpdate", MP_PURPLE4)
    Context &c = getContext();
    int idx = c.textureIdx;

    const VkFormat vkFormat = textureFormats[m_textures[idx].textureFormat];
    const VkDeviceSize imageSize = static_cast<VkDeviceSize>(width) * height * 4;

    // Create staging buffer
    VkBufferCreateInfo stagingBufInfo = {};
    stagingBufInfo.sType = VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO;
    stagingBufInfo.size = imageSize;
    stagingBufInfo.usage = VK_BUFFER_USAGE_TRANSFER_SRC_BIT;
    stagingBufInfo.sharingMode = VK_SHARING_MODE_EXCLUSIVE;

    VmaAllocationCreateInfo stagingAllocInfo = {};
    stagingAllocInfo.usage = VMA_MEMORY_USAGE_CPU_ONLY;

    VkAllocatedBuffer stagingBuffer = {};
    vmaCreateBuffer(m_allocator, &stagingBufInfo, &stagingAllocInfo, &stagingBuffer.buffer, &stagingBuffer.allocation, nullptr);

    void *mapped;
    vmaMapMemory(m_allocator, stagingBuffer.allocation, &mapped);
    std::memcpy(mapped, data, imageSize);
    vmaUnmapMemory(m_allocator, stagingBuffer.allocation);

    TransitionImageLayout(m_textures[idx].image.image, vkFormat,
        VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL, VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL, m_textures[idx].mipLevels);

    VkCommandBuffer cmd = BeginSingleTimeCommands();

    VkBufferImageCopy region = {};
    region.bufferOffset = 0;
    region.bufferRowLength = 0;
    region.bufferImageHeight = 0;
    region.imageSubresource.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
    region.imageSubresource.mipLevel = level;
    region.imageSubresource.baseArrayLayer = 0;
    region.imageSubresource.layerCount = 1;
    region.imageOffset = { xoffset, yoffset, 0 };
    region.imageExtent = { static_cast<uint32_t>(width), static_cast<uint32_t>(height), 1 };

    vkCmdCopyBufferToImage(cmd, stagingBuffer.buffer, m_textures[idx].image.image,
        VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL, 1, &region);

    EndSingleTimeCommands(cmd);

    TransitionImageLayout(m_textures[idx].image.image, vkFormat,
        VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL, VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL, m_textures[idx].mipLevels);

    vmaDestroyBuffer(m_allocator, stagingBuffer.buffer, stagingBuffer.allocation);
}

void Renderer::TextureSetParam(int param, int value)
{
    Context &c = getContext();
    int idx = c.textureIdx;

    switch (param)
    {
    case GL_TEXTURE_MIN_FILTER:
        m_textures[idx].samplerParams &= ~4u;
        if (value == GL_LINEAR)
            m_textures[idx].samplerParams |= 4u;
        break;
    case GL_TEXTURE_MAG_FILTER:
        m_textures[idx].samplerParams &= ~8u;
        if (value == GL_LINEAR)
            m_textures[idx].samplerParams |= 8u;
        break;
    case GL_TEXTURE_WRAP_S:
        m_textures[idx].samplerParams &= ~1u;
        if (value == GL_CLAMP)
            m_textures[idx].samplerParams |= 1u;
        break;
    case GL_TEXTURE_WRAP_T:
        m_textures[idx].samplerParams &= ~2u;
        if (value == GL_CLAMP)
            m_textures[idx].samplerParams |= 2u;
        break;
    }
}

void Renderer::TextureDynamicUpdateStart()
{
}

void Renderer::TextureDynamicUpdateEnd()
{
}

void Renderer::UpdateTextureState(bool bVertex)
{
    Context &c = getContext();
    VkSampler sampler = GetManagedSampler(m_textures[c.textureIdx].samplerParams);
    m_textures[c.textureIdx].sampler = sampler;
    // Descriptor set update is deferred until draw time in UpdateUniformBuffers
    c.uniformsDirty = true;
}

int Renderer::LoadTextureData(const char *szFilename, D3DXIMAGE_INFO *pSrcInfo, int **ppDataOut)
{
    PROFILER_SCOPE("Renderer::LoadTextureData_File", "LoadTextureData_File", MP_PURPLE4)
    png_image image;
    memset(&image, 0, sizeof(image));
    image.version = PNG_IMAGE_VERSION;

    if (!png_image_begin_read_from_file(&image, szFilename))
        return -1;

    image.format = PNG_FORMAT_BGRA;

    *ppDataOut = new int[image.width * image.height];
    if (!*ppDataOut || !png_image_finish_read(&image, NULL, *ppDataOut, 0, NULL))
        return -1;

    pSrcInfo->Width = image.width;
    pSrcInfo->Height = image.height;
    return 0;
}

int Renderer::LoadTextureData(uint8_t *pbData, uint32_t dwBytes, D3DXIMAGE_INFO *pSrcInfo, int **ppDataOut)
{
    PROFILER_SCOPE("Renderer::LoadTextureData_Memory", "LoadTextureData_Memory", MP_PURPLE4)
    png_image image;
    memset(&image, 0, sizeof(image));
    image.version = PNG_IMAGE_VERSION;

    if (!png_image_begin_read_from_memory(&image, pbData, dwBytes))
        return -1;

    image.format = PNG_FORMAT_BGRA;

    *ppDataOut = new int[image.width * image.height];
    if (!*ppDataOut || !png_image_finish_read(&image, NULL, *ppDataOut, 0, NULL))
        return -1;

    pSrcInfo->Width = image.width;
    pSrcInfo->Height = image.height;
    return 0;
}

int Renderer::SaveTextureData(const char *szFilename, D3DXIMAGE_INFO *pSrcInfo, int *ppDataOut)
{
    PROFILER_SCOPE("Renderer::SaveTextureData", "SaveTextureData", MP_PURPLE4)
    png_image image;
    memset(&image, 0, sizeof(image));
    image.width = pSrcInfo->Width;
    image.height = pSrcInfo->Height;
    image.version = PNG_IMAGE_VERSION;
    image.format = PNG_FORMAT_BGRA;

    png_image_write_to_file(&image, szFilename, 0, ppDataOut, 0, NULL);
    return 0;
}

int Renderer::SaveTextureDataToMemory(void *pOutput, int outputCapacity, int *outputLength, int width, int height, int *ppDataIn)
{
    PROFILER_SCOPE("Renderer::SaveTextureDataToMemory", "SaveTextureDataToMemory", MP_PURPLE4)
    png_image image;
    memset(&image, 0, sizeof(image));
    image.width = width;
    image.height = height;
    image.version = PNG_IMAGE_VERSION;
    image.format = PNG_FORMAT_RGBA;

    dataEnd = static_cast<unsigned char *>(pOutput) + outputCapacity;
    dataStart = static_cast<unsigned char *>(pOutput);
    dataCurr = static_cast<unsigned char *>(pOutput);

    png_image_write_to_stdio(&image, NULL, 0, ppDataIn, 0, NULL, user_write_data, user_flush_data);

    *outputLength = static_cast<int>(dataCurr - dataStart);
    return 0;
}

void Renderer::TextureGetStats()
{
}

VkImageView Renderer::TextureGetTexture(int idx)
{
    if (static_cast<unsigned int>(idx) <= 511)
    {
        if (m_textures[idx].allocated)
            return m_textures[idx].view;
    }
    return VK_NULL_HANDLE;
}
