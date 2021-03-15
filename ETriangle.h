#pragma once
#include "ITriangle.h"


class ETriangle : public ITriangle
{
	public: 
		ETriangle(double a);

protected:
	double _a, _b, _c;
};



