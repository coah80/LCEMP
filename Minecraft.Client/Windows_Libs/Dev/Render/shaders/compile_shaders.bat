@echo off
REM Compile all GLSL shaders to SPIR-V for Vulkan
REM Requires glslangValidator or glslc from the Vulkan SDK

setlocal enabledelayedexpansion
cd /d "%~dp0"

set COMPILER=
where glslc >nul 2>&1 && set COMPILER=glslc
if not defined COMPILER (
    where glslangValidator >nul 2>&1 && set COMPILER=glslangValidator
)
if not defined COMPILER (
    echo Error: Neither glslc nor glslangValidator found in PATH.
    echo Install the Vulkan SDK or shaderc to compile shaders.
    exit /b 1
)

set FAILED=0

for %%S in (
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
) do (
    echo Compiling %%S -^> %%S.spv
    if "!COMPILER!"=="glslc" (
        glslc --target-env=vulkan1.0 "%%S" -o "%%S.spv"
    ) else (
        glslangValidator -V --target-env vulkan1.0 "%%S" -o "%%S.spv"
    )
    if errorlevel 1 (
        echo   FAILED: %%S
        set /a FAILED+=1
    )
)

if !FAILED! gtr 0 (
    echo.
    echo !FAILED! shader^(s^) failed to compile.
    exit /b 1
) else (
    echo.
    echo All shaders compiled successfully.
)
