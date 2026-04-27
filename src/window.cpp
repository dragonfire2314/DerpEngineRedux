#include <window.hpp>

#include <iostream>

Window::Window(uint32_t _width, uint32_t _height, std::string_view _name) : 
    width(_width), 
    height(_height), 
    window_name(_name)
{
    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    //glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);

    window = glfwCreateWindow(800, 600, "LearnOpenGL", NULL, NULL);
    if (window == NULL)
    {
        std::cout << "Failed to create GLFW window" << std::endl;
        glfwTerminate();
        // throw std::runtime_error("Failed to create GLFW window");
    }
    glfwMakeContextCurrent(window);

    // glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);  

    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
    {
        std::cout << "Failed to initialize GLAD" << std::endl;
        // throw std::runtime_error("Failed to initialize GLAD");
    }
}

Window::~Window()
{

}

void Window::bindRenderer(Renderer* _renderer)
{
    renderer = _renderer;
}

bool Window::shouldClose()
{
    return glfwWindowShouldClose(window);
}

void Window::pollEvents()
{
    glfwPollEvents();
}

void Window::swapBuffer()
{
    glfwSwapBuffers(window);
}
