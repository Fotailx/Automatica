#include "window.h"
#include <iostream>

void Window::glInitializeWindow()
{
    // 初始化 GLFW
    glfwInit();
    Window::window = glfwCreateWindow(1280, 720, "ImGui Demo", NULL, NULL);
    glfwMakeContextCurrent(window);
    glfwSwapInterval(1);  // 启用垂直同步

    // 初始化 ImGui
    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGui_ImplGlfw_InitForOpenGL(window, true);
    ImGui_ImplOpenGL3_Init("#version 130");  // OpenGL 3.0+ 版本

    // 主循环
    while (!glfwWindowShouldClose(window)) {
        glfwPollEvents();
        
        // 开始 ImGui 帧
        ImGui_ImplOpenGL3_NewFrame();
        ImGui_ImplGlfw_NewFrame();
        ImGui::NewFrame();

        // // 绘制 ImGui 界面
        // ImGui::Begin("Demo Window");
        // ImGui::Text("Hello, world!");
        // if (ImGui::Button("Close")) 
        //     glfwSetWindowShouldClose(window, true);
        // ImGui::End();

        // 渲染
        ImGui::Render();
        glClear(GL_COLOR_BUFFER_BIT);
        ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());
        glfwSwapBuffers(window);
    }
    // 清理
    // ImGui_ImplOpenGL3_Shutdown();
    // ImGui_ImplGlfw_Shutdown();
    // ImGui::DestroyContext();
}


Window::Window(std::string _isGL_or_isVk, std::shared_ptr<spdlog::logger> _console, std::shared_ptr<spdlog::logger> _file_logger)
{
    Window::isGL_or_isVk = _isGL_or_isVk;
    Window::console = _console;
    Window::file_logger = _file_logger;
    if (!Window::console || !Window::file_logger) std::cout << "Error: Logger not initialize" << std::endl;
    if (Window::isGL_or_isVk == "GL") Window::glInitializeWindow();
}

Window::~Window()
{
    if (Window::isGL_or_isVk == "GL")
    {
        glfwDestroyWindow(Window::window);
        glfwTerminate();
    }
}