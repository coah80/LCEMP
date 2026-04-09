# Decompiling/Replacing 4J Proprietary Libraries for LCEMP Cross-Platform
> Researched over 2 iterations, 12 sources consulted.
> Confidence: high | Last updated: 2025

## Executive Summary

**Key finding: Decompilation is NOT the recommended approach.** The 4J binary-only libraries
(4J_Input, 4J_Storage, 4J_Profile) are deeply tied to Xbox/Windows platform APIs (XUID, 
XCONTENT_DATA, XStringVerify, etc.) that don't exist cross-platform. Even perfect decompilation 
would yield code that won't compile on macOS/Linux. The **recommended approach is writing 
cross-platform stub/replacement implementations** from the existing headers (626 lines total).

For Iggy (Flash UI) and Miles Sound System (audio), open-source replacements exist and should 
be used instead of decompilation.

If you still want to inspect the original .lib internals (for reference or curiosity), **Ghidra** 
is the best free tool. Download it, extract .obj files from .lib with Microsoft's LIB.exe, 
then import the .obj files into Ghidra for decompilation.

## 1. Decompilation Tools

### Ghidra (Recommended - FREE)
- **Source**: https://ghidra-sre.org / https://github.com/NationalSecurityAgency/ghidra
- **Cost**: Free, open-source (NSA)
- **Supported formats**: ELF, PE, Mach-O, COFF, AR (.lib archives) — **COFF is what .lib contains**
- **Architectures**: x86, x86-64, ARM, MIPS, PPC, etc.
- **Output**: C-like decompiled code
- **Requirements**: JDK 21 64-bit
- **Install**: Download release from GitHub releases, extract, run `ghidraRun`
- **Pros**: Handles COFF .obj files directly, scriptable with Python/Java, active development
- **Cons**: Java-based (slower than native tools), learning curve

### IDA Free
- **Source**: https://hex-rays.com/ida-free/
- **Cost**: Free (limited), Pro starts at paid tier
- **Supported**: x86-32 and x86-64 disassembly + cloud-only decompilation
- **Pros**: Industry standard, excellent analysis
- **Cons**: Cloud decompiler requires internet, free tier limited to x86

### RetDec (Open Source)
- **Source**: https://github.com/avast/retdec
- **Cost**: Free, open-source (Avast/NowSecure)
- **Supported formats**: ELF, PE, Mach-O, COFF, AR — **directly supports .lib**
- **Architectures**: x86, x86-64, ARM, ARM64, MIPS, PIC32, PPC
- **Output**: C and Python-like decompiled code
- **Status**: ⚠️ Limited maintenance mode (PRs reviewed, issues delayed)
- **Pros**: Batch/command-line usage, outputs C directly, can process .lib files natively
- **Cons**: Quality lower than Ghidra for complex C++, maintenance mode

### Binary Ninja
- **Source**: https://binary.ninja
- **Cost**: Free tier available, Personal $299, Commercial $1499
- **Supported**: PE/COFF, ELF, Mach-O — **handles .obj files**
- **Free tier**: x86/x86-64 + ARM disassembly/decompilation (4 architectures)
- **Pros**: Modern UI, excellent decompiler, plugin ecosystem
- **Cons**: Free tier limited, paid for full features

## 2. .lib Extraction Workflow

Windows .lib files are COFF archives containing individual .obj files. To decompile:

### Step 1: Extract .obj from .lib
```bash
# Using Microsoft's LIB.exe (Visual Studio Developer Command Prompt)
lib /list 4J_Input_r.lib          # List all .obj members
lib /extract:input.obj 4J_Input_r.lib  # Extract specific member

# Using 7-Zip (works on any OS)
7z x 4J_Input_r.lib               # Extracts all .obj files

# Using ar on Linux/macOS (if it's a standard COFF archive)
ar x 4J_Input_r.lib               # May work for some .lib formats
```

### Step 2: Import into Ghidra
1. Create new Ghidra project
2. File → Import File → select the .obj file
3. Ghidra auto-detects COFF format
4. Analyze (Analysis → Auto Analyze)
5. Navigate to functions in the Symbol Tree
6. Decompiler window shows C code

### Step 3: Export decompiled code
- Window → Decompile → right-click → Export Function
- Or use Ghidra scripting for batch export

### Alternative: RetDec batch processing
```bash
retdec-decompiler 4J_Input_r.lib    # Processes entire .lib directly
# Outputs: 4J_Input_r.c (decompiled C code)
```

## 3. Decompile vs Stub Approach

### ✅ RECOMMENDED: Write stubs/replacements from headers

**Why stubs are better than decompilation:**

1. **Platform APIs don't exist cross-platform**: The 4J libs use Xbox-specific types:
   - `XUSER_INDEX_ANY`, `PlayerUID`, `XCONTENT_DATA`, `XMARKETPLACE_CONTENTOFFER_INFO`
   - `XStringVerify`, `CXuiStringTable`, `HRESULT`, `LPVOID`
   - These are Windows/Xbox SDK types with no equivalent on macOS/Linux

2. **Headers give complete API surface**: We have 626 lines of headers defining every 
   public method signature, enum, and struct. That's everything needed to write stubs.

3. **Decompiled code is unreadable**: Even the best decompilers produce code with 
   mangled names, lost type info, and platform-specific calling conventions.

4. **Time efficiency**: Writing stubs from headers: ~2-4 hours. Setting up decompilation 
   pipeline + cleaning output + porting: days to weeks.

### Stub implementation plan:

| Library | Lines of header | Replacement approach |
|---------|----------------|---------------------|
| **4J_Input** (137 lines) | Gamepad input | GLFW gamepad API (`glfwGetGamepadState`) |
| **4J_Storage** (361 lines) | Save/load files | `std::filesystem` + zlib + custom save format |
| **4J_Profile** (128 lines) | Profiles, achievements | Simple local profile manager (JSON/binary) |
| **iggy_w64.lib** | Flash UI rendering | Already replacing with PNG-based UI system |
| **mss64.lib** | Audio playback | OpenAL Soft or miniaudio |

### When decompilation IS useful:
- Understanding **exact save format** byte layout (for compatibility with existing saves)
- Reverse-engineering **DLC package format** details
- Verifying **CRC algorithm** matches (C4JStorage::CRC is in the header)

## 4. Open-Source Replacements

### For Iggy (Flash UI) → Already planned PNG-based UI
- **Status**: Iggy is proprietary RAD Game Tools (now Epic Games) middleware
- **What it does**: Renders Adobe Flash SWF files as game UI with ActionScript 3
- **Replacement**: We've already extracted 337 SWFs → PNG + 254 embedded images
- **Plan**: Custom Vulkan 2D sprite renderer + bitmap font rendering
- **Libraries to consider**: Dear ImGui (debug/dev), stb_truetype (text), custom sprite batcher

### For Miles Sound System (mss64.lib) → OpenAL Soft or miniaudio
- **OpenAL Soft**: https://www.openal.org / https://github.com/kcat/openal-soft
  - Cross-platform 3D audio, LGPL licensed, drop-in replacement
  - Used by many games, well-documented API
- **miniaudio**: https://github.com/mackron/miniaudio
  - Single-header C library, public domain
  - Simpler API, lower-level, very portable
- **SDL_mixer**: Part of SDL2, handles most audio needs

### For 4J_Input → GLFW Input
- GLFW already handles keyboard, mouse, and gamepad input
- `glfwGetGamepadState()` maps to Xbox-style button layout
- Need wrapper to translate GLFW constants → 4J button bitmask constants

### For 4J_Storage → std::filesystem + custom format
- Save/load: `std::filesystem` for directory ops, raw file I/O for data
- DLC: Parse .arc archives (already have extractor)
- Message boxes: Use OS-native dialogs or in-game UI

### For 4J_Profile → Simple local manager
- Profile data: JSON or binary file in user data directory
- Achievements: Local tracking (no Xbox Live equivalent needed for now)
- Rich Presence: Optional Discord SDK integration later

## 5. Readable C++ Output Workflow (if you choose to decompile)

Best workflow for getting usable C++ from .lib files:

1. **Extract**: `lib /extract:*.obj library.lib` or `7z x library.lib`
2. **Import to Ghidra**: Create project, import all .obj files, auto-analyze
3. **Apply type info**: Import the header files as Ghidra data types (File → Parse C Source)
   - This lets Ghidra use the real struct/enum names from headers
4. **Decompile**: Functions will show with proper type names
5. **Export**: Use Ghidra's export or copy decompiled functions
6. **Clean up**: Manual cleanup of decompiled output:
   - Replace Ghidra-generated variable names
   - Fix calling conventions  
   - Add proper includes
   - Replace platform-specific intrinsics

**Expected quality**: ~60-70% readable for simple functions, 30-40% for complex C++ 
with vtables, templates, and exception handling.

## What to Download

### If you want to try decompilation (for reference):
1. **Ghidra** (free): https://github.com/NationalSecurityAgency/ghidra/releases
   - Also need JDK 21: https://adoptium.net/temurin/releases
   - ~500MB download, ~1GB installed

2. **RetDec** (free, for quick batch processing): https://github.com/avast/retdec/releases
   - ~5-6GB installed (large due to LLVM)
   - Can process .lib files directly from command line

### If you DON'T have the .lib files:
The .lib binaries aren't in the git repo. You'd need:
- Original game development files (from a 4J Studios dev kit)
- Or extract from a game build (the .lib code gets linked into the .exe)
- To decompile from the final .exe: use Ghidra on the game executable directly

### Recommended (no download needed):
Just write stubs from the headers. We have everything needed:
- `4J_Input.h` — 137 lines, 29 methods → GLFW gamepad wrapper
- `4J_Storage.h` — 361 lines, 46 methods → filesystem-based save system  
- `4J_Profile.h` — 128 lines, 35 methods → local profile manager

## Open Questions
- Do you have the actual .lib binary files? (Not in git repo)
- Do you need save-file compatibility with the original Xbox/Windows versions?
- Should audio (Miles) replacement be prioritized or deferred?

## Methodology
- Analyzed all 3 header files (626 lines) to catalog complete API surface
- Researched 5 decompilation tools (Ghidra, IDA Free, RetDec, Binary Ninja, radare2)
- Investigated .lib/COFF format and extraction methods
- Evaluated open-source replacements for each proprietary library
- Assessed cross-platform portability of original API surface

## Sources
1. Ghidra Official — https://ghidra-sre.org — original
2. Ghidra GitHub — https://github.com/NationalSecurityAgency/ghidra — original
3. IDA Free — https://hex-rays.com/ida-free/ — original
4. RetDec GitHub — https://github.com/avast/retdec — original
5. Binary Ninja Purchase — https://binary.ninja/purchase/ — original
6. Microsoft LIB Reference — https://learn.microsoft.com/en-us/cpp/build/reference/lib-reference — original
7. RAD Game Tools Iggy — https://www.radgametools.com/iggy.htm — original
8. RAD Game Tools (Wikipedia) — https://en.wikipedia.org/wiki/RAD_Game_Tools — secondary
9. OpenAL — https://www.openal.org — original
10. LCEMP 4J_Input.h — local source — original
11. LCEMP 4J_Storage.h — local source — original
12. LCEMP 4J_Profile.h — local source — original
