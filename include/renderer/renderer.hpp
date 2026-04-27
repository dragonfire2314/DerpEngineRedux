/*
    This is a renderer class, as of now it implements its rendering using opengl. In the future I would like to expand the options 
    to atleast vulkan and turn this class into a polymorphic abstraction of a renderer. 
*/

#ifndef RENDERER_HPP
#define RENDERER_HPP

#include <global.hpp>
#include <string>
#include <vector>
#include <object.hpp>

class Renderer
{
private:

public:
    Renderer();
    ~Renderer();

    void draw();

    void addObject(Object* obj);

    void clearBuffer();
private:
    std::vector<Object*> objList;

    unsigned int shaderProgram;
};

#endif