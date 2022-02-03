/*
CH-230-A
a12p7.cpp
Aditya Ojha
ad.ojha@jacobs-university.de
*/
#ifndef _RING_H
#define _RING_H
#include "Circle.h"

/*public and private properties for ring class*/
class Ring : public Circle {
	public:
		Ring(const char *n, double outer, double inner);
		~Ring();
		double calcArea() const;
		double calcPerimeter() const;

	private:
		double innerradius;
};

#endif
