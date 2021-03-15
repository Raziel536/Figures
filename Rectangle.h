#pragma once
#include "Parallelogram.h"

class Rectangle : public Parallelogram
{
public:
	Rectangle(double a, double b);

protected:
	double _a, _b;
};
