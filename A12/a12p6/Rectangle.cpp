/*
CH-230-A
a12p6.cpp
Aditya Ojha
ad.ojha@jacobs-university.de
*/
#include <iostream>
#include "Rectangle.h"

/*parametric constructor*/
Rectangle::Rectangle(const char *n, double a, double b) : Area(n) {
    length = a;
    width = b;
}
/*destructor*/
Rectangle::~Rectangle() {
}
/*methods for calculating area and perimeter*/
double Rectangle::calcArea() const {
	std::cout << "calcArea of Rectangle...";
	return length*width;
}

double Rectangle::calcPerimeter() const {
	std::cout << "calcPerimeter of Rectangle...";
	return (length + length + width + width);
}
