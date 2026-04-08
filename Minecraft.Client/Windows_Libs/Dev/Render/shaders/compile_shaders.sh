#!/usr/bin/env bash
# Compile all GLSL shaders to SPIR-V for Vulkan
# Requires glslangValidator (from Vulkan SDK) or glslc (from shaderc)
set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "$0")" && pwd)"
cd "$SCRIPT_DIR"

# Prefer glslc, fall back to glslangValidator
if command -v glslc &>/dev/null; then
    COMPILER="glslc"
elif command -v glslangValidator &>/dev/null; then
    COMPILER="glslangValidator"
else
    echo "Error: Neither glslc nor glslangValidator found in PATH."
    echo "Install the Vulkan SDK or shaderc to compile shaders."
    exit 1
fi

SHADERS=(
    standard.vert
    lighting.vert
    texgen.vert
    compressed.vert
    screen_clear.vert
    screen_space.vert
    standard.frag
    projection.frag
    forcelod.frag
    screen_clear.frag
    screen_space.frag
)

FAILED=0

for SHADER in "${SHADERS[@]}"; do
    OUTPUT="${SHADER}.spv"
    echo "Compiling ${SHADER} -> ${OUTPUT}"

    if [ "$COMPILER" = "glslc" ]; then
        if ! glslc --target-env=vulkan1.0 "$SHADER" -o "$OUTPUT"; then
            echo "  FAILED: ${SHADER}"
            FAILED=$((FAILED + 1))
        fi
    else
        if ! glslangValidator -V --target-env vulkan1.0 "$SHADER" -o "$OUTPUT"; then
            echo "  FAILED: ${SHADER}"
            FAILED=$((FAILED + 1))
        fi
    fi
done

if [ $FAILED -ne 0 ]; then
    echo ""
    echo "${FAILED} shader(s) failed to compile."
    exit 1
else
    echo ""
    echo "All shaders compiled successfully."
fi
