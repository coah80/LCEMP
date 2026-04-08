#pragma once
// IggyCompat.h — Compatibility layer that maps Iggy types/functions to UIBackend
// When LCEMP_USE_IGGY is defined, uses the real Iggy library.
// Otherwise, uses the UIMovie/UIElement-based replacement.

#ifdef LCEMP_USE_IGGY
    // Use real Iggy headers (proprietary)
    #include "iggy.h"
#else

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

// ===== Data types =====
enum IggyDataType {
    IGGY_DATATYPE_number,
    IGGY_DATATYPE_string_UTF8,
    IGGY_DATATYPE_boolean,
    IGGY_DATATYPE_undefined,
};

struct IggyStringUTF8 {
    char *string;
    int length;
};

struct IggyDataValue {
    IggyDataType type;
    union {
        double number;
        IggyStringUTF8 string8;
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
    void *userData;
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
    int eventType;  // key down/up
    int keyCode;
    int keyLoc;
};

struct IggyEventResult {
    bool handled;
};

inline void IggyMakeEventKey(IggyEvent *event, int type, IggyKeycode keyCode, int keyLoc) {
    event->eventType = type;
    event->keyCode = keyCode;
    event->keyLoc = keyLoc;
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

// ===== Xbox PIX markers (no-op on non-Xbox) =====
#ifndef PIXBeginNamedEvent
    #define PIXBeginNamedEvent(color, name) ((void)0)
#endif
#ifndef PIXEndNamedEvent
    #define PIXEndNamedEvent() ((void)0)
#endif

#endif // LCEMP_USE_IGGY
