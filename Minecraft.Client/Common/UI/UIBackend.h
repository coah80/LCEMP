#pragma once
#include <string>
#include <vector>
#include <unordered_map>
#include <functional>
#include <memory>
#include <cstdint>

class UIRenderer;

// Replaces IggyValuePath - a path to an element in the UI tree
using UIValuePath = class UIElement*;

// Replaces IggyName - fast name reference
using UIFastName = uint32_t;

// Replaces IggyCustomDrawCallbackRegion
struct UICustomDrawRegion {
    float x, y, width, height;
    float matrix[6]; // 2D affine transform
    void *userData;
};

// Replaces IggyExternalFunctionCallUTF16
struct UIExternalCall {
    std::wstring functionName;
    std::vector<std::wstring> args;
    void *userData;
};

// UI Element types
enum class UIElementType {
    Container,    // just a group/container
    Sprite,       // textured rectangle
    Label,        // text label
    Button,       // interactive button
    Slider,       // slider control
    CheckBox,     // toggle
    List,         // scrollable list
    TextInput,    // text entry
    CustomDraw,   // custom rendering callback
};

// UI Element - replaces Flash MovieClip/Sprite hierarchy
class UIElement {
public:
    std::wstring name;
    UIElementType type = UIElementType::Container;

    // Transform
    float x = 0, y = 0;
    float scaleX = 1, scaleY = 1;
    float rotation = 0;
    float alpha = 1.0f;
    bool visible = true;
    bool enabled = true;

    // For Sprite type
    int textureHandle = -1;
    float width = 0, height = 0;

    // For Label type
    std::wstring text;
    float fontSize = 16;
    uint32_t textColor = 0xFFFFFFFF;

    // For Button/interactive types
    bool focused = false;
    bool pressed = false;
    int controlId = -1;

    // For List type
    int selectedIndex = 0;
    int scrollOffset = 0;
    int visibleItems = 10;

    // For Slider type
    float sliderValue = 0;
    float sliderMin = 0, sliderMax = 1;

    // For CheckBox type
    bool checked = false;

    // Hierarchy
    UIElement *parent = nullptr;
    std::vector<std::unique_ptr<UIElement>> children;

    // Properties (generic key-value for ActionScript property replacement)
    std::unordered_map<std::wstring, std::wstring> properties;

    UIElement *findChild(const std::wstring &childName);
    UIElement *findChildRecursive(const std::wstring &childName);
    UIElement *addChild(const std::wstring &childName, UIElementType childType = UIElementType::Container);
    void removeChild(const std::wstring &childName);

    // Get the full path (dot-separated) to this element
    std::wstring getPath() const;
};

// Callback types
using UICustomDrawCallback = std::function<void(UICustomDrawRegion *)>;
using UIExternalCallHandler = std::function<void(const UIExternalCall &)>;
using UIEventHandler = std::function<void(UIElement *, const std::wstring &event)>;

// UIMovie - replaces Iggy player instance (one per UIScene)
// Instead of loading a SWF, it loads a UI layout defined in code + PNG textures
class UIMovie {
public:
    UIMovie();
    ~UIMovie();

    // Lifecycle (replaces IggyPlayer* functions)
    bool create(const std::wstring &moviePath, int width, int height);
    void destroy();
    void tick();
    void draw(UIRenderer *renderer);
    void setDisplaySize(int width, int height);

    // Element access (replaces IggyPlayerRootPath, IggyValuePath navigation)
    UIElement *getRootElement();
    UIElement *findElement(const std::wstring &path);

    // Fast names (replaces IggyPlayerCreateFastName)
    UIFastName createFastName(const std::wstring &name);
    const std::wstring &getFastName(UIFastName name) const;

    // Method calls (replaces IggyPlayerCallMethodRS)
    void callMethod(UIValuePath target, UIFastName method, const std::vector<std::wstring> &args = {});
    void callMethod(UIValuePath target, const std::wstring &method, const std::vector<std::wstring> &args = {});

    // Event dispatch (replaces IggyPlayerDispatchEventRS)
    void dispatchEvent(const std::wstring &eventName, const std::vector<std::wstring> &args = {});

    // Properties (replaces ActionScript property access)
    void setProperty(UIValuePath element, const std::wstring &prop, const std::wstring &value);
    std::wstring getProperty(UIValuePath element, const std::wstring &prop);
    void setPropertyF64(UIValuePath element, const std::wstring &prop, double value);
    double getPropertyF64(UIValuePath element, const std::wstring &prop);
    void setPropertyBool(UIValuePath element, const std::wstring &prop, bool value);
    bool getPropertyBool(UIValuePath element, const std::wstring &prop);

    // Callbacks
    void setUserData(void *data) { m_userData = data; }
    void *getUserData() const { return m_userData; }
    void setExternalCallHandler(UIExternalCallHandler handler) { m_externalHandler = handler; }
    void setCustomDrawCallback(UICustomDrawCallback callback) { m_customDrawCallback = callback; }

    // Layout loading
    bool loadLayout(const std::wstring &moviePath);

    int getWidth() const { return m_width; }
    int getHeight() const { return m_height; }

private:
    std::unique_ptr<UIElement> m_root;
    int m_width = 1920, m_height = 1080;
    void *m_userData = nullptr;

    UIExternalCallHandler m_externalHandler;
    UICustomDrawCallback m_customDrawCallback;

    // Fast name registry
    std::unordered_map<UIFastName, std::wstring> m_fastNames;
    std::unordered_map<std::wstring, UIFastName> m_fastNameLookup;
    uint32_t m_nextFastName = 1;

    // Animation state for slide transitions
    struct AnimState {
        UIElement *target;
        float startX, endX;
        float progress; // 0..1
        float duration; // seconds
    };
    std::vector<AnimState> m_animations;

    // Internal: render element recursively
    void drawElement(UIRenderer *renderer, UIElement *element, float parentX, float parentY, float parentAlpha);

    // Internal: map a movie path to PNG texture paths
    void loadTexturesForPath(const std::wstring &moviePath);
};

// ===== Compatibility layer: Iggy API → UIMovie/UIElement bridge =====
// These inline functions allow existing code to compile with minimal changes

// Replaces: Iggy *IggyPlayerCreateFromMemory(data, len, allocator)
inline UIMovie *UIPlayerCreateFromPath(const std::wstring &moviePath, int width, int height) {
    auto *movie = new UIMovie();
    movie->create(moviePath, width, height);
    return movie;
}

// Replaces: void IggyPlayerDestroy(Iggy *player)
inline void UIPlayerDestroy(UIMovie *movie) {
    if (movie) { movie->destroy(); delete movie; }
}

// Replaces: void IggyPlayerTickRS(Iggy *player)
inline void UIPlayerTick(UIMovie *movie) {
    if (movie) movie->tick();
}

// Replaces: void IggyPlayerDraw(Iggy *player)
inline void UIPlayerDraw(UIMovie *movie, UIRenderer *renderer) {
    if (movie) movie->draw(renderer);
}

// Replaces: IggyValuePath *IggyPlayerRootPath(Iggy *player)
inline UIValuePath UIPlayerRootPath(UIMovie *movie) {
    return movie ? movie->getRootElement() : nullptr;
}

// Replaces: void IggyPlayerSetDisplaySize(Iggy *player, int w, int h)
inline void UIPlayerSetDisplaySize(UIMovie *movie, int width, int height) {
    if (movie) movie->setDisplaySize(width, height);
}

// Replaces: IggyName IggyPlayerCreateFastName(Iggy *player, wchar_t *name)
inline UIFastName UIPlayerCreateFastName(UIMovie *movie, const std::wstring &name) {
    return movie ? movie->createFastName(name) : 0;
}

// Replaces: void IggyPlayerSetUserdata(Iggy *player, void *data)
inline void UIPlayerSetUserData(UIMovie *movie, void *data) {
    if (movie) movie->setUserData(data);
}
