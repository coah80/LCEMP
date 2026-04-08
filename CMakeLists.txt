cmake_minimum_required(VERSION 3.10)
project("LCEMP")

set(LCEMP_WORKING_DIR "${CMAKE_CURRENT_SOURCE_DIR}/Assets" CACHE STRING "The working directory for MinecraftClient")

set(CMAKE_CXX_STANDARD 17)

# Vulkan SDK
find_package(Vulkan REQUIRED)

# GLFW for cross-platform windowing
find_package(glfw3 3.3 QUIET)
if(NOT glfw3_FOUND)
    include(FetchContent)
    FetchContent_Declare(
        glfw
        GIT_REPOSITORY https://github.com/glfw/glfw.git
        GIT_TAG        3.3.9
    )
    set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
    set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
    set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)
    FetchContent_MakeAvailable(glfw)
endif()

# VulkanMemoryAllocator
include(FetchContent)
FetchContent_Declare(
    VulkanMemoryAllocator
    GIT_REPOSITORY https://github.com/GPUOpen-LibrariesAndSDKs/VulkanMemoryAllocator.git
    GIT_TAG        v3.0.1
)
FetchContent_MakeAvailable(VulkanMemoryAllocator)

if(WIN32)
    # Fix linking errors with other libs compiled with an older CRT
    set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")
endif()

include("${CMAKE_CURRENT_SOURCE_DIR}/cmake/Sources.cmake")

list(TRANSFORM MINECRAFT_WORLD_SOURCES PREPEND "${CMAKE_CURRENT_SOURCE_DIR}/Minecraft.World/")
list(TRANSFORM MINECRAFT_CLIENT_SOURCES PREPEND "${CMAKE_CURRENT_SOURCE_DIR}/Minecraft.Client/")

add_library(MinecraftWorld STATIC ${MINECRAFT_WORLD_SOURCES})
add_executable(MinecraftClient ${MINECRAFT_CLIENT_SOURCES})

if(WIN32)
    set_property(TARGET MinecraftClient PROPERTY WIN32_EXECUTABLE TRUE)
    set_property(TARGET MinecraftClient PROPERTY VS_DEBUGGER_WORKING_DIRECTORY "${LCEMP_WORKING_DIR}")
endif()

if(MSVC)
    target_compile_options(MinecraftWorld PRIVATE /W3 /MP $<$<CONFIG:Debug>:/MTd> $<$<NOT:$<CONFIG:Debug>>:/MT> /EHsc)
    target_compile_options(MinecraftClient PRIVATE /W3 /MP $<$<CONFIG:Debug>:/MTd> $<$<NOT:$<CONFIG:Debug>>:/MT> /EHsc)
endif()

target_compile_definitions(MinecraftWorld PRIVATE
        _LARGE_WORLDS
        _LIB
        $<$<CONFIG:Debug>:_DEBUG_MENUS_ENABLED;_DEBUG>
        $<$<PLATFORM_ID:Windows>:_CRT_NON_CONFORMING_SWPRINTFS;_CRT_SECURE_NO_WARNINGS;_WINDOWS64>
)

target_compile_definitions(MinecraftClient PRIVATE
        _LARGE_WORLDS
        $<$<CONFIG:Debug>:_DEBUG_MENUS_ENABLED;_DEBUG>
        $<$<PLATFORM_ID:Windows>:_CRT_NON_CONFORMING_SWPRINTFS;_CRT_SECURE_NO_WARNINGS;_WINDOWS64>
)

target_include_directories(MinecraftWorld PUBLIC
        "${CMAKE_CURRENT_SOURCE_DIR}/Minecraft.World"
        "${CMAKE_CURRENT_SOURCE_DIR}/Minecraft.World/x64headers"
)

target_include_directories(MinecraftClient PRIVATE
        "${CMAKE_CURRENT_SOURCE_DIR}/Minecraft.Client"
        "${CMAKE_CURRENT_SOURCE_DIR}/Minecraft.Client/Common"
        "${CMAKE_CURRENT_SOURCE_DIR}/Minecraft.Client/Common/UI"
)

# stb_image for PNG loading (used by UI renderer)
FetchContent_Declare(
    stb
    GIT_REPOSITORY https://github.com/nothings/stb.git
    GIT_TAG        master
)
FetchContent_MakeAvailable(stb)
target_include_directories(MinecraftClient PRIVATE ${stb_SOURCE_DIR})

target_link_libraries(MinecraftClient PRIVATE
        MinecraftWorld
        Vulkan::Vulkan
        glfw
        GPUOpen::VulkanMemoryAllocator
)

# Platform-specific libraries (Windows only - these are proprietary binaries)
if(WIN32)
    target_link_libraries(MinecraftClient PRIVATE
        XInput9_1_0
    )
    # Original 4J proprietary libraries (Windows x64 only, LTCG format)
    # These are being replaced by cross-platform reimplementations
    if(LCEMP_USE_PROPRIETARY_LIBS)
        target_include_directories(MinecraftClient PRIVATE
            "${CMAKE_CURRENT_SOURCE_DIR}/Minecraft.Client/Windows64/Iggy/include"
            "${CMAKE_CURRENT_SOURCE_DIR}/Minecraft.Client/Xbox/Sentient/Include"
        )
        target_link_libraries(MinecraftClient PRIVATE
            "${CMAKE_CURRENT_SOURCE_DIR}/Minecraft.Client/Windows64/Iggy/lib/iggy_w64.lib"
            "${CMAKE_CURRENT_SOURCE_DIR}/Minecraft.Client/Windows64/Miles/lib/mss64.lib"
            $<$<CONFIG:Debug>:
                "${CMAKE_CURRENT_SOURCE_DIR}/Minecraft.Client/Windows64/4JLibs/libs/4J_Input_d.lib"
                "${CMAKE_CURRENT_SOURCE_DIR}/Minecraft.Client/Windows64/4JLibs/libs/4J_Storage_d.lib"
                "${CMAKE_CURRENT_SOURCE_DIR}/Minecraft.Client/Windows64/4JLibs/libs/4J_Profile_d.lib"
            >
            $<$<NOT:$<CONFIG:Debug>>:
                "${CMAKE_CURRENT_SOURCE_DIR}/Minecraft.Client/Windows64/4JLibs/libs/4J_Input_r.lib"
                "${CMAKE_CURRENT_SOURCE_DIR}/Minecraft.Client/Windows64/4JLibs/libs/4J_Storage_r.lib"
                "${CMAKE_CURRENT_SOURCE_DIR}/Minecraft.Client/Windows64/4JLibs/libs/4J_Profile_r.lib"
            >
        )
        target_compile_definitions(MinecraftClient PRIVATE LCEMP_USE_IGGY LCEMP_USE_MILES LCEMP_USE_4J_LIBS)
    endif()
endif()

# On non-Windows, link pthreads and math
if(NOT WIN32)
    find_package(Threads REQUIRED)
    target_link_libraries(MinecraftClient PRIVATE Threads::Threads m)
endif()

# SPIR-V shader compilation
set(SHADER_DIR "${CMAKE_CURRENT_SOURCE_DIR}/Minecraft.Client/Windows_Libs/Dev/Render/shaders")
set(SHADER_OUTPUT_DIR "${CMAKE_BINARY_DIR}/shaders")
file(MAKE_DIRECTORY ${SHADER_OUTPUT_DIR})

file(GLOB SHADER_SOURCES "${SHADER_DIR}/*.vert" "${SHADER_DIR}/*.frag")
foreach(SHADER ${SHADER_SOURCES})
    get_filename_component(SHADER_NAME ${SHADER} NAME)
    set(SHADER_SPV "${SHADER_OUTPUT_DIR}/${SHADER_NAME}.spv")
    add_custom_command(
        OUTPUT ${SHADER_SPV}
        COMMAND Vulkan::glslangValidator -V ${SHADER} -o ${SHADER_SPV}
        DEPENDS ${SHADER}
        COMMENT "Compiling shader ${SHADER_NAME}"
    )
    list(APPEND SHADER_SPV_FILES ${SHADER_SPV})
endforeach()
add_custom_target(CompileShaders DEPENDS ${SHADER_SPV_FILES})
add_dependencies(MinecraftClient CompileShaders)