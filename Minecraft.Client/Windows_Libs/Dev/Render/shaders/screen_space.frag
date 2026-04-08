#version 450

// PS_ScreenSpace — Screen-space texture blit

layout(set = 1, binding = 0) uniform sampler2D screen_texture;

layout(location = 0) in vec2 vTex;

layout(location = 0) out vec4 outColor;

void main() {
    outColor = texture(screen_texture, vTex);
}
