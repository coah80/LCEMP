#version 450

// PS_TextureProjection — Projective texture lookup fragment shader

layout(std140, set = 0, binding = 1) uniform FragmentUniforms {
    vec4 diffuse_colour;
    vec4 fog_colour;
    vec4 unkColor;
    vec4 alphaTestRef;
    vec4 clear_colour;
    vec4 forcedLod;
};

layout(set = 1, binding = 0) uniform sampler2D diffuse_texture;

layout(location = 0) in vec4 vCol;
layout(location = 1) centroid in vec4 vTex;

layout(location = 0) out vec4 outColor;

void main() {
    vec2 projUV = vTex.xy / vTex.ww;
    vec4 texColor = texture(diffuse_texture, projUV);

    texColor *= diffuse_colour;
    texColor.w *= vCol.w;

    if (texColor.w < alphaTestRef.w) discard;

    vec3 finalColor = texColor.xyz * vCol.xyz;
    outColor.xyz = mix(fog_colour.xyz, finalColor, vTex.z);
    outColor.w = texColor.w;
}
