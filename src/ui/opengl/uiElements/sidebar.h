#ifndef UIELEMENTS_SIDEBAR_H
#define UIELEMENTS_SIDEBAR_H

#include "imgui.h"
#include <string>
// Sidebar 子控件类，也是 Sidebar 样式链表的体与最后节点
class uiElement_Sidebar_sonElement
{
    public:
    std::string* type;
    std::string* str_id;
    ImVec2 size;
    // ↑ 控件尺寸

    uiElement_Sidebar_sonElement(std::string* elementType) : type(elementType)
    {
        str_id = nullptr;
    }
};

// Sidebar 属性结构体，也是 Sidebar 样式链表的头头
struct uiElement_Sidebar_Attribute
{
    std::string* str_id;
    ImVec2 size;
    // ↑ 控件尺寸
    bool has_border;
    ImGuiWindowFlags flags;
    /* ↑ 标识
       | ImGuiWindowFlags_None：默认值，无特殊行为
       | ImGuiWindowFlags_NoScrollbar：禁用滚动条，超出内容会被隐藏
       | ImGuiWindowFlags_AlwaysAutoResize：自动调整大小以适应内容
       | ImGuiWindowFlags_HorizontalScrollbar：启用水平滚动条
       | ImGuiWindowFlags_AlwaysVerticalScrollbar：始终显示垂直滚动条（即使内容未超出）
    */
    uiElement_Sidebar_sonElement* pNext;
};

class uiElement_Sidebar
{
    public:
    uiElement_Sidebar(std::string* str_id, ImVec2& size, bool has_border, ImGuiWindowFlags flags)
    {
    }
};

#endif