#pragma once
#include <glad/glad.h>
#include <GLFW/glfw3.h>

namespace Window {
    void Init();
    void Shutdown();
    void PollEvents();
    void SwapBuffers();
    void ProcessInput();
    bool ShouldClose();
    GLFWwindow* GetGLFWWindow();

}