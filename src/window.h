#ifndef WINDOW_H
#define WINDOW_H

#include "imgui.h"
#include "imgui_impl_glfw.h"
#include "imgui_impl_opengl3.h"
#include <GL/gl.h>
#include <GLFW/glfw3.h>
#include <spdlog/spdlog.h>
#include <string>

class Window
{
    private:
    GLFWwindow* window;

    public:
    std::string isGL_or_isVk = "GL";
    std::shared_ptr<spdlog::logger> console = nullptr;
    std::shared_ptr<spdlog::logger> file_logger = nullptr;

    void glInitializeWindow();

    Window(std::string, std::shared_ptr<spdlog::logger>, std::shared_ptr<spdlog::logger>);
    ~Window();
};

#endif