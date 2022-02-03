/*
CH-230-A
a12p7.cpp
Aditya Ojha
ad.ojha@jacobs-university.de
*/
#ifndef _RECTANGLE_H
#define _RECTANGLE_H
#include "Area.h"

/*public and private properties for rectangle class*/
class Rectangle : public Area {
	public:
		Rectangle(const char *n, double a, double b);
		~Rectangle();
		double calcArea() const;
		double calcPerimeter() const;
	private:
		double length;
		double width;
};

#endif
