#version 450

// VS_ScreenClear — Fullscreen triangle from gl_VertexIndex (no vertex input)

void main() {
    int vID = gl_VertexIndex;
    float x = float(((vID << 1) & 2) - 1);
    float y = float((vID & ~1) - 1);
    gl_Position = vec4(x, y, 1.0, 1.0);
}
