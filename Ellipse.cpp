#include "Ellipse.h"

Ellipse::Ellipse(double a, double b)
{
	_name = "Ellipse";
	_a = a;
	_b = b;

	assert( (a > 0)&&(b > 0) );
}

double Ellipse::calculateP() const
{
	return 4 * ((_a * _b * Pi) + (_a - _b) * (_a - _b) / (_a + _b));
}

double Ellipse::calculateS() const
{
	return _a * _b * Pi;
}
