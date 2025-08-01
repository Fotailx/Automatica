// #include "imgui.h"
// #include "imgui_impl_glfw.h"
// #include "imgui_impl_opengl3.h"
// #include <GL/gl.h>
// #include <GLFW/glfw3.h>
#include <spdlog/spdlog.h>
#include <spdlog/sinks/stdout_color_sinks.h>
#include <spdlog/sinks/rotating_file_sink.h>
#include "window.h"

int main()
{
    // 日志
    auto console = spdlog::stdout_color_mt("console");
    auto file_logger = spdlog::rotating_logger_mt("file_logger", "logs/mylogfile", 1048576 * 10, 3);

    // 窗口
    Window* window = new Window("GL", console, file_logger);

    return 0;
}