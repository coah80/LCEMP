LCEMP Decompiled & Rewritten Files
===================================

decompiled_output/
  - storage_decompiled.c   (47,633 lines, 372 functions) — Save/load/DLC system
  - render_decompiled.c    (27,210 lines, 241 functions) — Rendering internals
  - ui_decompiled.c        (26,448 lines, 157 functions) — UI controller/scenes
  - input_decompiled.c     (25,077 lines, 261 functions) — Input/gamepad handling
  - profile_decompiled.c   (10,364 lines, 89 functions)  — Profiles/achievements
  - 4J_all_decompiled.c    (38,364 lines, 217 functions) — First pass (string xrefs)
  - 4J_symbol_reference.txt — 399 mangled C++ symbols from debug .lib files
  - 4J_function_index.txt  — Index of directly-matched functions
  - all_symbols.txt        — All 19,503 symbols from Ghidra analysis

  Source: Ghidra 12.0.4 headless decompilation of Minecraft.Client.exe (PE32+ x64)
  Method: String cross-reference matching → caller chain tracing → categorization

ghidra_scripts/
  - ghidra_decompile_all.py       — Main categorized decompilation (produced the 5 files above)
  - ghidra_decompile_by_strings.py — String xref-based function finder
  - ghidra_decompile_4j.py        — Symbol name matching
  - ghidra_decompile.py           — Generic decompilation helper
  - ghidra_apply_lib_symbols.py   — RTTI/vtable symbol recovery
  - ghidra_dump_symbols.py        — Symbol dump utility

4j_render_source/
  These are the ORIGINAL source files from the repo (4J Render had full source).
  Now REWRITTEN for Vulkan (no longer D3D11):
  - Renderer.h       — All types, VkAllocatedBuffer/Image, pipeline state
  - RendererCore.cpp  — Vulkan init, swapchain, render pass, present
  - RendererState.cpp — Deferred pipeline creation, sampler management
  - RendererTexture.cpp — VkImage creation, staging uploads via VMA
  - RendererVertex.cpp  — VMA ring buffer, vertex format binding
  - RendererMatrix.cpp  — Mat4x4 math, Vulkan NDC correction
  - RendererCBuff.cpp   — Command buffer recording/replay system
  - 4J_Render.h/cpp     — Platform-agnostic wrapper layer

vulkan_shaders/
  11 GLSL shaders (translated from original HLSL) + compile scripts
