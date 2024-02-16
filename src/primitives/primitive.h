#ifndef _PRIMITIVE_H_
#define _PRIMITIVE_H_

#include <GL/glew.h>
// #include <GLFW/glfw3.h>

// Primitves will need to be updated for Textured and Non-Textured variants
// Texture coordinates (annoyingly) do not work with my current attribute system for the vertices.
class Primitive {
public:
    void draw();
    void init();

protected:
    unsigned int VAO, VBO, EBO;
    float* vertices;
    unsigned int* indices;
};

#endif