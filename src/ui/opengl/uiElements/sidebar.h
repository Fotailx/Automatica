#ifndef UIELEMENTS_SIDEBAR_H
#define UIELEMENTS_SIDEBAR_H

#include "imgui.h"
#include "uiElement.h"
#include <string>

namespace uiElement
{
    namespace Sidebar
    {
        // Sidebar 的子按钮。也是 Sidebar 样式链表的中间节点和末尾节点
        class sonButton
        {
            public:
            ThemeType elementThemeType;
            std::string* str_id;
            ImVec2 size;
            // ↑ 控件尺寸
        
            sonButton(ThemeType _elementThemeType) : elementThemeType(_elementThemeType)
            {
                str_id = nullptr;
            }
        };
    
        // Sidebar 属性结构体，也是 Sidebar 样式链表的头头
        struct Attribute
        {
            std::string* str_id;
            ImVec2 size;
            // ↑ 控件尺寸
            bool has_border;
            ImGuiWindowFlags flags;
            /** 标识
             * ImGuiWindowFlags_None：默认值，无特殊行为
             * ImGuiWindowFlags_NoScrollbar：禁用滚动条，超出内容会被隐藏
             * ImGuiWindowFlags_AlwaysAutoResize：自动调整大小以适应内容
             * ImGuiWindowFlags_HorizontalScrollbar：启用水平滚动条
             * ImGuiWindowFlags_AlwaysVerticalScrollbar：始终显示垂直滚动条（即使内容未超出）
             */
            sonButton* pNext;
        };
        
        // Sidebar 主控制器类，负责创建、管理、渲染侧边栏
        class Main
        {
            public:
            // 初始化
            Main(std::string* str_id, ImVec2& size, bool has_border, ImGuiWindowFlags flags)
            {
            }
        };
    };
};

#endif