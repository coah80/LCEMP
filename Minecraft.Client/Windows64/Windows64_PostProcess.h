#pragma once

#ifdef _WIN32
#include <d3d11.h>
#endif

bool InitGammaPostProcess();
void ApplyGammaPostProcess();
void CleanupGammaPostProcess();
void SetGammaValue(float gamma);
