#ifndef WINDOW_HPP
#define WINDOW_HPP

#include <global.hpp>
#include <renderer/renderer.hpp>
#include <string>

class Window
{
private:

public:
    Window(uint32_t _width, uint32_t _height, std::string_view _name);
    Window(uint32_t _width, uint32_t _height, std::string_view _name, Renderer* _renderer);
    ~Window();

    void bindRenderer(Renderer* _renderer);

    bool shouldClose();
    void swapBuffer();
    void pollEvents();
private:
    uint32_t width;
    uint32_t height;
    std::string window_name;

    GLFWwindow* window;
    Renderer* renderer;
};

#endif