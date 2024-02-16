#ifndef _TRIANGLE_H_
#define _TRIANGLE_H_

#include <GL/glew.h>
#include "primitive.h"

class Triangle : public Primitive {
public:
    Triangle(float vertices[], unsigned int vAttr, unsigned int vSize,
         unsigned int indices[], unsigned int iSize);

    void init();
    void initWithTexture();
    void draw();

private:
    unsigned int vSize, iSize, vAttributes;

};


#endif