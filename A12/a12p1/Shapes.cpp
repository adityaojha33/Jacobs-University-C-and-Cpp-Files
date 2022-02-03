/*
CH-230-A
a12p1.cpp
Aditya Ojha
ad.ojha@jacobs-university.de
*/
//please refer to shapes.h for methods documentation

#include <iostream>
#include "Shapes.h"
#include <cmath>
#include <string>

using namespace std;

Shape::Shape(const string &n) : name(n)
{
}

/*to print the name of Shape*/
void Shape::printName() const
{
	cout << name << endl;
}

CenteredShape::CenteredShape(const string &n, double nx, double ny) : Shape(n)
{
	x = nx;
	y = ny;
}

RegularPolygon::RegularPolygon(const string &n, double nx, double ny, int nl) :
 CenteredShape(n, nx, ny)
{
	EdgesNumber = nl;
}

Circle::Circle(const string &n, double nx, double ny, double r) :
 CenteredShape(n, nx, ny)
{
	Radius = r;
}

/*taking 5 parameters for hexagon*/
Hexagon::Hexagon(const string &n, double nx, double ny, double s, const string c) :
 RegularPolygon(n, nx, ny, 6) /*6 because hexagon has 6 sides*/
{
	cout << "Parametric Constructor called" << endl;

	color = c;
	side = s;
}

/*copy constructor*/
Hexagon::Hexagon(const Hexagon &h) : RegularPolygon(h.name, h.x, h.y, 6)
/*6 because hexagon has 6 sides*/
{
	cout << "Copy Constructor called\n";
	color = h.color;
	side = h.side;
}

/*setter and getter implementations*/
void Hexagon::setside(double newside)
{
	side = newside;
}
double Hexagon::getside()
{
	return side;
}

void Hexagon::setcolor(string &newcolor)
{
	color = newcolor;
}
string Hexagon::getcolor()
{
	return color;
}

/*calculation of perimeter*/
double Hexagon::perimeter()
{
	return (side + side + side + side + side + side);
}

/*calculation of area*/
double Hexagon::area()
{

	return ((3 * sqrt(3) * side * side)/ 2);
}

/*destructor for hexagon*/
Hexagon::~Hexagon()
{
	cout << "Hexagon destructed" << endl;
}