// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

//#include <xtl.h>
//#include <xboxmath.h>

#define __STR2__(x) #x
#define __STR1__(x) __STR2__(x)
#define __LOC__ __FILE__ "("__STR1__(__LINE__)") : 4J Warning Msg: "

#ifdef __PS3__

#include "Ps3Types.h"
#include "Ps3Stubs.h"
#include "PS3Maths.h"

#elif defined __ORBIS__
#define AUTO_VAR(_var, _val) auto _var = _val
#include <stdio.h>
#include <stdlib.h>
#include <scebase.h>
#include <kernel.h>
#include <unordered_map>
#include <unordered_set>
#include <vector> 
#include <fios2.h>
#include <message_dialog.h>
#include <game_live_streaming.h>
#include "OrbisTypes.h"
#include "OrbisStubs.h"
#include "OrbisMaths.h"
#define HRESULT_SUCCEEDED(hr) (((HRESULT)(hr)) >= 0)
#elif defined __PSVITA__
#include <stdio.h>
#include <stdlib.h>
#include <scebase.h>
#include <kernel.h>
#include <unordered_map>
#include <unordered_set>
#include <vector> 
#include <touch.h>
#include "PSVitaTypes.h"
#include "PSVitaStubs.h"
#include "PSVitaMaths.h"
#else
#define AUTO_VAR(_var, _val) auto _var = _val
#include <unordered_map>
#include <unordered_set>
#include <vector>
#ifdef _WIN32
typedef unsigned __int64 __uint64;
#else
#include <cstdint>
#ifndef __uint64
typedef uint64_t __uint64;
#endif
#ifndef __int64
typedef int64_t __int64;
#endif
#ifndef __int32
typedef int32_t __int32;
#endif
#endif
#endif

#ifdef  _WINDOWS64
#ifdef _WIN32
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <malloc.h>
#include <tchar.h>
#include <d3d11.h>
#include <DirectXMath.h>
using namespace DirectX; 
#else
#include <cstdlib>
#include <cstring>
#include <cstdio>
#include <cfloat>
#include <cmath>
#include <pthread.h>
#include <mutex>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#ifndef WINAPI
#define WINAPI
#endif
#ifndef VOID
#define VOID void
#endif
#ifndef CDECL
#define CDECL
#endif
#ifndef CONST
#define CONST const
#endif
#ifndef _In_z_
#define _In_z_
#endif
#ifndef _Printf_format_string_
#define _Printf_format_string_
#endif
#endif

struct XMFLOAT4 { float x, y, z, w; };
struct XMFLOAT4X4 { float m[4][4]; };
struct XMMATRIX {
    XMFLOAT4 r[4];
};
typedef XMFLOAT4 XMVECTOR;

inline XMMATRIX XMMatrixMultiply(const XMMATRIX& a, const XMMATRIX& b) {
    XMMATRIX out;
    memset(&out, 0, sizeof(out));
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++) {
            float s = 0;
            float ar[4] = {a.r[i].x, a.r[i].y, a.r[i].z, a.r[i].w};
            float bc[4];
            for (int k = 0; k < 4; k++) {
                float br[4] = {b.r[k].x, b.r[k].y, b.r[k].z, b.r[k].w};
                bc[k] = br[j];
            }
            for (int k = 0; k < 4; k++) s += ar[k] * bc[k];
            float* rr = &out.r[i].x;
            rr[j] = s;
        }
    return out;
}
inline XMVECTOR XMMatrixDeterminant(const XMMATRIX&) { XMVECTOR v = {1,0,0,0}; return v; }
inline XMMATRIX XMMatrixInverse(XMVECTOR*, const XMMATRIX& m) { return m; }
inline void XMStoreFloat4(XMFLOAT4* dst, const XMFLOAT4& src) { *dst = src; }
#ifndef DWORD
typedef uint32_t DWORD;
#endif
#ifndef BOOL
typedef int BOOL;
#endif
#ifndef TRUE
#define TRUE 1
#endif
#ifndef FALSE
#define FALSE 0
#endif
#ifndef BYTE
typedef uint8_t BYTE;
#endif
#ifndef WORD
typedef uint16_t WORD;
#endif
#ifndef LONG
typedef int32_t LONG;
#endif
#ifndef HRESULT
typedef long HRESULT;
#endif
#ifndef S_OK
#define S_OK ((HRESULT)0L)
#endif
#ifndef E_FAIL
#define E_FAIL ((HRESULT)0x80004005L)
#endif
#ifndef SUCCEEDED
#define SUCCEEDED(hr) (((HRESULT)(hr)) >= 0)
#endif
#ifndef FAILED
#define FAILED(hr) (((HRESULT)(hr)) < 0)
#endif
#ifndef HANDLE
typedef void* HANDLE;
#endif
#ifndef LPVOID
typedef void* LPVOID;
#endif
#ifndef LPCSTR
typedef const char* LPCSTR;
#endif
#ifndef LPSTR
typedef char* LPSTR;
#endif
#ifndef LPCWSTR
typedef const wchar_t* LPCWSTR;
#endif
#ifndef LPWSTR
typedef wchar_t* LPWSTR;
#endif
#ifndef WCHAR
typedef wchar_t WCHAR;
#endif
#ifndef CHAR
typedef char CHAR;
#endif
#ifndef UINT
typedef unsigned int UINT;
#endif
#ifndef UINT64
typedef uint64_t UINT64;
#endif
#ifndef INT
typedef int INT;
#endif
#ifndef FLOAT
typedef float FLOAT;
#endif
#ifndef ULONG
typedef unsigned long ULONG;
#endif
#ifndef USHORT
typedef unsigned short USHORT;
#endif
#ifndef UCHAR
typedef unsigned char UCHAR;
#endif
#ifndef SHORT
typedef short SHORT;
#endif
#ifndef PVOID
typedef void* PVOID;
#endif
#if !defined(LARGE_INTEGER) && !defined(_LARGE_INTEGER_DEFINED)
#define _LARGE_INTEGER_DEFINED
typedef union _LARGE_INTEGER {
    struct { uint32_t LowPart; int32_t HighPart; };
    int64_t QuadPart;
} LARGE_INTEGER;
#endif
#ifndef CRITICAL_SECTION
typedef std::mutex CRITICAL_SECTION;
#endif
#ifndef MAX_PATH
#define MAX_PATH 260
#endif
#ifndef INFINITE
#define INFINITE 0xFFFFFFFF
#endif
#ifndef _T
#define _T(x) x
#endif
#ifndef _tcslen
#define _tcslen strlen
#endif
#ifndef _tcscpy
#define _tcscpy strcpy
#endif
#ifndef _tcsncpy
#define _tcsncpy strncpy
#endif
#ifndef _stprintf
#define _stprintf sprintf
#endif
#ifndef _sntprintf
#define _sntprintf snprintf
#endif
#ifndef _vstprintf
#define _vstprintf vsprintf
#endif
#ifndef _vsntprintf
#define _vsntprintf vsnprintf
#endif
#ifndef OutputDebugString
#define OutputDebugString(s) ((void)0)
#endif
#ifndef OutputDebugStringA
#define OutputDebugStringA(s) ((void)0)
#endif
#ifndef OutputDebugStringW
#define OutputDebugStringW(s) ((void)0)
#endif
#ifndef ZeroMemory
#define ZeroMemory(p,s) memset((p),0,(s))
#endif
#ifndef CopyMemory
#define CopyMemory(d,s,l) memcpy((d),(s),(l))
#endif
#ifndef UNREFERENCED_PARAMETER
#define UNREFERENCED_PARAMETER(p) (void)(p)
#endif
#ifndef __debugbreak
#if __has_builtin(__builtin_debugtrap)
#define __debugbreak() __builtin_debugtrap()
#elif __has_builtin(__builtin_trap)
#define __debugbreak() __builtin_trap()
#else
#define __debugbreak() ((void)0)
#endif
#endif
// type/macro definitions shared across all _WINDOWS64 platforms

#ifndef ERROR_SUCCESS
#define ERROR_SUCCESS 0L
#endif
#ifndef _TRUNCATE
#define _TRUNCATE ((size_t)-1)
#endif
#ifndef wcsncpy_s
inline int wcsncpy_s(wchar_t* dest, size_t destsz, const wchar_t* src, size_t count) {
    if (!dest || destsz == 0) return -1;
    size_t n = (count == (size_t)-1) ? destsz - 1 : ((count < destsz - 1) ? count : destsz - 1);
    wcsncpy(dest, src ? src : L"", n);
    dest[n] = L'\0';
    return 0;
}
template<size_t N>
inline int wcsncpy_s(wchar_t (&dest)[N], const wchar_t* src, size_t count) {
    return wcsncpy_s(dest, N, src, count);
}
#endif
#ifndef S_FALSE
#define S_FALSE 1L
#endif
#ifndef S_OK
#define S_OK 0L
#endif
#ifndef STILL_ACTIVE
#define STILL_ACTIVE 259
#endif
#ifndef ERROR_CANCELLED
#define ERROR_CANCELLED 1223L
#endif
#ifndef PLONG
typedef LONG* PLONG;
#endif
#ifndef LPCVOID
typedef const void* LPCVOID;
#endif
#ifndef LPDWORD
typedef DWORD* LPDWORD;
#endif
#ifndef PDWORD
typedef DWORD* PDWORD;
#endif
#ifndef PBYTE
typedef BYTE* PBYTE;
#endif
#ifndef strncpy_s
inline int strncpy_s(char* dest, size_t destsz, const char* src, size_t count) {
    if (!dest || destsz == 0) return -1;
    size_t n = (count == (size_t)-1) ? destsz - 1 : ((count < destsz - 1) ? count : destsz - 1);
    strncpy(dest, src ? src : "", n);
    dest[n] = '\0';
    return 0;
}
#endif
#ifndef wcscpy_s
inline int wcscpy_s(wchar_t* dest, size_t destsz, const wchar_t* src) {
    if (!dest || destsz == 0) return -1;
    wcsncpy(dest, src ? src : L"", destsz - 1);
    dest[destsz - 1] = L'\0';
    return 0;
}
#endif
#ifndef fopen_s
inline int fopen_s(FILE** pFile, const char* filename, const char* mode) {
    if (!pFile) return -1;
    *pFile = fopen(filename, mode);
    return (*pFile) ? 0 : -1;
}
#endif
#ifndef GetCurrentDirectoryA
inline DWORD GetCurrentDirectoryA(DWORD nBufferLength, char* lpBuffer) {
    if (getcwd(lpBuffer, nBufferLength)) return (DWORD)strlen(lpBuffer);
    return 0;
}
#endif
#ifndef ULONGLONG
typedef uint64_t ULONGLONG;
#endif
#ifndef LONGLONG
typedef int64_t LONGLONG;
#endif
#ifndef LONG64
typedef int64_t LONG64;
#endif
#ifndef SIZE_T
typedef size_t SIZE_T;
#endif
#ifndef ULONG_PTR
typedef uintptr_t ULONG_PTR;
#endif
#if !defined(FILETIME) && !defined(_FILETIME_DEFINED)
#define _FILETIME_DEFINED
typedef struct _FILETIME { uint32_t dwLowDateTime; uint32_t dwHighDateTime; } FILETIME;
#endif
#ifndef _LCEMP_ULARGE_INTEGER_DEFINED
#define _LCEMP_ULARGE_INTEGER_DEFINED
typedef union _ULARGE_INTEGER {
    struct { uint32_t LowPart; uint32_t HighPart; };
    uint64_t QuadPart;
} ULARGE_INTEGER;
#endif
#ifndef _LCEMP_SYSTEMTIME_DEFINED
#define _LCEMP_SYSTEMTIME_DEFINED
typedef struct _SYSTEMTIME {
    WORD wYear; WORD wMonth; WORD wDayOfWeek; WORD wDay;
    WORD wHour; WORD wMinute; WORD wSecond; WORD wMilliseconds;
} SYSTEMTIME;
#include <ctime>
inline void GetLocalTime(SYSTEMTIME* st) {
    time_t t = time(nullptr);
    struct tm* lt = localtime(&t);
    st->wYear = (WORD)(lt->tm_year + 1900);
    st->wMonth = (WORD)(lt->tm_mon + 1);
    st->wDayOfWeek = (WORD)lt->tm_wday;
    st->wDay = (WORD)lt->tm_mday;
    st->wHour = (WORD)lt->tm_hour;
    st->wMinute = (WORD)lt->tm_min;
    st->wSecond = (WORD)lt->tm_sec;
    st->wMilliseconds = 0;
}
inline void GetSystemTime(SYSTEMTIME* st) { GetLocalTime(st); }
inline BOOL FileTimeToSystemTime(const FILETIME* ft, SYSTEMTIME* st) {
    uint64_t ticks = ((uint64_t)ft->dwHighDateTime << 32) | ft->dwLowDateTime;
    uint64_t epoch_diff = 116444736000000000ULL;
    if (ticks < epoch_diff) { memset(st, 0, sizeof(SYSTEMTIME)); return TRUE; }
    time_t unix_time = (time_t)((ticks - epoch_diff) / 10000000ULL);
    struct tm* lt = localtime(&unix_time);
    st->wYear = (WORD)(lt->tm_year + 1900);
    st->wMonth = (WORD)(lt->tm_mon + 1);
    st->wDayOfWeek = (WORD)lt->tm_wday;
    st->wDay = (WORD)lt->tm_mday;
    st->wHour = (WORD)lt->tm_hour;
    st->wMinute = (WORD)lt->tm_min;
    st->wSecond = (WORD)lt->tm_sec;
    st->wMilliseconds = 0;
    return TRUE;
}
inline BOOL SystemTimeToFileTime(const SYSTEMTIME* st, FILETIME* ft) {
    struct tm t = {};
    t.tm_year = st->wYear - 1900; t.tm_mon = st->wMonth - 1; t.tm_mday = st->wDay;
    t.tm_hour = st->wHour; t.tm_min = st->wMinute; t.tm_sec = st->wSecond;
    time_t unix_time = mktime(&t);
    uint64_t ticks = ((uint64_t)unix_time * 10000000ULL) + 116444736000000000ULL;
    ft->dwLowDateTime = (uint32_t)(ticks & 0xFFFFFFFF);
    ft->dwHighDateTime = (uint32_t)(ticks >> 32);
    return TRUE;
}
#endif
#ifndef _wcstoui64
#define _wcstoui64(s, e, b) wcstoull(s, e, b)
#endif
#ifndef ZeroMemory
#define ZeroMemory(p, sz) memset(p, 0, sz)
#endif
#ifndef ERROR_IO_PENDING
#define ERROR_IO_PENDING 997L
#endif
#ifndef ERROR_CANCELLED
#define ERROR_CANCELLED 1223L
#endif
#ifndef GetTickCount
inline unsigned long GetTickCount() {
    struct timespec ts;
    clock_gettime(CLOCK_MONOTONIC, &ts);
    return (unsigned long)(ts.tv_sec * 1000 + ts.tv_nsec / 1000000);
}
#endif
inline int _i64toa_s(int64_t val, char* buf, size_t sz, int radix) {
    (void)radix;
    snprintf(buf, sz, "%lld", (long long)val);
    return 0;
}
inline int _itoa_s(int val, char* buf, size_t sz, int radix) {
    (void)radix;
    snprintf(buf, sz, "%d", val);
    return 0;
}
inline int _itoa_s(int val, char* buf, size_t sz) {
    return _itoa_s(val, buf, sz, 10);
}
#ifndef _stricmp
#define _stricmp strcasecmp
#endif
#ifndef _wcsicmp
#define _wcsicmp wcscasecmp
#endif
#ifndef _strnicmp
#define _strnicmp strncasecmp
#endif
#ifndef _wcsnicmp
#define _wcsnicmp wcsncasecmp
#endif

#ifndef _LCEMP_WIN32_STUBS_DEFINED
#define _LCEMP_WIN32_STUBS_DEFINED

#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <dirent.h>
#include <time.h>

#ifndef INVALID_HANDLE_VALUE
#define INVALID_HANDLE_VALUE ((HANDLE)(long long)-1)
#endif
#ifndef GENERIC_READ
#define GENERIC_READ 0x80000000
#endif
#ifndef GENERIC_WRITE
#define GENERIC_WRITE 0x40000000
#endif
#ifndef OPEN_EXISTING
#define OPEN_EXISTING 3
#endif
#ifndef CREATE_ALWAYS
#define CREATE_ALWAYS 2
#endif
#ifndef FILE_ATTRIBUTE_NORMAL
#define FILE_ATTRIBUTE_NORMAL 0x80
#endif
#ifndef sprintf_s
#define sprintf_s snprintf
#endif
#ifndef _snprintf
#define _snprintf snprintf
#endif
#ifndef _snwprintf
#define _snwprintf swprintf
#endif
#ifndef swprintf_s
#define swprintf_s swprintf
#endif
#ifndef MEM_RESERVE
#define MEM_RESERVE 0x2000
#define MEM_COMMIT 0x1000
#define MEM_DECOMMIT 0x4000
#define MEM_RELEASE 0x8000
#endif
#ifndef FILE_BEGIN
#define FILE_BEGIN 0
#define FILE_CURRENT 1
#define FILE_END 2
#endif
#ifndef OPEN_ALWAYS
#define OPEN_ALWAYS 4
#endif
#ifndef FILE_FLAG_RANDOM_ACCESS
#define FILE_FLAG_RANDOM_ACCESS 0x10000000
#endif
#ifndef FILE_FLAG_SEQUENTIAL_SCAN
#define FILE_FLAG_SEQUENTIAL_SCAN 0x08000000
#endif
#ifndef FILE_ATTRIBUTE_DIRECTORY
#define FILE_ATTRIBUTE_DIRECTORY 0x10
#endif
#ifndef INVALID_FILE_ATTRIBUTES
#define INVALID_FILE_ATTRIBUTES ((DWORD)-1)
#endif

#endif // _LCEMP_WIN32_STUBS_DEFINED

#ifndef _LCEMP_WIN32_FILE_STUBS
#define _LCEMP_WIN32_FILE_STUBS
inline HANDLE CreateFile(const char* path, DWORD access, DWORD share, void* sec, DWORD disp, DWORD flags, HANDLE tmpl) {
    (void)share; (void)sec; (void)flags; (void)tmpl;
    std::string fixed(path);
    for (auto &c : fixed) if (c == '\\') c = '/';
    int oflags = 0;
    if (access == GENERIC_READ) oflags = O_RDONLY;
    else if (access == GENERIC_WRITE) oflags = O_WRONLY | O_CREAT | O_TRUNC;
    else oflags = O_RDWR;
    int fd = open(fixed.c_str(), oflags, 0644);
    return (fd < 0) ? INVALID_HANDLE_VALUE : (HANDLE)(long long)fd;
}
inline HANDLE CreateFile(const wchar_t* path, DWORD access, DWORD share, void* sec, DWORD disp, DWORD flags, HANDLE tmpl) {
    char buf[1024];
    wcstombs(buf, path, sizeof(buf));
    for (char *p = buf; *p; ++p) if (*p == '\\') *p = '/';
    return CreateFile(buf, access, share, sec, disp, flags, tmpl);
}
inline DWORD GetFileSize(HANDLE h, DWORD* high) {
    if (high) *high = 0;
    struct stat st;
    if (fstat((int)(long long)h, &st) != 0) return 0;
    return (DWORD)st.st_size;
}
inline BOOL ReadFile(HANDLE h, void* buf, DWORD nBytes, DWORD* nRead, void* ovl) {
    (void)ovl;
    ssize_t r = read((int)(long long)h, buf, nBytes);
    if (nRead) *nRead = (r > 0) ? (DWORD)r : 0;
    return r >= 0;
}
inline BOOL WriteFile(HANDLE h, const void* buf, DWORD nBytes, DWORD* nWritten, void* ovl) {
    (void)ovl;
    ssize_t w = write((int)(long long)h, buf, nBytes);
    if (nWritten) *nWritten = (w > 0) ? (DWORD)w : 0;
    return w >= 0;
}
inline BOOL CloseHandle(HANDLE h) {
    return close((int)(long long)h) == 0;
}
inline DWORD GetLastError() { return 0; }
#endif // _LCEMP_WIN32_FILE_STUBS

#ifndef _LCEMP_WIN32_VMEM_STUBS
#define _LCEMP_WIN32_VMEM_STUBS
inline LPVOID VirtualAlloc(LPVOID addr, size_t size, DWORD type, DWORD prot) {
    (void)addr; (void)type; (void)prot;
    return malloc(size);
}
inline BOOL VirtualFree(LPVOID addr, size_t size, DWORD type) {
    (void)size; (void)type;
    free(addr);
    return TRUE;
}
#endif // _LCEMP_WIN32_VMEM_STUBS

#include <chrono>
#ifndef _LCEMP_WIN32_PERF_STUBS
#define _LCEMP_WIN32_PERF_STUBS
inline BOOL QueryPerformanceFrequency(LARGE_INTEGER* freq) {
    freq->QuadPart = 1000000000LL;
    return TRUE;
}
inline BOOL QueryPerformanceCounter(LARGE_INTEGER* cnt) {
    auto now = std::chrono::high_resolution_clock::now().time_since_epoch();
    cnt->QuadPart = std::chrono::duration_cast<std::chrono::nanoseconds>(now).count();
    return TRUE;
}
#endif // _LCEMP_WIN32_PERF_STUBS
#ifndef _LCEMP_WIN32_FILEPTR_STUBS
#define _LCEMP_WIN32_FILEPTR_STUBS
inline DWORD SetFilePointer(HANDLE h, LONG dist, LONG* distHigh, DWORD method) {
    (void)distHigh;
    int whence = SEEK_SET;
    if (method == FILE_CURRENT) whence = SEEK_CUR;
    else if (method == FILE_END) whence = SEEK_END;
    return (DWORD)lseek((int)(long long)h, dist, whence);
}
#endif // _LCEMP_WIN32_FILEPTR_STUBS

#ifndef _LCEMP_WIN32_FS_STUBS
#define _LCEMP_WIN32_FS_STUBS
inline DWORD GetFileAttributes(const char* path) {
    struct stat st;
    std::string fixed(path);
    for (auto &c : fixed) if (c == '\\') c = '/';
    if (stat(fixed.c_str(), &st) != 0) return INVALID_FILE_ATTRIBUTES;
    DWORD attrs = 0;
    if (S_ISDIR(st.st_mode)) attrs |= FILE_ATTRIBUTE_DIRECTORY;
    else attrs |= FILE_ATTRIBUTE_NORMAL;
    return attrs;
}
inline DWORD GetFileAttributes(const wchar_t* path) {
    char buf[1024];
    wcstombs(buf, path, sizeof(buf));
    for (char *p = buf; *p; ++p) if (*p == '\\') *p = '/';
    return GetFileAttributes(buf);
}
inline BOOL DeleteFile(const char* path) {
    std::string fixed(path);
    for (auto &c : fixed) if (c == '\\') c = '/';
    return remove(fixed.c_str()) == 0;
}
inline BOOL DeleteFile(const wchar_t* path) {
    char buf[1024]; wcstombs(buf, path, sizeof(buf));
    for (char *p = buf; *p; ++p) if (*p == '\\') *p = '/';
    return DeleteFile(buf);
}
inline BOOL CreateDirectory(const char* path, void*) {
    std::string fixed(path);
    for (auto &c : fixed) if (c == '\\') c = '/';
    return ::mkdir(fixed.c_str(), 0755) == 0;
}
inline BOOL CreateDirectory(const wchar_t* path, void*) {
    char buf[1024]; wcstombs(buf, path, sizeof(buf));
    for (char *p = buf; *p; ++p) if (*p == '\\') *p = '/';
    return CreateDirectory(buf, nullptr);
}
inline BOOL MoveFile(const char* src, const char* dst) {
    std::string s(src), d(dst);
    for (auto &c : s) if (c == '\\') c = '/';
    for (auto &c : d) if (c == '\\') c = '/';
    return rename(s.c_str(), d.c_str()) == 0;
}
inline BOOL MoveFile(const wchar_t* src, const wchar_t* dst) {
    char s[1024], d[1024]; wcstombs(s, src, sizeof(s)); wcstombs(d, dst, sizeof(d));
    for (char *p = s; *p; ++p) if (*p == '\\') *p = '/';
    for (char *p = d; *p; ++p) if (*p == '\\') *p = '/';
    return MoveFile(s, d);
}
#endif // _LCEMP_WIN32_FS_STUBS
#ifndef boolean
typedef bool boolean;
#endif
#ifndef _LCEMP_SLEEP_COMPAT
#define _LCEMP_SLEEP_COMPAT
inline void Sleep(DWORD ms) { usleep(ms * 1000); }
#endif
#ifndef _LCEMP_TLS_STUBS
#define _LCEMP_TLS_STUBS
#include <pthread.h>
inline DWORD TlsAlloc() {
    pthread_key_t key;
    pthread_key_create(&key, NULL);
    return (DWORD)key;
}
inline BOOL TlsSetValue(DWORD idx, LPVOID val) {
    return pthread_setspecific((pthread_key_t)idx, val) == 0;
}
inline LPVOID TlsGetValue(DWORD idx) {
    return pthread_getspecific((pthread_key_t)idx);
}
#endif

#define HRESULT_SUCCEEDED(hr) (((HRESULT)(hr)) >= 0)

#endif // _WINDOWS64



#ifdef _DURANGO
#include <xdk.h>
#include <wrl.h>
#include <d3d11_x.h>
#include <DirectXMath.h>
#include <ppltasks.h>
#include <collection.h>
using namespace DirectX; 
#include <pix.h>
#include "DurangoStubs.h"
#define HRESULT_SUCCEEDED(hr) (((HRESULT)(hr)) >= 0)
#endif



#ifdef _XBOX
#include <xtl.h>
#include <xboxmath.h>
#include <xonline.h>
#include <xuiapp.h>
#include <xact3.h>
#include <xact3d3.h>
typedef XINVITE_INFO INVITE_INFO;
typedef XUID PlayerUID;
typedef XNKID SessionID;
typedef XUID GameSessionUID;
#define HRESULT_SUCCEEDED(hr) (((HRESULT)(hr)) >= 0)

#include "extraX64.h"

#else

#include "extraX64.h"

#endif

#ifdef __PS3__
#include <cell/rtc.h>
#include <cell/l10n.h>
#include <cell/pad.h>
#include <cell/cell_fs.h>
#include <sys/process.h>
#include <sys/ppu_thread.h>
#include <cell/sysmodule.h>
#include <sysutil/sysutil_common.h>
#include <sysutil/sysutil_savedata.h>
#include <sysutil/sysutil_sysparam.h>

#endif

#include <stdlib.h>

#include <memory>

#include <list>
#include <map>
#include <set>
#include <deque>
#include <algorithm>
#include <string>
#include <sstream>
#include <iostream>
#include <exception>

#include <assert.h>

#ifdef _XBOX
#include <xonline.h>
#include <xparty.h>
#endif

#include "../Minecraft.World/Definitions.h"
#include "../Minecraft.World/class.h"
#include "../Minecraft.World/ArrayWithLength.h"
#include "../Minecraft.World/SharedConstants.h"
#include "../Minecraft.World/Random.h"
#include "../Minecraft.World/compression.h"
#include "../Minecraft.World/PerformanceTimer.h"

#ifdef _XBOX
	#include "xbox/4JLibs/inc/4J_Input.h"
	#include "xbox/4JLibs/inc/4J_Profile.h"
	#include "xbox/4JLibs/inc/4J_Render.h"
	#include "xbox/4JLibs/inc/4J_XTMS.h"
	#include "xbox/4JLibs/inc/4J_Storage.h"
#elif defined (__PS3__)

	#include "PS3/4JLibs/inc/4J_Input.h"
	#include "PS3/4JLibs/inc/4J_Profile.h"
	#include "PS3/4JLibs/inc/4J_Render.h"
	#include "PS3/4JLibs/inc/4J_Storage.h"
#elif defined _DURANGO
	#include "Durango/4JLibs/inc/4J_Input.h"
	#include "Durango/4JLibs/inc/4J_Profile.h"
	#include "Durango/4JLibs/inc/4J_Render.h"
	#include "Durango/4JLibs/inc/4J_Storage.h"
#elif defined _WINDOWS64
	#include "Windows64/4JLibs/inc/4J_Input.h"	
	#include "Windows64/4JLibs/inc/4J_Profile.h"
	#include "Windows64/4JLibs/inc/4J_Render.h"
	#include "Windows64/4JLibs/inc/4J_Storage.h"
#elif defined __PSVITA__
	#include "PSVita/4JLibs/inc/4J_Input.h"	
	#include "PSVita/4JLibs/inc/4J_Profile.h"
	#include "PSVita/4JLibs/inc/4J_Render.h"
	#include "PSVita/4JLibs/inc/4J_Storage.h"
#else
	#include "Orbis/4JLibs/inc/4J_Input.h"	
	#include "Orbis/4JLibs/inc/4J_Profile.h"
	#include "Orbis/4JLibs/inc/4J_Render.h"
	#include "Orbis/4JLibs/inc/4J_Storage.h"
#endif

#include "Textures.h"
#include "Font.h"
#include "ClientConstants.h"
#include "Gui.h"
#include "Screen.h"
#include "ScreenSizeCalculator.h"
#include "Minecraft.h"
#include "MemoryTracker.h"
#include "stubs.h"
#include "BufferedImage.h"

#include "Common/Network/GameNetworkManager.h"

#ifdef _XBOX
#include "Common/XUI/XUI_Helper.h"
#include "Common/XUI/XUI_Scene_Base.h"
#endif

#include "Common/UI/UIEnums.h"
#include "Common/UI/UIStructs.h"
#include "Common/App_defines.h"
#include "Common/App_enums.h"
#include "Common/Tutorial/TutorialEnum.h"
#include "Common/App_structs.h"

#include "Common/Consoles_App.h"
#include "Common/Minecraft_Macros.h"
#include "Common/BuildVer.h"

#ifdef _XBOX
	#include "Xbox/Xbox_App.h"
	#include "Xbox/Sentient/MinecraftTelemetry.h"
	#include "Xbox/Sentient/DynamicConfigurations.h"
	#include "XboxMedia/strings.h"
	#include "Xbox/Sentient/SentientTelemetryCommon.h"
	#include "Xbox/Sentient/Include/SenClientStats.h"
	#include "Xbox/GameConfig/Minecraft.spa.h"
	#include "XboxMedia/4J_strings.h"
	#include "Xbox/XML/ATGXmlParser.h"
	#include "Xbox/Leaderboards/XboxLeaderboardManager.h"
	#include "Xbox/Social/SocialManager.h"
	#include "Xbox/Audio/SoundEngine.h"
	#include "Xbox/Xbox_UIController.h"

#elif defined (__PS3__)
	#include "extraX64client.h"
	#include "PS3/Sentient/MinecraftTelemetry.h"
	#include "PS3/Sentient/DynamicConfigurations.h"
	#include "PS3/Sentient/SentientTelemetryCommon.h"
	#include "PS3Media/strings.h"
	#include "PS3/PS3_App.h"
	#include "PS3/GameConfig/Minecraft.spa.h"
	#include "PS3Media/4J_strings.h"
	#include "PS3/XML/ATGXmlParser.h"
	#include "PS3/Social/SocialManager.h"
	#include "Common/Audio/SoundEngine.h"
	#include "PS3/Iggy/include/iggy.h"
	#include "PS3/Iggy/gdraw/gdraw_ps3gcm.h"
	#include "PS3/PS3_UIController.h"
#elif defined _DURANGO
	#include "Durango/Sentient/MinecraftTelemetry.h"
	#include "DurangoMedia/strings.h"
	#include "Durango/Durango_App.h"
	#include "Durango/Sentient/DynamicConfigurations.h"	
	#include "Durango/Sentient/TelemetryEnum.h"
	#include "Durango/Sentient/SentientTelemetryCommon.h"
	#include "Durango/PresenceIds.h"
	#include "DurangoMedia/4J_strings.h"
	#include "Durango/XML/ATGXmlParser.h"
	#include "Durango/Social/SocialManager.h"
	#include "Common/Audio/SoundEngine.h"
	#include "Durango/Iggy/include/iggy.h"
	#include "Durango/Iggy/gdraw/gdraw_d3d11.h"
	#include "Durango/Durango_UIController.h"
#elif defined _WINDOWS64
	#include "Windows64/Sentient/MinecraftTelemetry.h"
	#include "Windows64Media/strings.h"
	#include "Windows64/Windows64_App.h"
	#include "Windows64/Sentient/DynamicConfigurations.h"
	#include "Windows64/Sentient/SentientTelemetryCommon.h"
	#include "Windows64/GameConfig/Minecraft.spa.h"
	#include "Windows64/XML/ATGXmlParser.h"	
	#include "Windows64/Social/SocialManager.h"
	#include "Common/Audio/SoundEngine.h"
#ifdef LCEMP_USE_IGGY
	#include "Windows64/Iggy/include/iggy.h"
	#include "Windows64/Iggy/gdraw/gdraw_d3d11.h"
#else
	#include "Common/UI/IggyCompat.h"
#endif
	#include "Windows64/Windows64_UIController.h"
#elif defined __PSVITA__
	#include "PSVita/PSVita_App.h"
	#include "PSVitaMedia/strings.h"
	#include "PSVita/Sentient/SentientManager.h"
	#include "PSVita/Sentient/MinecraftTelemetry.h"
	#include "PSVita/Sentient/DynamicConfigurations.h"
	#include "PSVita/GameConfig/Minecraft.spa.h"
	#include "PSVita/XML/ATGXmlParser.h"
	#include "PSVita/Social/SocialManager.h"
	#include "Common/Audio/SoundEngine.h"
	#include "PSVita/Iggy/include/iggy.h"
	#include "PSVita/Iggy/gdraw/gdraw_psp2.h"
	#include "PSVita/PSVita_UIController.h"
#else
	#include "Orbis/Sentient/MinecraftTelemetry.h"
	#include "OrbisMedia/strings.h"
	#include "Orbis/Orbis_App.h"
	#include "Orbis/Sentient/SentientTelemetryCommon.h"
	#include "Orbis/Sentient/DynamicConfigurations.h"
	#include "Orbis/GameConfig/Minecraft.spa.h"
	#include "OrbisMedia/4J_strings.h"
	#include "Orbis/XML/ATGXmlParser.h"	
	#include "Windows64/Social/SocialManager.h"
	#include "Common/Audio/SoundEngine.h"
	#include "Orbis/Iggy/include/iggy.h"
	#include "Orbis/Iggy/gdraw/gdraw_orbis.h"
	#include "Orbis/Orbis_UIController.h"
#endif

#ifdef _XBOX
#include "Common/XUI/XUI_CustomMessages.h"
#include "Common/XUI/XUI_Scene_Inventory_Creative.h"
#include "Common/XUI/XUI_FullscreenProgress.h"
#include "Common/XUI/XUI_ConnectingProgress.h"
#include "Common/XUI/XUI_Scene_CraftingPanel.h"
#include "Common/XUI/XUI_TutorialPopup.h"
#include "Common/XUI/XUI_PauseMenu.h"
#endif
#include "Common/ConsoleGameMode.h"
#include "Common/Console_Debug_enum.h"
#include "Common/Console_Awards_enum.h"
#include "Common/Tutorial/TutorialMode.h"
#include "Common/Tutorial/Tutorial.h"
#include "Common/Tutorial/FullTutorialMode.h"
#include "Common/Trial/TrialMode.h"
#include "Common/GameRules/ConsoleGameRules.h"
#include "Common/GameRules/ConsoleSchematicFile.h"
#include "Common/Colours/ColourTable.h"
#include "Common/DLC/DLCSkinFile.h"
#include "Common/DLC/DLCManager.h"
#include "Common/DLC/DLCPack.h"
#include "Common/Telemetry/TelemetryManager.h"

#ifdef _XBOX
//#include "Xbox/Xbox_App.h"
#elif !defined(__PS3__)
#include "extraX64client.h"
#endif



#ifdef _FINAL_BUILD
#define printf BREAKTHECOMPILE
#define wprintf BREAKTHECOMPILE
#undef OutputDebugString
#define OutputDebugString BREAKTHECOMPILE
#define OutputDebugStringA BREAKTHECOMPILE
#define OutputDebugStringW BREAKTHECOMPILE
#endif

void MemSect(int sect);
