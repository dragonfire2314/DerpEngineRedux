#ifndef OBJECT_H
#define OBJECT_H

#include <cstdint>
#include <vector>

class Object
{
private:
    
public:
    Object();
    ~Object();

    std::vector<float> verticies;
    std::vector<uint32_t> indices;

    unsigned int VAO;
};


#endif