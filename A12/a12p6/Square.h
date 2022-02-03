/*
CH-230-A
a12p6.cpp
Aditya Ojha
ad.ojha@jacobs-university.de
*/
#ifndef _Square_H
#define _Square_H
#include "Rectangle.h"

/*public and private properties for square class*/
/*square inherited from rectangle*/
class Square : public Rectangle {
	public:
		Square(const char *n, double a); //parametric constructor
		~Square(); //destructor
		double calcArea() const; //for calculating area of square
		double calcPerimeter() const; //for calculating perimeter of square
	private:
		double side;
};

#endif
