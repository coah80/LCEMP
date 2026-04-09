#pragma once
// IggyCompat.h — Compatibility layer that maps Iggy types/functions to UIBackend
// When LCEMP_USE_IGGY is defined, uses the real Iggy library.
// Otherwise, uses the UIMovie/UIElement-based replacement.

#ifdef LCEMP_USE_IGGY
    // Use real Iggy headers (proprietary)
    #include "iggy.h"
#else

#ifndef F64
typedef double F64;
#endif

#include "UIBackend.h"
#include <string>
#include <cstring>
#include <vector>

// ===== Type mappings =====
using Iggy = UIMovie;
using IggyValuePath = UIElement*;
using IggyName = UIFastName;
using IggyUTF16 = wchar_t;
using IggyResult = int;
using rrbool = bool;
using IggyKeycode = int;
#ifndef S32
typedef int S32;
#endif
#ifndef U32
typedef unsigned int U32;
#endif
#ifndef F32
typedef float F32;
#endif

#ifndef _LCEMP_D3D11_RECT_DEFINED
#define _LCEMP_D3D11_RECT_DEFINED
typedef struct D3D11_RECT { long left; long top; long right; long bottom; } D3D11_RECT;
#endif

typedef void* IggyLibrary;
typedef void* HIGGYEXP;
typedef void* HIGGYPERFMON;
typedef void* GDrawTexture;
#ifndef RADLINK
#define RADLINK
#endif
#ifndef IGGY_RESULT_SUCCESS
#define IGGY_RESULT_SUCCESS 0
#endif
#define IGGY_FONTFLAG_none 0
#define IGGY_FONTFLAG_all 0xFFFFFFFF
#define IGGY_TTC_INDEX_none 0
#define IGGY_GLYPH_INVALID -1

struct IggyFontMetrics {
    float ascent;
    float descent;
    float leading;
    float average_glyph_width_for_tab_stops;
    float largest_glyph_bbox_y1;
};
struct IggyGlyphMetrics {
    float advance;
    float bearingX;
    float bearingY;
    float width;
    float height;
    float x0, y0, x1, y1;
};
struct IggyBitmapCharacter {
    int x; int y; int width; int height; float advance;
    unsigned char *pixels_one_per_byte;
    int width_in_pixels;
    int height_in_pixels;
    int stride_in_bytes;
    int oversample;
    int point_sample;
    float top_left_x;
    float top_left_y;
    float pixel_scale_correct;
    float pixel_scale_min;
    float pixel_scale_max;
    void *user_context_for_free;
};

typedef IggyFontMetrics* (RADLINK *IggyFontMetricsCallback)(void*, IggyFontMetrics*);
typedef int (RADLINK *IggyCodepointCallback)(void*, unsigned int);
typedef IggyGlyphMetrics* (RADLINK *IggyGlyphMetricsCallback)(void*, int, IggyGlyphMetrics*);
typedef rrbool (RADLINK *IggyBoolCallback)(void*, int);
typedef float (RADLINK *IggyKerningCallback)(void*, int, int);
typedef rrbool (RADLINK *IggyCanBitmapCallback)(void*, int, float);
typedef rrbool (RADLINK *IggyGetBitmapCallback)(void*, int, float, IggyBitmapCharacter*);
typedef void (RADLINK *IggyFreeBitmapCallback)(void*, int, float, IggyBitmapCharacter*);

struct IggyBitmapFontProvider {
    IggyFontMetricsCallback get_font_metrics;
    IggyCodepointCallback get_glyph_for_codepoint;
    IggyGlyphMetricsCallback get_glyph_metrics;
    IggyBoolCallback is_empty;
    IggyKerningCallback get_kerning;
    IggyCanBitmapCallback can_bitmap;
    IggyGetBitmapCallback get_bitmap;
    IggyFreeBitmapCallback free_bitmap;
    void *userdata;
    int num_glyphs;
};

inline void IggyFontRemoveUTF8(const char*, int, unsigned int) {}
inline void IggyFontInstallBitmapUTF8(IggyBitmapFontProvider*, const char*, int, unsigned int) {}
inline void IggyFontSetIndirectUTF8(const char*, int, unsigned int, const char*, int, unsigned int) {}
inline void IggyFontInstallTruetypeUTF8(void*, int, const char*, int, unsigned int) {}
inline void IggyFontInstallTruetypeFallbackCodepointUTF8(const char*, int, unsigned int, unsigned int) {}

// ===== Iggy global API stubs =====
#define IGGY_INVALID_LIBRARY ((IggyLibrary)0)
#define IGGY_RESULT_Warning_CannotSustainFrameRate 201
#define IGGY_FOCUS_NULL 0
typedef int IggyFocusHandle;

struct IggyFocusableObject {
    IggyFocusHandle object;
    float x0, y0, x1, y1;
};

struct IggyAllocator {
    void *user_callback_data;
    void* (*mem_alloc)(void*, unsigned long long);
    void (*mem_free)(void*, void*);
};

inline void IggyInit(void*) {}
template<typename T1, typename T2>
inline void IggySetWarningCallback(T1, T2) {}
template<typename T1, typename T2>
inline void IggySetTraceCallbackUTF8(T1, T2) {}
template<typename T1, typename T2>
inline void IggySetCustomDrawCallback(T1, T2) {}
template<typename T1, typename T2>
inline void IggySetAS3ExternalFunctionCallbackUTF16(T1, T2) {}
template<typename T1, typename T2, typename T3>
inline void IggySetTextureSubstitutionCallbacks(T1, T2, T3) {}
inline IggyLibrary IggyLibraryCreateFromMemoryUTF16(const IggyUTF16*, void*, int, void*) { return IGGY_INVALID_LIBRARY; }
inline void IggyLibraryDestroy(IggyLibrary) {}
inline void IggyPlayerGetFocusableObjects(Iggy*, IggyFocusHandle*, IggyFocusableObject*, int, S32*) {}
inline void IggyPlayerSetFocusRS(Iggy*, IggyFocusHandle, int) {}
inline void IggySetFontCachingCalculationBuffer(int, void*, int) {}
inline void gdraw_D3D11_setViewport_4J() {}

#ifndef HWND
typedef void* HWND;
#endif
#ifndef _WIN32
#ifndef RECT
typedef struct { long left; long top; long right; long bottom; } RECT;
#endif
inline void GetClientRect(HWND, RECT*) {}
#endif

// ===== Data types =====
enum IggyDataType {
    IGGY_DATATYPE_number,
    IGGY_DATATYPE_string_UTF8,
    IGGY_DATATYPE_string_UTF16,
    IGGY_DATATYPE_boolean,
    IGGY_DATATYPE_null,
    IGGY_DATATYPE_undefined,
};

typedef wchar_t IggyUTF16;

struct IggyStringUTF8 {
    char *string;
    int length;
};

struct IggyStringUTF16 {
    IggyUTF16 *string;
    int length;
};

struct IggyDataValue {
    IggyDataType type;
    union {
        double number;
        IggyStringUTF8 string8;
        IggyStringUTF16 string16;
        bool boolval;
    };
    IggyDataValue() : type(IGGY_DATATYPE_undefined), number(0) {}
};

// ===== Info structs =====
struct IggyProperties {
    int movie_width_in_pixels;
    int movie_height_in_pixels;
};

struct IggyMemoryUseInfo {
    int64_t static_allocation_bytes;
    int64_t static_allocation_count;
    int64_t dynamic_allocation_bytes;
    int64_t dynamic_allocation_count;
    const char *subcategory;
    int subcategory_stringlen;
};

// ===== Custom draw region =====
struct IggyCustomDrawCallbackRegion {
    float matrix[6];
    float x, y, width, height;
    float x0, y0, x1, y1;
    void *userData;
    const wchar_t *name;
    int stencil_func_ref;
    int stencil_func_mask;
    int stencil_write_mask;
};

// ===== External function call (field names match original Iggy SDK) =====
struct IggyExternalFunctionCallUTF16 {
    struct { const wchar_t *string; int length; } function_name;
    int num_arguments;
    IggyDataValue *arguments;
    void *userData;
};

// ===== Event system =====
enum {
    IGGY_KEYEVENT_Down = 0,
    IGGY_KEYEVENT_Up   = 1,
};

enum {
    IGGY_KEYLOC_Standard = 0,
};

// Iggy keycode constants (matching Flash/AS3 keycodes)
enum {
    IGGY_KEYCODE_ENTER     = 13,
    IGGY_KEYCODE_ESCAPE    = 27,
    IGGY_KEYCODE_PAGE_UP   = 33,
    IGGY_KEYCODE_PAGE_DOWN = 34,
    IGGY_KEYCODE_LEFT      = 37,
    IGGY_KEYCODE_UP        = 38,
    IGGY_KEYCODE_RIGHT     = 39,
    IGGY_KEYCODE_DOWN      = 40,
    IGGY_KEYCODE_F1        = 112,
    IGGY_KEYCODE_F2        = 113,
    IGGY_KEYCODE_F3        = 114,
    IGGY_KEYCODE_F4        = 115,
    IGGY_KEYCODE_F5        = 116,
    IGGY_KEYCODE_F6        = 117,
    IGGY_KEYCODE_F7        = 118,
    IGGY_KEYCODE_F8        = 119,
    IGGY_KEYCODE_F9        = 120,
    IGGY_KEYCODE_F10       = 121,
    IGGY_KEYCODE_F11       = 122,
    IGGY_KEYCODE_F12       = 123,
};

struct IggyEvent {
    int eventType;
    int keyCode;
    int keyLoc;
    int mouseX;
    int mouseY;
};

struct IggyEventResult {
    bool handled;
};

inline void IggyMakeEventKey(IggyEvent *event, int type, IggyKeycode keyCode, int keyLoc) {
    event->eventType = type;
    event->keyCode = keyCode;
    event->keyLoc = keyLoc;
}

inline void IggyMakeEventMouseMove(IggyEvent *event, int x, int y) {
    event->eventType = 0;
    event->mouseX = x;
    event->mouseY = y;
}

// GDraw function table (stub — no longer needed)
struct GDrawFunctions {};

// ===== Player lifecycle =====

inline Iggy *IggyPlayerCreateFromMemory(const void *data, int length, void *allocator) {
    (void)data; (void)length; (void)allocator;
    return new UIMovie();
}

inline void IggyPlayerDestroy(Iggy *player) {
    if (player) {
        player->destroy();
        delete player;
    }
}

inline void IggyPlayerInitializeAndTickRS(Iggy *player) {
    if (player) player->tick();
}

inline bool IggyPlayerReadyToTick(Iggy *player) {
    // Tick exactly once per frame call
    static thread_local bool ticked = false;
    if (!ticked) { ticked = true; return true; }
    ticked = false;
    return false;
}

inline void IggyPlayerTickRS(Iggy *player) {
    if (player) player->tick();
}

inline void IggyPlayerDraw(Iggy *player) {
    // Drawing is handled by UIScene::render via UIRenderer
    (void)player;
}

inline IggyValuePath *IggyPlayerRootPath(Iggy *player) {
    static thread_local UIElement *root = nullptr;
    if (player) root = player->getRootElement();
    return &root;
}

inline void IggyPlayerSetDisplaySize(Iggy *player, int width, int height) {
    if (player) player->setDisplaySize(width, height);
}

inline void IggyPlayerDrawTilesStart(Iggy *player) { (void)player; }
inline void IggyPlayerDrawTile(Iggy *player, float x0, float y0, float x1, float y1, int flags) {
    (void)player; (void)x0; (void)y0; (void)x1; (void)y1; (void)flags;
}
inline void IggyPlayerDrawTilesEnd(Iggy *player) { (void)player; }

inline IggyName IggyPlayerCreateFastName(Iggy *player, const IggyUTF16 *name, int len) {
    if (!player) return 0;
    std::wstring nameStr(name);
    return player->createFastName(nameStr);
}

inline void IggyPlayerSetUserdata(Iggy *player, void *data) {
    if (player) player->setUserData(data);
}

inline void *IggyPlayerGetUserdata(Iggy *player) {
    return player ? player->getUserData() : nullptr;
}

// ===== Method calls =====

inline rrbool IggyValuePathMakeNameRef(IggyValuePath *path, IggyValuePath *parent, const char *name) {
    (void)path; (void)parent; (void)name;
    return true;
}
inline IggyResult IggyValueGetF64RS(IggyValuePath *path, IggyName name, void *ctx, F64 *out) {
    (void)path; (void)name; (void)ctx;
    if (out) *out = 0.0;
    return 0;
}
inline rrbool IggyValueSetBooleanRS(IggyValuePath *path, IggyName name, void *ctx, rrbool val) {
    (void)path; (void)name; (void)ctx; (void)val;
    return true;
}
inline IggyResult IggyValueGetBooleanRS(IggyValuePath *path, IggyName name, void *ctx, rrbool *out) {
    (void)path; (void)name; (void)ctx;
    if (out) *out = false;
    return 0;
}

inline IggyResult IggyPlayerCallMethodRS(Iggy *player, IggyDataValue *result,
                                          IggyValuePath *target, IggyName method,
                                          int argCount, IggyDataValue *args) {
    if (!player) return -1;
    std::vector<std::wstring> argStrs;
    for (int i = 0; i < argCount; i++) {
        if (args[i].type == IGGY_DATATYPE_number) {
            argStrs.push_back(std::to_wstring(args[i].number));
        } else if (args[i].type == IGGY_DATATYPE_string_UTF8) {
            std::string s(args[i].string8.string, args[i].string8.length);
            argStrs.push_back(std::wstring(s.begin(), s.end()));
        } else if (args[i].type == IGGY_DATATYPE_string_UTF16) {
            argStrs.push_back(std::wstring(args[i].string16.string, args[i].string16.length));
        } else if (args[i].type == IGGY_DATATYPE_boolean) {
            argStrs.push_back(args[i].boolval ? L"true" : L"false");
        }
    }
    UIElement *targetElem = target ? *target : player->getRootElement();
    player->callMethod(targetElem, method, argStrs);
    if (result) result->type = IGGY_DATATYPE_undefined;
    return 0;
}

// ===== Event dispatch =====

inline IggyResult IggyPlayerDispatchEventRS(Iggy *player, IggyEvent *event, IggyEventResult *result) {
    if (player) {
        // Translate key events into the UIMovie input system
        player->handleKeyEvent(event->eventType == IGGY_KEYEVENT_Down, event->keyCode);
    }
    if (result) result->handled = true;
    return 0;
}

// ===== Properties / debug =====

inline IggyProperties *IggyPlayerProperties(Iggy *player) {
    static IggyProperties props;
    if (player) {
        props.movie_width_in_pixels = player->getWidth();
        props.movie_height_in_pixels = player->getHeight();
    }
    return &props;
}

inline bool IggyDebugGetMemoryUseInfo(Iggy *player, void *a, const char *b, int c, int d, IggyMemoryUseInfo *info) {
    (void)player; (void)a; (void)b; (void)c; (void)d; (void)info;
    return false;
}

// ===== Library init/shutdown =====

inline void IggyLibraryInit(void *allocFunc, void *freeFunc, void *traceFunc, void *warningFunc) {
    (void)allocFunc; (void)freeFunc; (void)traceFunc; (void)warningFunc;
}

inline void IggyLibraryDestroy() {}

inline void IggySetGDrawFunctions(GDrawFunctions *funcs) { (void)funcs; }

// ===== Texture substitution stubs =====
inline void IggyPlayerRegisterExternalTextureCallback(void *a, void *b, void *c) {
    (void)a; (void)b; (void)c;
}

#endif // LCEMP_USE_IGGY
