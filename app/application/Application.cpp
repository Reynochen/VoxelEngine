#include "Application.hpp"

#include <glad/glad.h>
#include <glfw/glfw3.h>

#include "Window.hpp"

Application::Application(/* args */){
    Window::initialization(640, 480, "Voxel Engine");
    
}

Application::~Application(){
    Window::terminate();
}

void Application::run() {
    while(!Window::shouldClose())
    {
        glClear(GL_COLOR_BUFFER_BIT);

        Window::swapBuffers();
        glfwPollEvents();
    }
}

void Application::updateDraw() {

}

Application* CreateApllication() {
    Application* app = new Application;
    return app;
}