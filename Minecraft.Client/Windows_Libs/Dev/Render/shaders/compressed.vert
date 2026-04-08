#version 450

// VS_Compressed — Compressed vertex format (two ivec4 = 16 bytes per vertex)

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

layout(location = 0) in ivec4 inPosComp;
layout(location = 1) in ivec4 inTexComp;

layout(location = 0) out vec4 outColor;
layout(location = 1) centroid out vec4 outTex;

void main() {
    vec4 pos = vec4(inPosComp);
    pos.xyz = (pos.xyz * 0.0009765625) + vecWV2Trans.xyz;
    pos.w += 32768.0;

    // Extract per-vertex light tint from packed w component
    vec3 lightUV = fract(pos.www * vec3(1.52587891e-05, 0.00048828125, 0.03125));

    vec4 posWV = matWV * pos;
    gl_Position = matP * posWV;

    // Unpack texture coords: .zw = lightmap UV, .xy = diffuse UV (after swizzle)
    vec4 unpackedTex = vec4(inTexComp.zwxy) * vec4(0.00390625, 0.00390625, 0.000122070312, 0.000122070312);
    vec2 finalUV = fract(max(vecUVT2.xy, unpackedTex.xy));
    outTex.xy = unpackedTex.zw;

    // Sample lightmap and combine with packed vertex lighting
    vec4 sampledLight = textureLod(light_texture, finalUV, 0.0);
    outColor = vec4(sampledLight.xyz * lightUV, 1.0);

    // Fog computation
    float depth = posWV.z;
    float fogLinear = clamp(vecFog.y * (vecFog.x + depth), 0.0, 1.0);
    float fogExp2 = min(1.0, exp2(1.44269502 * (vecFog.x * depth)));
    outTex.z = (vecFog.z == 1.0) ? fogLinear : ((vecFog.z == 2.0) ? fogExp2 : 1.0);
    outTex.w = 1.0;
}
