#include <application.hpp>

#include <toml.hpp>

#include <iostream>

using namespace std::literals;

ApplicationConfig::ApplicationConfig()
{

}

void ApplicationConfig::loadConfig(std::string configFile)
{
    auto config = toml::parse_file(configFile);
    window_name = config["window"]["name"].value_or("");
    window_width = config["window"]["width"].value_or(0);
    window_height = config["window"]["height"].value_or(0);
}

void framebuffer_size_callback(GLFWwindow* window, int width, int height)
{
    
}

Application::Application(ApplicationConfig* _config) : config(_config)
{

}

Application::~Application()
{

}

void Application::processInput(GLFWwindow *window)
{
    if(glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
        glfwSetWindowShouldClose(window, true);
}

void Application::setup()
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
        throw std::runtime_error("Failed to create GLFW window");;
    }
    glfwMakeContextCurrent(window);

    glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);  

    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
    {
        std::cout << "Failed to initialize GLAD" << std::endl;
        throw std::runtime_error("Failed to initialize GLAD");
    }

    renderer = new OpenGL();
    renderer->setup(config->get_window_width(), config->get_window_height());
}

void Application::run()
{
    setup();

    while(!glfwWindowShouldClose(window))
    {
        processInput(window);

        //Time Stuff
        float currentFrame = glfwGetTime();
        deltaTime = currentFrame - lastFrame;
        lastFrame = currentFrame;  

        renderer->clear();

        

        //Display buffer
        
    }

    glfwTerminate();
}
