#version 450

// VS_PF3_TF2_CB4_NB4_XW1_TexGen — Texture coordinate generation shader

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

    // Lightmap sampling
    vec2 lightmapUV = fract(max(vecUVT2.xy, vec2(inTexCoord1) * 0.00390625));
    vec4 lightColor = textureLod(light_texture, lightmapUV, 0.0);
    outColor = inColor.wzyx * vec4(lightColor.xyz, 1.0);

    // Texture coordinate generation (eye-space + object-space)
    vec4 eyeGen = matTexGenEye * posWV;
    vec4 objGen = matTexGenObj * inPosition;
    vec4 texGen = objGen + eyeGen;

    // Apply texture matrix to generated coordinates (rows 0,1,3 × columns 0,1,2)
    outTex.x = dot(matUV[0].xyw, texGen.xyw);
    outTex.y = dot(matUV[1].xyw, texGen.xyw);
    outTex.w = dot(matUV[2].xyw, texGen.xyw);

    // Fog computation
    float depth = posWV.z;
    float fogLinear = clamp(vecFog.y * (vecFog.x + depth), 0.0, 1.0);
    float fogExp2 = min(1.0, exp2(1.44269502 * (vecFog.x * depth)));
    outTex.z = (vecFog.z == 1.0) ? fogLinear : ((vecFog.z == 2.0) ? fogExp2 : 1.0);
}
