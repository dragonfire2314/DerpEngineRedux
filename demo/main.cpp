#include <iostream>
#include <memory>

#include <window.hpp>
#include <renderer/renderer.hpp>
#include <object.hpp>

float vertices[] = {
     0.5f,  0.5f, 0.0f,  // top right
     0.5f, -0.5f, 0.0f,  // bottom right
    -0.5f, -0.5f, 0.0f,  // bottom left
    -0.5f,  0.5f, 0.0f   // top left 
};
unsigned int indices[] = {  // note that we start from 0!
    0, 1, 3,  // first Triangle
    1, 2, 3   // second Triangle
};

int main()
{
    std::shared_ptr<Window> window(new Window(800, 600, "DerpReduxDemo"));
    std::shared_ptr<Renderer> renderer(new Renderer());
    window->bindRenderer(renderer.get());

    // Cammera* cam = new Camera();

    std::shared_ptr<Object> triangle(new Object());
    triangle->verticies = std::vector<float>(vertices, vertices + sizeof(vertices));
    triangle->indices = std::vector<unsigned int>(indices, indices + sizeof(indices));

    renderer->addObject(triangle.get());
    
    while (!window->shouldClose()) 
    {
        //Texture manager
        //Obj manager
        //Shader manager
        // Object* obj = new Object("cube.obj");
        // obj.draw();
        
        


        renderer->clearBuffer();
        renderer->draw();


        window->swapBuffer();
        window->pollEvents();
    }

    return 0;
}