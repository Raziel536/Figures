#include "ITriangle.h"

ITriangle::ITriangle(double a, double b) 
    :Triangle(a, a, b)
{
    _name = "ITriangle";
    _c = _a;
}




