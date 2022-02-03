/*
CH-230-A
a12p6.cpp
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
		/*added for calculation of Perimeter*/
		double calcPerimeter() const;
	private:
		double length;
		double width;
};

#endif
