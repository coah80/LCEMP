#version 450

// VS_PF3_TF2_CB4_NB4_XW1_Lighting — Per-vertex lit world shader

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

layout(set = 1, binding = 1) uniform sampler2D light_texture;

layout(location = 0) in vec4 inPosition;
layout(location = 1) in vec4 inColor;
layout(location = 2) in vec3 inNormal;
layout(location = 3) in vec4 inTexCoord0;
layout(location = 4) in ivec2 inTexCoord1;

layout(location = 0) out vec4 outColor;
layout(location = 1) centroid out vec4 outTex;

void main() {
    vec4 posWV2 = matWV2 * inPosition;
    vec4 posWV = matWV * posWV2;
    gl_Position = matP * posWV;

    // Transform normal through both matrices
    vec3 normWV2 = mat3(matWV2) * inNormal;
    vec3 normWV = normalize(mat3(matWV) * normWV2);

    // Two-light diffuse lighting
    float NdotL0 = max(0.0, dot(vecLight0.xyz, normWV));
    float NdotL1 = max(0.0, dot(vecLight1.xyz, normWV));
    vec4 lighting = clamp(vecLightAmbientCol + (vecLight0Col * NdotL0) + (vecLight1Col * NdotL1), 0.0, 1.0);

    // Lightmap sampling
    vec2 lightmapUV = fract(max(vecUVT2.xy, vec2(inTexCoord1) * 0.00390625));
    vec4 sampledLight = textureLod(light_texture, lightmapUV, 0.0);

    // Combine lighting with vertex color (BGRA swizzle .wzy for RGB) and lightmap
    outColor.xyz = lighting.xyz * (inColor.wzy * sampledLight.xyz);
    outColor.w = lighting.w;

    // Fog computation
    float depth = posWV.z;
    float fogLinear = clamp(vecFog.y * (vecFog.x + depth), 0.0, 1.0);
    float fogExp2 = min(1.0, exp2(1.44269502 * (vecFog.x * depth)));
    outTex.z = (vecFog.z == 1.0) ? fogLinear : ((vecFog.z == 2.0) ? fogExp2 : 1.0);

    // Texture coordinate transform
    outTex.xy = (matUV * vec4(inTexCoord0.xy, 0.0, 1.0)).xy;
    outTex.w = 1.0;
}
