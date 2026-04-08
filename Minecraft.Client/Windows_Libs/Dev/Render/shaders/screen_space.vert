#version 450

// VS_ScreenSpace — Fullscreen triangle with UV output for screen-space effects

layout(row_major, std140, set = 0, binding = 0) uniform VertexUniforms {
    mat4 matWV;
    mat4 matWV2;
    mat4 matP;
    mat4 matUV;
    vec4 vecUVT2;
    vec4 vecFog;
    vec4 vecLightAmbientCol;
    vec4 vecLight0Col;
    vec4 vecLight1Col;
    vec4 vecLight0;
    vec4 vecLight1;
    mat4 matTexGenObj;
    mat4 matTexGenEye;
    vec4 vecWV2Trans;
    vec4 v_scaleoffset;
};

layout(location = 0) out vec2 outTex;

void main() {
    int vID = gl_VertexIndex;
    float x = float(((vID << 1) & 2) - 1);
    float y = float((vID & ~1) - 1);
    gl_Position = vec4(x, y, 1.0, 1.0);

    float u = float(vID & 1);
    float v = float(1 - (vID >> 1));
    outTex = vec2(u, v) * v_scaleoffset.zw + v_scaleoffset.xy;
}
