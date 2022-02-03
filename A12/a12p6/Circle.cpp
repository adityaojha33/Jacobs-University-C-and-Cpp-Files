/*
CH-230-A
a12p6.cpp
Aditya Ojha
ad.ojha@jacobs-university.de
*/
#include <iostream>
#include <cmath>
#include "Circle.h"

Circle::Circle(const char *n, double a) : Area(n) {
	/*parametric constructor*/
	radius = a;
}

Circle::~Circle() {
	/*destructor*/
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

