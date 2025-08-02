#ifndef UIELEMENT_H
#define UIELEMENT_H

namespace uiElement
{
    // 控件风格
    enum ThemeType
        {
            THEME_WIN7_AERO = 1 << 0,           // win7  00000001
            THEME_WIN8_METRO = 1 << 1,          // win8  00000010
            THEME_WIN10_METRO = 1 << 2,         // win10 00000100
            THEME_WIN11_FLUENT = 1 << 3         // win11 00001000
        };
}

#endif