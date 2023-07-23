#include "Window.hpp"

#include <glad/glad.h>
#include <glfw/glfw3.h>

#include <iostream>

GLFWwindow* Window::_window;
int Window::width, Window::height;

int Window::initialization(int width, int height, const char* title) {
    if (!glfwInit()) {
        std::cout << "GLFW initialization failed.\n";
        return -1;
    }

    _window = glfwCreateWindow(width, height, title, nullptr, nullptr);

    if (!_window) {
        std::cout << "Window create failed.\n";
        glfwTerminate();
        return -1;
    }

    glfwMakeContextCurrent(_window);

    Window::width = width;
    Window::height = height;
    
    if(!gladLoadGL()) {
        std::cout << "GLAD initialization failed.\n";
        glfwTerminate();
        return -1;
    }

    return 0;
}

int Window::shouldClose() {
    return glfwWindowShouldClose(_window);
}

void Window::swapBuffers() {
    glfwSwapBuffers(_window);
}

void Window::terminate() {
    glfwTerminate();
}