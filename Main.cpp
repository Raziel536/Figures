#include <iostream>
#include "Figure.h"
#include "Triangle.h"
#include "RTriangle.h"
#include "ITriangle.h"
#include "ETriangle.h"
#include "Parallelogram.h"
#include "Rectangle.h"
#include "Square.h"
#include "Ellipse.h"
#include "Circle.h"



int main()
{
	Triangle* T = new Triangle(1, 2.5, 3);
	std::cout << T->getName() << std::endl;
	std::cout << "P = " << T->calculateP() << std::endl;
	std::cout << "S = " << T->calculateS() << std::endl;


	RTriangle* Rt = new RTriangle(4, 3);
	std::cout << Rt->getName() << std::endl;
	std::cout << "P = " << Rt->calculateP() << std::endl;
	std::cout << "S = " << Rt->calculateS() << std::endl;


	ITriangle* It = new ITriangle(2, 2);
	std::cout << It->getName() << std::endl;
	std::cout << "P = " << It->calculateP() << std::endl;
	std::cout << "S = " << It->calculateS() << std::endl;


	ETriangle* Et = new ETriangle(3);
	std::cout << Et->getName() << std::endl;
	std::cout << "P = " << Et->calculateP() << std::endl;
	std::cout << "S = " << Et->calculateS() << std::endl;


	Parallelogram* Par = new Parallelogram(2, 3, 60);
	std::cout << Par->getName() << std::endl;
	std::cout << "P = " << Par->calculateP() << std::endl;
	std::cout << "S = " << Par->calculateS() << std::endl;


	Rectangle* Rec = new Rectangle(3, 8);
	std::cout << Rec->getName() << std::endl;
	std::cout << "P = " << Rec->calculateP() << std::endl;
	std::cout << "S = " << Rec->calculateS() << std::endl;


	Square* Sq = new Square(5);
	std::cout << Sq->getName() << std::endl;
	std::cout << "P = " << Sq->calculateP() << std::endl;
	std::cout << "S = " << Sq->calculateS() << std::endl;


	Ellipse* Ell = new Ellipse(6, 4);
	std::cout << Ell->getName() << std::endl;
	std::cout << "P = " << Ell->calculateP() << std::endl;
	std::cout << "S = " << Ell->calculateS() << std::endl;


	Circle* Cir = new Circle(5);
	std::cout << Cir->getName() << std::endl;
	std::cout << "P = " << Cir->calculateP() << std::endl;
	std::cout << "S = " << Cir->calculateS() << std::endl;

	
	return 0;
}

