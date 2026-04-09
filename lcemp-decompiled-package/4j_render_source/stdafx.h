#ifndef PCH_H
#define PCH_H
/*
MIT License

Copyright (c) 2026 Patoke

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

#include <cstdint>
#include <cstring>
#include <cassert>
#include <cstdlib>
#include <cstdio>
#include <string>
#include <vector>
#include <mutex>
#include <thread>

#include <vulkan/vulkan.h>

// Platform-specific includes
#ifdef _WIN32
    #define WIN32_LEAN_AND_MEAN
    #include <Windows.h>
    #ifdef LCEMP_USE_4J_LIBS
        #include <Xinput.h>
    #endif
    #ifdef VK_USE_PLATFORM_WIN32_KHR
        #include <vulkan/vulkan_win32.h>
    #endif
#else
    // POSIX compatibility types for non-Windows platforms
    typedef uint32_t DWORD;
    typedef uint16_t WORD;
    typedef uint8_t  BYTE;
    typedef int32_t  BOOL;
    typedef long     HRESULT;
    typedef void*    HANDLE;
    typedef void*    HWND;
    typedef void*    HINSTANCE;
    typedef void*    LPVOID;
    typedef const char*    LPCSTR;
    typedef const wchar_t* LPCWSTR;
    typedef wchar_t* LPWSTR;
    typedef uint8_t* PBYTE;

    #define S_OK    ((HRESULT)0)
    #define E_FAIL  ((HRESULT)-1)
    #define TRUE    1
    #define FALSE   0
    #define CALLBACK
    #define WINAPI
    #define MAX_PATH 260
    #define XUSER_MAX_COUNT 4

    // CRITICAL_SECTION → std::mutex wrapper
    struct CRITICAL_SECTION {
        std::mutex mtx;
    };
    inline void InitializeCriticalSection(CRITICAL_SECTION *cs) {}
    inline void DeleteCriticalSection(CRITICAL_SECTION *cs) {}
    inline void EnterCriticalSection(CRITICAL_SECTION *cs) { cs->mtx.lock(); }
    inline void LeaveCriticalSection(CRITICAL_SECTION *cs) { cs->mtx.unlock(); }

    // Common Windows integer types
    typedef int32_t  S32;
    typedef int64_t  S64;
    typedef uint32_t U32;
    typedef uint64_t U64;
    typedef double   F64;
    typedef float    F32;

    // Sleep
    #include <unistd.h>
    inline void Sleep(DWORD ms) { usleep(ms * 1000); }
#endif

// Common game types (defined for all platforms)
#ifndef _WIN32
    typedef int64_t __int64;
#endif

#endif //PCH_H
