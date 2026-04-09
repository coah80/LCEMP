// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//
#pragma once

#ifdef __PS3__
#else
#define AUTO_VAR(_var, _val) auto _var = _val
#endif

#if defined(_WIN32)
#if ( defined _XBOX || defined _WINDOWS64  || defined _DURANGO )
typedef unsigned __int64 __uint64;
#endif
#else
#include <cstdint>
typedef uint64_t __uint64;
#ifndef __int64
typedef int64_t __int64;
#endif
#ifndef __int32
typedef int32_t __int32;
#endif
#ifndef __int16
typedef int16_t __int16;
#endif
#endif

#ifdef _WINDOWS64
#ifdef _WIN32
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <malloc.h>
#include <tchar.h>
#include <d3d11.h>
#else
#include <cstdlib>
#include <cstring>
#include <cstdio>
#include <cfloat>
#include <pthread.h>
#include <mutex>
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
#ifndef SHORT
typedef short SHORT;
#endif
#ifndef UCHAR
typedef unsigned char UCHAR;
#endif
#if !defined(LARGE_INTEGER) && !defined(_LARGE_INTEGER_DEFINED)
#define _LARGE_INTEGER_DEFINED
typedef union _LARGE_INTEGER {
    struct { uint32_t LowPart; int32_t HighPart; };
    int64_t QuadPart;
} LARGE_INTEGER;
#endif
#if !defined(FILETIME) && !defined(_FILETIME_DEFINED)
#define _FILETIME_DEFINED
typedef struct _FILETIME { uint32_t dwLowDateTime; uint32_t dwHighDateTime; } FILETIME;
#endif
#ifndef CRITICAL_SECTION
typedef std::mutex CRITICAL_SECTION;
#endif
#ifndef MAX_PATH
#define MAX_PATH 260
#endif
#ifndef ERROR_SUCCESS
#define ERROR_SUCCESS 0L
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
#ifndef PVOID
typedef void* PVOID;
#endif
#ifndef WINAPI
#define WINAPI
#endif
#ifndef WAIT_OBJECT_0
#define WAIT_OBJECT_0 0
#endif
#ifndef WAIT_TIMEOUT
#define WAIT_TIMEOUT 258
#endif
#ifndef INFINITE
#define INFINITE 0xFFFFFFFF
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
inline BOOL TlsFree(DWORD idx) {
    return pthread_key_delete((pthread_key_t)idx) == 0;
}
#endif
#ifndef __debugbreak
#ifdef __clang__
#define __debugbreak() __builtin_debugtrap()
#elif defined(__GNUC__)
#define __debugbreak() __builtin_trap()
#else
#define __debugbreak() ((void)0)
#endif
#endif
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
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#ifndef _LCEMP_WIN32_FILE_STUBS
#define _LCEMP_WIN32_FILE_STUBS
inline HANDLE CreateFile(const char* path, DWORD access, DWORD share, void* sec, DWORD disp, DWORD flags, HANDLE tmpl) {
    (void)share; (void)sec; (void)flags; (void)tmpl;
    int oflags = 0;
    if (access == GENERIC_READ) oflags = O_RDONLY;
    else if (access == GENERIC_WRITE) oflags = O_WRONLY | O_CREAT | O_TRUNC;
    else oflags = O_RDWR;
    int fd = open(path, oflags, 0644);
    return (fd < 0) ? INVALID_HANDLE_VALUE : (HANDLE)(long long)fd;
}
inline HANDLE CreateFile(const wchar_t* path, DWORD access, DWORD share, void* sec, DWORD disp, DWORD flags, HANDLE tmpl) {
    char buf[1024];
    wcstombs(buf, path, sizeof(buf));
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
#ifndef PLONG
typedef LONG* PLONG;
#endif
#ifndef LPCVOID
typedef const void* LPCVOID;
#endif
#ifndef LPDWORD
typedef DWORD* LPDWORD;
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
#ifndef _LCEMP_SYSTEMTIME_DEFINED
#define _LCEMP_SYSTEMTIME_DEFINED
typedef struct _SYSTEMTIME {
    WORD wYear; WORD wMonth; WORD wDayOfWeek; WORD wDay;
    WORD wHour; WORD wMinute; WORD wSecond; WORD wMilliseconds;
} SYSTEMTIME;
inline void GetSystemTime(SYSTEMTIME* st) { memset(st, 0, sizeof(*st)); }
inline void GetLocalTime(SYSTEMTIME* st) { memset(st, 0, sizeof(*st)); }
inline BOOL SystemTimeToFileTime(const SYSTEMTIME*, FILETIME* ft) {
    auto now = std::chrono::system_clock::now().time_since_epoch();
    auto ns100 = std::chrono::duration_cast<std::chrono::duration<int64_t, std::ratio<1, 10000000>>>(now).count();
    ns100 += 116444736000000000LL;
    ft->dwLowDateTime = (uint32_t)(ns100 & 0xFFFFFFFF);
    ft->dwHighDateTime = (uint32_t)((ns100 >> 32) & 0xFFFFFFFF);
    return TRUE;
}
#endif
#endif // _LCEMP_WIN32_VMEM_STUBS
#ifndef _LCEMP_WIN32_FILEPTR_STUBS
#define _LCEMP_WIN32_FILEPTR_STUBS
inline DWORD SetFilePointer(HANDLE h, LONG dist, PLONG distHigh, DWORD method) {
    int whence = SEEK_SET;
    if (method == FILE_CURRENT) whence = SEEK_CUR;
    else if (method == FILE_END) whence = SEEK_END;
    (void)distHigh;
    off_t r = lseek((int)(long long)h, dist, whence);
    return (DWORD)r;
}
#endif // _LCEMP_WIN32_FILEPTR_STUBS
#ifndef _LCEMP_SLEEP_COMPAT
#define _LCEMP_SLEEP_COMPAT
inline void Sleep(DWORD ms) { usleep(ms * 1000); }
#endif
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

#ifndef STILL_ACTIVE
#define STILL_ACTIVE 259
#endif
#ifndef CREATE_SUSPENDED
#define CREATE_SUSPENDED 0x00000004
#endif
#ifndef THREAD_PRIORITY_LOWEST
#define THREAD_PRIORITY_LOWEST -2
#define THREAD_PRIORITY_BELOW_NORMAL -1
#define THREAD_PRIORITY_NORMAL 0
#define THREAD_PRIORITY_ABOVE_NORMAL 1
#define THREAD_PRIORITY_HIGHEST 2
#endif
#ifndef WAIT_ABANDONED
#define WAIT_ABANDONED 0x00000080
#endif
#ifndef WAIT_FAILED
#define WAIT_FAILED 0xFFFFFFFF
#endif

inline DWORD GetCurrentThreadId() {
    return (DWORD)(uintptr_t)pthread_self();
}
inline HANDLE GetCurrentThread() {
    return (HANDLE)pthread_self();
}
typedef DWORD (WINAPI *LPTHREAD_START_ROUTINE)(LPVOID);
inline HANDLE CreateThread(void* sec, size_t stack, LPTHREAD_START_ROUTINE start, LPVOID param, DWORD flags, DWORD* tid) {
    (void)sec; (void)flags;
    pthread_t t;
    pthread_attr_t attr;
    pthread_attr_init(&attr);
    if (stack > 0) pthread_attr_setstacksize(&attr, stack);
    struct Ctx { LPTHREAD_START_ROUTINE fn; LPVOID p; };
    auto* ctx = new Ctx{start, param};
    pthread_create(&t, &attr, [](void* a) -> void* {
        auto* c = (Ctx*)a;
        c->fn(c->p);
        delete c;
        return nullptr;
    }, ctx);
    pthread_attr_destroy(&attr);
    if (tid) *tid = (DWORD)(uintptr_t)t;
    return (HANDLE)t;
}
inline void ResumeThread(HANDLE) {}
inline void SetThreadPriority(HANDLE, int) {}
inline void SetThreadAffinityMask(HANDLE, DWORD) {}
inline void XSetThreadProcessor(HANDLE, int) {}
inline DWORD WaitForSingleObject(HANDLE h, DWORD ms) {
    if (ms == INFINITE) { pthread_join((pthread_t)h, nullptr); return WAIT_OBJECT_0; }
    for (DWORD i = 0; i < ms; i++) usleep(1000);
    return WAIT_TIMEOUT;
}
inline DWORD WaitForMultipleObjects(int cnt, HANDLE* h, bool all, DWORD ms) {
    (void)h; (void)all;
    if (ms != INFINITE) usleep(ms * 1000);
    return WAIT_OBJECT_0;
}
inline BOOL GetExitCodeThread(HANDLE, DWORD* c) { if (c) *c = 0; return TRUE; }
inline void SetThreadName(DWORD, LPCSTR) {}

#include <condition_variable>
struct _LcempEvent {
    std::mutex mtx;
    std::condition_variable cv;
    bool signaled;
    bool manual_reset;
};
inline HANDLE CreateEvent(void*, BOOL manual, BOOL initial, void*) {
    auto* ev = new _LcempEvent();
    ev->signaled = (initial != FALSE);
    ev->manual_reset = (manual != FALSE);
    return (HANDLE)ev;
}
inline BOOL SetEvent(HANDLE h) {
    auto* ev = (_LcempEvent*)h;
    { std::lock_guard<std::mutex> lk(ev->mtx); ev->signaled = true; }
    if (ev->manual_reset) ev->cv.notify_all(); else ev->cv.notify_one();
    return TRUE;
}
inline BOOL ResetEvent(HANDLE h) {
    auto* ev = (_LcempEvent*)h;
    std::lock_guard<std::mutex> lk(ev->mtx);
    ev->signaled = false;
    return TRUE;
}

#include <dirent.h>
#include <sys/types.h>

#ifndef FILE_ATTRIBUTE_DIRECTORY
#define FILE_ATTRIBUTE_DIRECTORY 0x10
#endif
#ifndef FILE_ATTRIBUTE_NORMAL
#undef FILE_ATTRIBUTE_NORMAL
#endif
#ifndef FILE_ATTRIBUTE_NORMAL
#define FILE_ATTRIBUTE_NORMAL 0x80
#endif
#ifndef INVALID_FILE_ATTRIBUTES
#define INVALID_FILE_ATTRIBUTES ((DWORD)-1)
#endif
#ifndef GetFileExInfoStandard
#define GetFileExInfoStandard 0
#endif

typedef struct _WIN32_FIND_DATAA {
    DWORD dwFileAttributes;
    FILETIME ftCreationTime;
    FILETIME ftLastAccessTime;
    FILETIME ftLastWriteTime;
    DWORD nFileSizeHigh;
    DWORD nFileSizeLow;
    char cFileName[260];
} WIN32_FIND_DATAA;
typedef WIN32_FIND_DATAA WIN32_FIND_DATA;

typedef struct _WIN32_FILE_ATTRIBUTE_DATA {
    DWORD dwFileAttributes;
    FILETIME ftCreationTime;
    FILETIME ftLastAccessTime;
    FILETIME ftLastWriteTime;
    DWORD nFileSizeHigh;
    DWORD nFileSizeLow;
} WIN32_FILE_ATTRIBUTE_DATA;

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
inline BOOL GetFileAttributesEx(const char* path, int level, void* info) {
    (void)level;
    std::string fixed(path);
    for (auto &c : fixed) if (c == '\\') c = '/';
    struct stat st;
    if (stat(fixed.c_str(), &st) != 0) return FALSE;
    auto* data = (WIN32_FILE_ATTRIBUTE_DATA*)info;
    memset(data, 0, sizeof(*data));
    if (S_ISDIR(st.st_mode)) data->dwFileAttributes = FILE_ATTRIBUTE_DIRECTORY;
    data->nFileSizeLow = (DWORD)(st.st_size & 0xFFFFFFFF);
    data->nFileSizeHigh = (DWORD)((st.st_size >> 32) & 0xFFFFFFFF);
    data->ftLastWriteTime.dwLowDateTime = (DWORD)(st.st_mtime & 0xFFFFFFFF);
    data->ftLastWriteTime.dwHighDateTime = (DWORD)((st.st_mtime >> 32) & 0xFFFFFFFF);
    return TRUE;
}
inline BOOL GetFileAttributesEx(const wchar_t* path, int level, void* info) {
    char buf[1024];
    wcstombs(buf, path, sizeof(buf));
    for (char *p = buf; *p; ++p) if (*p == '\\') *p = '/';
    return GetFileAttributesEx(buf, level, info);
}

inline BOOL DeleteFile(const char* path) {
    std::string fixed(path);
    for (auto &c : fixed) if (c == '\\') c = '/';
    return (remove(fixed.c_str()) == 0) ? TRUE : FALSE;
}
inline BOOL DeleteFile(const wchar_t* path) {
    char buf[1024]; wcstombs(buf, path, sizeof(buf));
    for (char *p = buf; *p; ++p) if (*p == '\\') *p = '/';
    return DeleteFile(buf);
}
inline BOOL CreateDirectory(const char* path, void*) {
    std::string fixed(path);
    for (auto &c : fixed) if (c == '\\') c = '/';
    return (::mkdir(fixed.c_str(), 0755) == 0) ? TRUE : FALSE;
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
    return (rename(s.c_str(), d.c_str()) == 0) ? TRUE : FALSE;
}
inline BOOL MoveFile(const wchar_t* src, const wchar_t* dst) {
    char sb[1024], db[1024]; wcstombs(sb, src, sizeof(sb)); wcstombs(db, dst, sizeof(db));
    for (char *p = sb; *p; ++p) if (*p == '\\') *p = '/';
    for (char *p = db; *p; ++p) if (*p == '\\') *p = '/';
    return MoveFile(sb, db);
}
#endif // _LCEMP_WIN32_FS_STUBS

struct _LcempFindCtx {
    DIR* dir;
    char pattern[1024];
    char basedir[1024];
};
inline HANDLE FindFirstFile(const char* path, WIN32_FIND_DATA* wfd) {
    memset(wfd, 0, sizeof(*wfd));
    char dir[1024];
    strncpy(dir, path, sizeof(dir));
    for (char *p = dir; *p; ++p) if (*p == '\\') *p = '/';
    char* star = strrchr(dir, '*');
    if (star) { if (star > dir && *(star-1) == '/') *(star-1) = 0; else *star = 0; }
    DIR* d = opendir(dir);
    if (!d) return INVALID_HANDLE_VALUE;
    auto* ctx = new _LcempFindCtx();
    ctx->dir = d;
    strncpy(ctx->basedir, dir, sizeof(ctx->basedir));
    struct dirent* ent = readdir(d);
    while (ent && (strcmp(ent->d_name, ".") == 0 || strcmp(ent->d_name, "..") == 0)) ent = readdir(d);
    if (!ent) { closedir(d); delete ctx; return INVALID_HANDLE_VALUE; }
    strncpy(wfd->cFileName, ent->d_name, sizeof(wfd->cFileName));
    if (ent->d_type == DT_DIR) wfd->dwFileAttributes = FILE_ATTRIBUTE_DIRECTORY;
    return (HANDLE)ctx;
}
inline HANDLE FindFirstFile(const wchar_t* path, WIN32_FIND_DATA* wfd) {
    char buf[1024]; wcstombs(buf, path, sizeof(buf));
    for (char *p = buf; *p; ++p) if (*p == '\\') *p = '/';
    return FindFirstFile(buf, wfd);
}
inline BOOL FindNextFile(HANDLE h, WIN32_FIND_DATA* wfd) {
    auto* ctx = (_LcempFindCtx*)h;
    struct dirent* ent = readdir(ctx->dir);
    while (ent && (strcmp(ent->d_name, ".") == 0 || strcmp(ent->d_name, "..") == 0)) ent = readdir(ctx->dir);
    if (!ent) return FALSE;
    memset(wfd, 0, sizeof(*wfd));
    strncpy(wfd->cFileName, ent->d_name, sizeof(wfd->cFileName));
    if (ent->d_type == DT_DIR) wfd->dwFileAttributes = FILE_ATTRIBUTE_DIRECTORY;
    return TRUE;
}
inline BOOL FindClose(HANDLE h) {
    auto* ctx = (_LcempFindCtx*)h;
    closedir(ctx->dir);
    delete ctx;
    return TRUE;
}

#endif // _WIN32
#endif // _WINDOWS64

#ifndef boolean
typedef bool boolean;
#endif

#ifndef _WIN32
#include <atomic>
inline long long InterlockedCompareExchangeRelease64(volatile long long* dest, long long exch, long long comp) {
    long long expected = comp;
    __atomic_compare_exchange_n(dest, &expected, exch, false, __ATOMIC_RELEASE, __ATOMIC_RELAXED);
    return expected;
}
inline long InterlockedIncrement(volatile long* val) {
    return __atomic_add_fetch(val, 1, __ATOMIC_SEQ_CST);
}
inline long InterlockedDecrement(volatile long* val) {
    return __atomic_sub_fetch(val, 1, __ATOMIC_SEQ_CST);
}
inline long InterlockedExchange(volatile long* target, long val) {
    return __atomic_exchange_n(target, val, __ATOMIC_SEQ_CST);
}
inline long InterlockedCompareExchange(volatile long* dest, long exch, long comp) {
    long expected = comp;
    __atomic_compare_exchange_n(dest, &expected, exch, false, __ATOMIC_SEQ_CST, __ATOMIC_SEQ_CST);
    return expected;
}
#endif

#ifdef _DURANGO
#include <xdk.h>
#include <wrl.h>
#include <d3d11_x.h>
#include <DirectXMath.h>
using namespace DirectX;
#include <pix.h>
#include "../Minecraft.Client/Durango/DurangoExtras/DurangoStubs.h"
#endif

#if (defined __PS3__ || defined _XBOX )
#include <stdlib.h>
#endif

#ifdef __ORBIS__
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <scebase.h>
#include <kernel.h>
#include <fios2.h>
#include <message_dialog.h>
#endif

#ifdef _XBOX
#include <xtl.h>
#include <xboxmath.h>
#include <xuiapp.h>
#include <xact3.h>
typedef XINVITE_INFO INVITE_INFO;
typedef XUID PlayerUID;
typedef XNKID SessionID;
typedef XUID GameSessionUID;
#endif

#ifdef __PS3__
#include <cell/l10n.h>
#include <cell/pad.h>
#include <cell/cell_fs.h>
#include <sys/process.h>
#include <sys/ppu_thread.h>
#include <cell/sysmodule.h>
#include <sysutil/sysutil_common.h>
#include <sysutil/sysutil_savedata.h>
#include <sysutil/sysutil_sysparam.h>


#include "Ps3Types.h"
#include "Ps3Stubs.h"
#include "PS3Maths.h"

#elif defined __ORBIS__
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include "OrbisTypes.h"
#include "OrbisStubs.h"
#include "OrbisMaths.h"
#elif defined __PSVITA__
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <touch.h>
#include "PSVitaTypes.h"
#include "PSVitaStubs.h"
#include "PSVitaMaths.h"
#else
#include <unordered_map>
#include <unordered_set>
#ifdef _WIN32
#include <sal.h>
#endif
#include <vector>
#endif //__PS3__

#include <memory>

#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <algorithm>
#include <math.h>
#include <limits>
#include <string>
#include <sstream>
#include <iostream>
#include <exception>

#ifndef __PS3__
#include <assert.h>
#endif

#include "extraX64.h"

#include "Definitions.h"
#include "Class.h"
#include "Exceptions.h"
#include "Mth.h"
#include "StringHelpers.h"
#include "ArrayWithLength.h"
#include "Random.h"
#include "TilePos.h"
#include "ChunkPos.h"
#include "compression.h"
#include "PerformanceTimer.h"


#ifdef _FINAL_BUILD
#define printf BREAKTHECOMPILE
#define wprintf BREAKTHECOMPILE
#undef OutputDebugString
#define OutputDebugString BREAKTHECOMPILE
#define OutputDebugStringA BREAKTHECOMPILE
#define OutputDebugStringW BREAKTHECOMPILE
#endif


void MemSect(int sect);

#ifdef _XBOX
#include "../Minecraft.Client/xbox/4JLibs/inc/4J_Profile.h"
#include "../Minecraft.Client/xbox/4JLibs/inc/4J_Render.h"
#include "../Minecraft.Client/xbox/4JLibs/inc/4J_XTMS.h"
#include "../Minecraft.Client/xbox/4JLibs/inc/4J_Storage.h"
#include "../Minecraft.Client/xbox/4JLibs/inc/4J_Input.h"
#elif defined (__PS3__)
#include "../Minecraft.Client/PS3/4JLibs/inc/4J_Profile.h"
#include "../Minecraft.Client/PS3/4JLibs/inc/4J_Render.h"
#include "../Minecraft.Client/PS3/4JLibs/inc/4J_Storage.h"
#include "../Minecraft.Client/PS3/4JLibs/inc/4J_Input.h"
#elif defined _DURANGO
#include "../Minecraft.Client/Durango/4JLibs/inc/4J_Profile.h"
#include "../Minecraft.Client/Durango/4JLibs/inc/4J_Render.h"
#include "../Minecraft.Client/Durango/4JLibs/inc/4J_Storage.h"
#include "../Minecraft.Client/Durango/4JLibs/inc/4J_Input.h"
#elif defined _WINDOWS64
#include "../Minecraft.Client/Windows64/4JLibs/inc/4J_Profile.h"
#include "../Minecraft.Client/Windows64/4JLibs/inc/4J_Render.h"
#include "../Minecraft.Client/Windows64/4JLibs/inc/4J_Storage.h"
#include "../Minecraft.Client/Windows64/4JLibs/inc/4J_Input.h"
#elif defined __PSVITA__
#include "../Minecraft.Client/PSVita/4JLibs/inc/4J_Profile.h"
#include "../Minecraft.Client/PSVita/4JLibs/inc/4J_Render.h"
#include "../Minecraft.Client/PSVita/4JLibs/inc/4J_Storage.h"
#include "../Minecraft.Client/PSVita/4JLibs/inc/4J_Input.h"
#else
#include "../Minecraft.Client/Orbis/4JLibs/inc/4J_Profile.h"
#include "../Minecraft.Client/Orbis/4JLibs/inc/4J_Render.h"
#include "../Minecraft.Client/Orbis/4JLibs/inc/4J_Storage.h"
#include "../Minecraft.Client/Orbis/4JLibs/inc/4J_Input.h"
#endif

#include "../Minecraft.Client/Common/Network/GameNetworkManager.h"

#include "../Minecraft.Client/Common/UI/UIEnums.h"
#include "../Minecraft.Client/Common/App_defines.h"
#include "../Minecraft.Client/Common/App_enums.h"
#include "../Minecraft.Client/Common/Tutorial/TutorialEnum.h"
#include "../Minecraft.Client/Common/App_structs.h"

#ifdef _XBOX
#include "../Minecraft.Client/Common/XUI/XUI_Helper.h"
#include "../Minecraft.Client/Common/XUI/XUI_Scene_Base.h"
#endif
#include "../Minecraft.Client/Common/Consoles_App.h"
#include "../Minecraft.Client/Common/Minecraft_Macros.h"
#include "../Minecraft.Client/Common/Colours/ColourTable.h"

#include "../Minecraft.Client/Common/BuildVer.h"

#ifdef _XBOX
#include "../Minecraft.Client/Xbox/Xbox_App.h"
#include "../Minecraft.Client/XboxMedia/strings.h"
#include "../Minecraft.Client/Xbox/Sentient/SentientTelemetryCommon.h"
#include "../Minecraft.Client/Xbox/Sentient/MinecraftTelemetry.h"

#elif defined (__PS3__)
#include "../Minecraft.Client/PS3/PS3_App.h"
#include "../Minecraft.Client/PS3Media/strings.h"
#include "../Minecraft.Client/PS3/Sentient/SentientTelemetryCommon.h"
#include "../Minecraft.Client/PS3/Sentient/MinecraftTelemetry.h"

#elif defined _DURANGO
#include "../Minecraft.Client/Durango/Durango_App.h"
#include "../Minecraft.Client/DurangoMedia/strings.h"
#include "../Minecraft.Client/Durango/Sentient/SentientTelemetryCommon.h"
#include "../Minecraft.Client/Durango/Sentient/MinecraftTelemetry.h"
#include "../Minecraft.Client/Durango/Sentient/TelemetryEnum.h"

#elif defined _WINDOWS64
#include "../Minecraft.Client/Windows64/Windows64_App.h"
#include "../Minecraft.Client/Windows64Media/strings.h"
#include "../Minecraft.Client/Windows64/Sentient/SentientTelemetryCommon.h"
#include "../Minecraft.Client/Windows64/Sentient/MinecraftTelemetry.h"

#elif defined __PSVITA__
#include "../Minecraft.Client/PSVita/PSVita_App.h"
#include "../Minecraft.Client/PSVitaMedia/strings.h"
#include "../Minecraft.Client/PSVita/Sentient/SentientManager.h"
#include "../Minecraft.Client/PSVita/Sentient/MinecraftTelemetry.h"
#else
#include "../Minecraft.Client/Orbis/Orbis_App.h"
#include "../Minecraft.Client/OrbisMedia/strings.h"
#include "../Minecraft.Client/Orbis/Sentient/SentientTelemetryCommon.h"
#include "../Minecraft.Client/Orbis/Sentient/MinecraftTelemetry.h"
#endif

#include "../Minecraft.Client/Common/DLC/DLCSkinFile.h"
#include "../Minecraft.Client/Common/Console_Awards_enum.h"
#include "../Minecraft.Client/Common/Potion_Macros.h"
#include "../Minecraft.Client/Common/Console_Debug_enum.h"
#include "../Minecraft.Client/Common/GameRules/ConsoleGameRulesConstants.h"
#include "../Minecraft.Client/Common/GameRules/ConsoleGameRules.h"
#include "../Minecraft.Client/Common/Telemetry/TelemetryManager.h"
