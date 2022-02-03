/*
CH-230-A
a12p7.cpp
Aditya Ojha
ad.ojha@jacobs-university.de
*/
#include <iostream>
#include "Square.h"
/*parametric constructor*/
Square::Square(const char *n, double a) : Rectangle(n, a, a) {
    side = a;
}
/*destructor*/
Square::~Square() {
}

/*methods for calculating area and perimeter*/
double Square::calcArea() const {
	std::cout << "calcArea of Square...";
	return side*side;
}

double Square::calcPerimeter() const {
	std::cout << "calcPerimeter of Square...";
	return (side + side + side + side);
}
