#ifndef _QUAD_H_
#define _QUAD_H_

#include "primitive.h"
#include <GL/glew.h>

class Quad : public Primitive {
public:
    Quad(float vertices[], unsigned int vAttr, unsigned int vSize,
        unsigned int indices[], unsigned int iSize);

    void init();
    void initWithTexture();
    void draw();

private:
    unsigned int vSize, iSize, vAttributes;
};

#endif