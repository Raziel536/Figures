#pragma once
#include "Triangle.h"
#include "Figure.h"

class ITriangle : public Triangle {
	public:
		ITriangle(double a, double b);

protected:
	double _a, _b, _c;
};


