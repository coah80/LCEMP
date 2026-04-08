#version 450

// PS_ScreenClear — Outputs a solid clear color

layout(std140, set = 0, binding = 1) uniform FragmentUniforms {
    vec4 diffuse_colour;
    vec4 fog_colour;
    vec4 unkColor;
    vec4 alphaTestRef;
    vec4 clear_colour;
    vec4 forcedLod;
};

layout(location = 0) out vec4 outColor;

void main() {
    outColor = clear_colour;
}
