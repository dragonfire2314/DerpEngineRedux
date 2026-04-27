#ifndef APPLICATION_HPP
#define APPLICATION_HPP

#include <global.hpp>
#include <string>

#include <renderer/opengl/opengl.hpp>

class ApplicationConfig
{
private:
    int window_width = 100;
    int window_height = 100;

    std::string window_name = "BAD";
public:
    ApplicationConfig();
    void loadConfig(std::string configFile);

    int get_window_width() { return window_width; }
    int get_window_height() { return window_height; }
    std::string get_window_name() { return window_name; }
};

class Application 
{
private:
    void processInput(GLFWwindow *window);
    void setup();
public:
    Application(ApplicationConfig* _config);
    ~Application();

    void run();
private:
    GLFWwindow* window;
    OpenGL* renderer;
    ApplicationConfig* config;

    float deltaTime = 0.0f;	// Time between current frame and last frame
    float lastFrame = 0.0f; // Time of last frame
};

#endif