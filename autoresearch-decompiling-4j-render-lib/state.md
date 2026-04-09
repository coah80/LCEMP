# Research State: Decompiling 4J Proprietary Libraries for LCEMP Cross-Platform

## Key Finding
4J_Render has FULL source code — no decompilation needed for rendering.
The binary-only libs need **stubs/replacements**, not decompilation (platform APIs non-portable).

## Current Iteration: 2 (COMPLETE)
## Sub-questions
1. What are the best free/open-source tools for decompiling Windows x64 .lib static libraries?
2. How do you extract individual .obj files from .lib archives and decompile them?
3. What's the best approach: full decompilation vs writing stubs from headers?
4. Are there existing open-source replacements for Iggy/Miles/4J libs?
5. What workflow produces the most readable C++ from x64 COFF object files?

## Coverage Map
| Sub-question | Sources | Confidence | Status |
|---|---|---|---|
| 1. Decompilation tools | 5 | high | done |
| 2. .lib extraction workflow | 3 | high | done |
| 3. Decompile vs stub approach | 3 | high | done |
| 4. Open-source replacements | 4 | high | done |
| 5. Readable C++ output workflow | 3 | medium | done |

## Conclusion
Write stubs from headers. Decompilation is optional reference material only.
