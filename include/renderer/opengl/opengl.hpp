#ifndef OPENGL_HPP
#define OPENGL_HPP

#include <global.hpp>

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <vector>

class OpenGL 
{
private:
public:
    OpenGL();
    ~OpenGL();

    void setup(int width, int height);
    void updateWindowSize(int width, int height);

    void clear();
    void draw();

    unsigned int compileShaders(const char* vertex_file_path, const char* fragment_file_path);
private:
};

#endif