#include "Parallelogram.h"

Parallelogram::Parallelogram(double a, double b, double angle)
{
	_name = "Parallelogram";
		_a = a;
		_b = b;
		_angle = angle;
		assert(angle > 0);

}

double Parallelogram::calculateP() const {
 
	return (_a + _b) * 2;

}

double Parallelogram::calculateS() const {
	return _a * _b * sin(_angle * Pi / 180);
}