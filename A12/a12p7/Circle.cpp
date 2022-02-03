/*
CH-230-A
a12p7.cpp
Aditya Ojha
ad.ojha@jacobs-university.de
*/
#include <iostream>
#include <cmath>
#include "Circle.h"

/*parametric constructor*/
Circle::Circle(const char *n, double a) : Area(n) {
	radius = a;
}

/*destructor*/
Circle::~Circle() {
}
/*methods for calculating area and perimeter*/
double Circle::calcArea() const {
	std::cout << "calcArea of Circle...";
	return radius * radius * M_PI;
}

double Circle::calcPerimeter() const {
	std::cout << "calcPerimeter of Circle...";
	return 2 * radius * M_PI;
}

