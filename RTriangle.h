#pragma once
#include "Figure.h"
#include "Triangle.h"

class RTriangle : public Triangle {
    public:     
   
        RTriangle(double a, double b);

protected:
    double _a, _b;
};

