#include "Figure.h"
#include <iostream>


std::string Figure::getName() const
{
	return Figure::_name;
}

void Figure::setName(std::string figureName)
{
	_name = figureName;
}
