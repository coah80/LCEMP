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
#include <cmath>
#include <cstring>

const float *Renderer::MatrixGet(int type)
{
    Context &c = getContext();
    const int depth = c.stackPos[type];
    return c.matrixStacks[type][depth].ptr();
}

void Renderer::MatrixMode(int type)
{
    Context &c = getContext();
    assert(type >= 0);
    assert(type < STACK_TYPES);
    c.stackType = type;
}

void Renderer::MatrixMult(float *mat)
{
    Mat4x4 matrix;
    std::memcpy(&matrix, mat, sizeof(matrix));
    MultWithStack(matrix);
}

void Renderer::MatrixOrthogonal(float left, float right, float bottom, float top, float zNear, float zFar)
{
    // Right-handed orthographic projection, Z mapped to [0,1] (Vulkan/D3D convention)
    Mat4x4 matrix;
    matrix.m[0][0] = 2.0f / (right - left);
    matrix.m[1][1] = 2.0f / (top - bottom);
    matrix.m[2][2] = -1.0f / (zFar - zNear);
    matrix.m[3][0] = -(right + left) / (right - left);
    matrix.m[3][1] = -(top + bottom) / (top - bottom);
    matrix.m[3][2] = -zNear / (zFar - zNear);
    matrix.m[3][3] = 1.0f;

    // Flip Y for Vulkan NDC (Y points down)
    matrix.m[1][1] = -matrix.m[1][1];

    MultWithStack(matrix);
}

void Renderer::MatrixPerspective(float fovy, float aspect, float zNear, float zFar)
{
    // Right-handed perspective projection, Z mapped to [0,1] (Vulkan/D3D convention)
    const float fovRadians = fovy * (3.14159274f / 180.0f);
    const float tanHalfFov = std::tan(fovRadians * 0.5f);

    Mat4x4 matrix;
    matrix.m[0][0] = 1.0f / (aspect * tanHalfFov);
    matrix.m[1][1] = 1.0f / tanHalfFov;
    matrix.m[2][2] = -zFar / (zFar - zNear);
    matrix.m[2][3] = -1.0f;
    matrix.m[3][2] = -(zNear * zFar) / (zFar - zNear);

    // Flip Y for Vulkan NDC (Y points down)
    matrix.m[1][1] = -matrix.m[1][1];

    MultWithStack(matrix);
}

void Renderer::MatrixPop()
{
    Context &c = getContext();

    assert(c.stackPos[c.stackType] > 0);

    const int mode = c.stackType;
    --c.stackPos[mode];
    c.matrixDirty[mode] = true;
}

void Renderer::MatrixPush()
{
    Context &c = getContext();

    assert(c.stackPos[c.stackType] < (STACK_SIZE - 1));

    const int mode = c.stackType;
    const int depth = c.stackPos[mode];
    c.matrixStacks[mode][depth + 1] = c.matrixStacks[mode][depth];
    ++c.stackPos[mode];
}

void Renderer::MatrixRotate(float angle, float x, float y, float z)
{
    // Normalize axis
    const float len = std::sqrt(x * x + y * y + z * z);
    if (len < 1e-6f)
        return;
    const float invLen = 1.0f / len;
    x *= invLen;
    y *= invLen;
    z *= invLen;

    const float c_ = std::cos(angle);
    const float s_ = std::sin(angle);
    const float t_ = 1.0f - c_;

    Mat4x4 matrix;
    matrix.m[0][0] = t_ * x * x + c_;
    matrix.m[0][1] = t_ * x * y + s_ * z;
    matrix.m[0][2] = t_ * x * z - s_ * y;
    matrix.m[1][0] = t_ * x * y - s_ * z;
    matrix.m[1][1] = t_ * y * y + c_;
    matrix.m[1][2] = t_ * y * z + s_ * x;
    matrix.m[2][0] = t_ * x * z + s_ * y;
    matrix.m[2][1] = t_ * y * z - s_ * x;
    matrix.m[2][2] = t_ * z * z + c_;
    matrix.m[3][3] = 1.0f;

    MultWithStack(matrix);
}

void Renderer::MatrixScale(float x, float y, float z)
{
    Mat4x4 matrix;
    matrix.m[0][0] = x;
    matrix.m[1][1] = y;
    matrix.m[2][2] = z;
    matrix.m[3][3] = 1.0f;
    MultWithStack(matrix);
}

void Renderer::MatrixSetIdentity()
{
    Context &c = getContext();
    const int mode = c.stackType;
    const int depth = c.stackPos[mode];
    c.matrixStacks[mode][depth] = Mat4x4::Identity();
    c.matrixDirty[mode] = true;
}

void Renderer::MatrixTranslate(float x, float y, float z)
{
    Mat4x4 matrix = Mat4x4::Identity();
    matrix.m[3][0] = x;
    matrix.m[3][1] = y;
    matrix.m[3][2] = z;
    MultWithStack(matrix);
}

void Renderer::MultWithStack(Mat4x4 matrix)
{
    Context &c = getContext();
    const int mode = c.stackType;
    const int depth = c.stackPos[mode];
    Mat4x4 &current = c.matrixStacks[mode][depth];
    current = matrix * current;
    c.matrixDirty[mode] = true;
}

void Renderer::Set_matrixDirty()
{
    Context &c = getContext();
    const Mat4x4 identity = Mat4x4::Identity();

    c.matrixStacks[MATRIX_MODE_MODELVIEW][0] = identity;
    c.matrixStacks[MATRIX_MODE_MODELVIEW_PROJECTION][0] = identity;
    c.matrixStacks[MATRIX_MODE_MODELVIEW_TEXTURE][0] = identity;
    c.matrixStacks[MATRIX_MODE_MODELVIEW_CBUFF][0] = identity;

    c.matrixDirty[MATRIX_MODE_MODELVIEW] = true;
    c.matrixDirty[MATRIX_MODE_MODELVIEW_PROJECTION] = true;
    c.matrixDirty[MATRIX_MODE_MODELVIEW_TEXTURE] = true;
    c.matrixDirty[MATRIX_MODE_MODELVIEW_CBUFF] = true;

    activeVertexType = static_cast<uint32_t>(-1);
    activePixelType = static_cast<uint32_t>(-1);
}
