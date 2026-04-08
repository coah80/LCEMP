#include "UIBackend.h"
#include <algorithm>
#include <sstream>
#include <cwchar>
#include <cmath>
#include <cstdio>

// ===== UIElement =====

UIElement *UIElement::findChild(const std::wstring &childName) {
    for (auto &child : children) {
        if (child->name == childName)
            return child.get();
    }
    return nullptr;
}

UIElement *UIElement::findChildRecursive(const std::wstring &childName) {
    for (auto &child : children) {
        if (child->name == childName)
            return child.get();
        UIElement *found = child->findChildRecursive(childName);
        if (found)
            return found;
    }
    return nullptr;
}

UIElement *UIElement::addChild(const std::wstring &childName, UIElementType childType) {
    auto elem = std::make_unique<UIElement>();
    elem->name = childName;
    elem->type = childType;
    elem->parent = this;
    UIElement *raw = elem.get();
    children.push_back(std::move(elem));
    return raw;
}

void UIElement::removeChild(const std::wstring &childName) {
    children.erase(
        std::remove_if(children.begin(), children.end(),
            [&childName](const std::unique_ptr<UIElement> &child) {
                return child->name == childName;
            }),
        children.end());
}

std::wstring UIElement::getPath() const {
    if (!parent)
        return name;
    return parent->getPath() + L"." + name;
}

// ===== UIMovie =====

UIMovie::UIMovie() = default;

UIMovie::~UIMovie() {
    destroy();
}

bool UIMovie::create(const std::wstring &moviePath, int width, int height) {
    m_width = width;
    m_height = height;

    m_root = std::make_unique<UIElement>();
    m_root->name = L"_root";
    m_root->type = UIElementType::Container;
    m_root->width = static_cast<float>(width);
    m_root->height = static_cast<float>(height);

    return loadLayout(moviePath);
}

void UIMovie::destroy() {
    m_root.reset();
    m_fastNames.clear();
    m_fastNameLookup.clear();
    m_nextFastName = 1;
    m_animations.clear();
    m_userData = nullptr;
    m_externalHandler = nullptr;
    m_customDrawCallback = nullptr;
}

void UIMovie::tick() {
    if (!m_root)
        return;

    // Advance slide animations
    const float dt = 1.0f / 30.0f; // ~30 fps tick rate matching the original Iggy tick
    for (auto it = m_animations.begin(); it != m_animations.end();) {
        it->progress += dt / it->duration;
        if (it->progress >= 1.0f) {
            it->target->x = it->endX;
            it = m_animations.erase(it);
        } else {
            // Smooth ease-out interpolation
            float t = it->progress;
            float eased = 1.0f - (1.0f - t) * (1.0f - t);
            it->target->x = it->startX + (it->endX - it->startX) * eased;
            ++it;
        }
    }
}

void UIMovie::draw(UIRenderer *renderer) {
    if (!m_root || !renderer)
        return;
    drawElement(renderer, m_root.get(), 0, 0, 1.0f);
}

void UIMovie::setDisplaySize(int width, int height) {
    m_width = width;
    m_height = height;
    if (m_root) {
        m_root->width = static_cast<float>(width);
        m_root->height = static_cast<float>(height);
    }
}

UIElement *UIMovie::getRootElement() {
    return m_root.get();
}

UIElement *UIMovie::findElement(const std::wstring &path) {
    if (!m_root)
        return nullptr;
    if (path.empty())
        return m_root.get();

    // Parse dot-separated path: "_root.panel.button1"
    UIElement *current = m_root.get();
    std::wstring segment;
    std::wistringstream stream(path);

    while (std::getline(stream, segment, L'.')) {
        if (segment == L"_root" && current == m_root.get())
            continue;
        UIElement *child = current->findChild(segment);
        if (!child)
            return nullptr;
        current = child;
    }
    return current;
}

UIFastName UIMovie::createFastName(const std::wstring &name) {
    auto it = m_fastNameLookup.find(name);
    if (it != m_fastNameLookup.end())
        return it->second;

    UIFastName id = m_nextFastName++;
    m_fastNames[id] = name;
    m_fastNameLookup[name] = id;
    return id;
}

static const std::wstring s_emptyName;

const std::wstring &UIMovie::getFastName(UIFastName name) const {
    auto it = m_fastNames.find(name);
    if (it != m_fastNames.end())
        return it->second;
    return s_emptyName;
}

void UIMovie::callMethod(UIValuePath target, UIFastName method, const std::vector<std::wstring> &args) {
    const std::wstring &methodName = getFastName(method);
    if (methodName.empty())
        return;
    callMethod(target, methodName, args);
}

void UIMovie::callMethod(UIValuePath target, const std::wstring &method, const std::vector<std::wstring> &args) {
    if (!target)
        target = m_root.get();

    if (method == L"RemoveObject") {
        // args[0] = control name (UTF-8 originally, now wstring)
        if (!args.empty()) {
            std::wstring controlName = args[0];
            target->removeChild(controlName);
        }
    } else if (method == L"SlideLeft") {
        AnimState anim;
        anim.target = target;
        anim.startX = target->x;
        anim.endX = target->x - target->width;
        anim.progress = 0;
        anim.duration = 0.3f;
        m_animations.push_back(anim);
    } else if (method == L"SlideRight") {
        AnimState anim;
        anim.target = target;
        anim.startX = target->x;
        anim.endX = target->x + target->width;
        anim.progress = 0;
        anim.duration = 0.3f;
        m_animations.push_back(anim);
    } else if (method == L"SetSafeZone") {
        // args: top, bottom, left, right margins
        if (args.size() >= 4) {
            target->properties[L"safeTop"] = args[0];
            target->properties[L"safeBottom"] = args[1];
            target->properties[L"safeLeft"] = args[2];
            target->properties[L"safeRight"] = args[3];
        }
    } else if (method == L"SetFocus") {
        // args[0] = control ID to focus (-1 for default)
        // Clear focus on all children, then set it on the target
        std::function<void(UIElement *)> clearFocus = [&clearFocus](UIElement *el) {
            el->focused = false;
            for (auto &child : el->children)
                clearFocus(child.get());
        };
        clearFocus(m_root.get());

        if (!args.empty()) {
            int focusId = -1;
            try {
                focusId = std::stoi(args[0]);
            } catch (...) {}

            if (focusId >= 0) {
                // Find element with matching controlId
                std::function<UIElement *(UIElement *, int)> findById =
                    [&findById](UIElement *el, int id) -> UIElement * {
                    if (el->controlId == id)
                        return el;
                    for (auto &child : el->children) {
                        UIElement *found = findById(child.get(), id);
                        if (found)
                            return found;
                    }
                    return nullptr;
                };
                UIElement *focusEl = findById(m_root.get(), focusId);
                if (focusEl)
                    focusEl->focused = true;
            }
        }
    } else if (method == L"SetAlpha" || method == L"SetControlAlpha") {
        // args[0] = alpha value (or control name + alpha for SetControlAlpha)
        if (method == L"SetAlpha" && !args.empty()) {
            try {
                target->alpha = std::stof(args[0]);
            } catch (...) {}
        } else if (method == L"SetControlAlpha" && args.size() >= 2) {
            std::wstring controlName = args[0];
            UIElement *child = target->findChildRecursive(controlName);
            if (child) {
                try {
                    child->alpha = std::stof(args[1]);
                } catch (...) {}
            }
        }
    } else if (method == L"SetLabel") {
        // args[0] = label text
        if (!args.empty()) {
            target->text = args[0];
            if (target->type == UIElementType::Container)
                target->type = UIElementType::Label;
        }
    } else if (method == L"GetLabel") {
        // Read-only; the caller reads target->text
    } else if (method == L"Init") {
        // Initialization callback; element is already set up
    } else if (method == L"CheckLabelWidths") {
        // Layout hint from ActionScript; store widest label for future layout
    } else if (method == L"DoHorizontalResizeCheck") {
        // Layout recalculation hint; no-op in static layout
    } else {
        // Unhandled method - log for debugging
        std::fprintf(stderr, "UIMovie::callMethod: unhandled method '%ls'\n", method.c_str());
    }
}

void UIMovie::dispatchEvent(const std::wstring &eventName, const std::vector<std::wstring> &args) {
    if (!m_root)
        return;

    // Route known events
    if (eventName == L"focusGained" || eventName == L"focusLost") {
        // Focus state management already handled by callMethod("SetFocus")
    } else if (eventName == L"keyDown" || eventName == L"keyUp") {
        // Input events; will be routed by UIScene::sendInputToMovie
    } else {
        std::fprintf(stderr, "UIMovie::dispatchEvent: unhandled event '%ls'\n", eventName.c_str());
    }
}

// ===== Property access =====

void UIMovie::setProperty(UIValuePath element, const std::wstring &prop, const std::wstring &value) {
    if (!element)
        return;

    // Handle well-known properties directly on element fields
    if (prop == L"x") {
        try { element->x = std::stof(value); } catch (...) {}
    } else if (prop == L"y") {
        try { element->y = std::stof(value); } catch (...) {}
    } else if (prop == L"width") {
        try { element->width = std::stof(value); } catch (...) {}
    } else if (prop == L"height") {
        try { element->height = std::stof(value); } catch (...) {}
    } else if (prop == L"scaleX") {
        try { element->scaleX = std::stof(value); } catch (...) {}
    } else if (prop == L"scaleY") {
        try { element->scaleY = std::stof(value); } catch (...) {}
    } else if (prop == L"alpha") {
        try { element->alpha = std::stof(value); } catch (...) {}
    } else if (prop == L"rotation") {
        try { element->rotation = std::stof(value); } catch (...) {}
    } else if (prop == L"visible") {
        element->visible = (value == L"true" || value == L"1");
    } else if (prop == L"enabled") {
        element->enabled = (value == L"true" || value == L"1");
    } else if (prop == L"text") {
        element->text = value;
    } else {
        element->properties[prop] = value;
    }
}

std::wstring UIMovie::getProperty(UIValuePath element, const std::wstring &prop) {
    if (!element)
        return L"";

    if (prop == L"x") return std::to_wstring(element->x);
    if (prop == L"y") return std::to_wstring(element->y);
    if (prop == L"width") return std::to_wstring(element->width);
    if (prop == L"height") return std::to_wstring(element->height);
    if (prop == L"scaleX") return std::to_wstring(element->scaleX);
    if (prop == L"scaleY") return std::to_wstring(element->scaleY);
    if (prop == L"alpha") return std::to_wstring(element->alpha);
    if (prop == L"rotation") return std::to_wstring(element->rotation);
    if (prop == L"visible") return element->visible ? L"true" : L"false";
    if (prop == L"enabled") return element->enabled ? L"true" : L"false";
    if (prop == L"text") return element->text;

    auto it = element->properties.find(prop);
    if (it != element->properties.end())
        return it->second;
    return L"";
}

void UIMovie::setPropertyF64(UIValuePath element, const std::wstring &prop, double value) {
    if (!element)
        return;

    if (prop == L"x") { element->x = static_cast<float>(value); return; }
    if (prop == L"y") { element->y = static_cast<float>(value); return; }
    if (prop == L"width") { element->width = static_cast<float>(value); return; }
    if (prop == L"height") { element->height = static_cast<float>(value); return; }
    if (prop == L"scaleX") { element->scaleX = static_cast<float>(value); return; }
    if (prop == L"scaleY") { element->scaleY = static_cast<float>(value); return; }
    if (prop == L"alpha") { element->alpha = static_cast<float>(value); return; }
    if (prop == L"rotation") { element->rotation = static_cast<float>(value); return; }

    element->properties[prop] = std::to_wstring(value);
}

double UIMovie::getPropertyF64(UIValuePath element, const std::wstring &prop) {
    if (!element)
        return 0.0;

    if (prop == L"x") return static_cast<double>(element->x);
    if (prop == L"y") return static_cast<double>(element->y);
    if (prop == L"width") return static_cast<double>(element->width);
    if (prop == L"height") return static_cast<double>(element->height);
    if (prop == L"scaleX") return static_cast<double>(element->scaleX);
    if (prop == L"scaleY") return static_cast<double>(element->scaleY);
    if (prop == L"alpha") return static_cast<double>(element->alpha);
    if (prop == L"rotation") return static_cast<double>(element->rotation);

    auto it = element->properties.find(prop);
    if (it != element->properties.end()) {
        try { return std::stod(it->second); } catch (...) {}
    }
    return 0.0;
}

void UIMovie::setPropertyBool(UIValuePath element, const std::wstring &prop, bool value) {
    if (!element)
        return;

    if (prop == L"visible") { element->visible = value; return; }
    if (prop == L"enabled") { element->enabled = value; return; }
    if (prop == L"checked") { element->checked = value; return; }
    if (prop == L"focused") { element->focused = value; return; }

    element->properties[prop] = value ? L"true" : L"false";
}

bool UIMovie::getPropertyBool(UIValuePath element, const std::wstring &prop) {
    if (!element)
        return false;

    if (prop == L"visible") return element->visible;
    if (prop == L"enabled") return element->enabled;
    if (prop == L"checked") return element->checked;
    if (prop == L"focused") return element->focused;

    auto it = element->properties.find(prop);
    if (it != element->properties.end())
        return (it->second == L"true" || it->second == L"1");
    return false;
}

// ===== Layout loading =====

bool UIMovie::loadLayout(const std::wstring &moviePath) {
    if (!m_root)
        return false;

    // Extract the scene name from the movie path
    // e.g. "assets/ui/Menu_MainMenu/" -> create standard layout elements
    loadTexturesForPath(moviePath);

    // Create standard child elements that mirror the Flash movie structure.
    // Every scene has a background and a main panel container.
    UIElement *bg = m_root->addChild(L"background", UIElementType::Sprite);
    bg->width = static_cast<float>(m_width);
    bg->height = static_cast<float>(m_height);

    UIElement *panel = m_root->addChild(L"panel", UIElementType::Container);
    panel->width = static_cast<float>(m_width);
    panel->height = static_cast<float>(m_height);

    return true;
}

void UIMovie::loadTexturesForPath(const std::wstring & /*moviePath*/) {
    // Texture loading is platform-specific and handled by UIRenderer.
    // This method is a hook for future asset pipeline integration where
    // PNG sprite sheets are mapped to texture handles on UIElement nodes.
}

// ===== Rendering =====

void UIMovie::drawElement(UIRenderer * /*renderer*/, UIElement *element,
                          float parentX, float parentY, float parentAlpha) {
    if (!element || !element->visible)
        return;

    float worldX = parentX + element->x;
    float worldY = parentY + element->y;
    float worldAlpha = parentAlpha * element->alpha;

    switch (element->type) {
    case UIElementType::Sprite:
        // renderer->drawTexturedRect(element->textureHandle,
        //     worldX, worldY, element->width, element->height,
        //     element->scaleX, element->scaleY, worldAlpha);
        break;

    case UIElementType::Label:
        // renderer->drawText(element->text,
        //     worldX, worldY, element->fontSize,
        //     element->textColor, worldAlpha);
        break;

    case UIElementType::Button: {
        // Draw button background texture
        // renderer->drawTexturedRect(element->textureHandle,
        //     worldX, worldY, element->width, element->height,
        //     element->scaleX, element->scaleY, worldAlpha);
        // If focused, draw highlight overlay
        // if (element->focused)
        //     renderer->drawHighlight(worldX, worldY, element->width, element->height);
        // Draw button label
        // if (!element->text.empty())
        //     renderer->drawText(element->text,
        //         worldX + element->width * 0.5f,
        //         worldY + element->height * 0.5f,
        //         element->fontSize, element->textColor, worldAlpha);
        break;
    }

    case UIElementType::Slider:
        // renderer->drawSlider(worldX, worldY, element->width, element->height,
        //     element->sliderValue, element->sliderMin, element->sliderMax, worldAlpha);
        break;

    case UIElementType::CheckBox:
        // renderer->drawCheckBox(worldX, worldY, element->width, element->height,
        //     element->checked, element->focused, worldAlpha);
        break;

    case UIElementType::List:
        // renderer->drawList(worldX, worldY, element->width, element->height,
        //     element->selectedIndex, element->scrollOffset,
        //     element->visibleItems, worldAlpha);
        break;

    case UIElementType::TextInput:
        // renderer->drawTextInput(worldX, worldY, element->width, element->height,
        //     element->text, element->focused, worldAlpha);
        break;

    case UIElementType::CustomDraw:
        if (m_customDrawCallback) {
            UICustomDrawRegion region;
            region.x = worldX;
            region.y = worldY;
            region.width = element->width * element->scaleX;
            region.height = element->height * element->scaleY;
            // Build 2D affine transform matrix [a b tx; c d ty]
            float cosR = std::cos(element->rotation * 3.14159265f / 180.0f);
            float sinR = std::sin(element->rotation * 3.14159265f / 180.0f);
            region.matrix[0] = element->scaleX * cosR;
            region.matrix[1] = element->scaleX * sinR;
            region.matrix[2] = -element->scaleY * sinR;
            region.matrix[3] = element->scaleY * cosR;
            region.matrix[4] = worldX;
            region.matrix[5] = worldY;
            region.userData = m_userData;
            m_customDrawCallback(&region);
        }
        break;

    case UIElementType::Container:
    default:
        break;
    }

    // Recurse into children
    for (auto &child : element->children) {
        drawElement(nullptr, child.get(), worldX, worldY, worldAlpha);
    }
}
