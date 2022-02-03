/*
CH-230-A
a11p5.cpp
Aditya Ojha
ad.ojha@jacobs-university.de
*/

#include <iostream>
#include "Shapes.h"

using namespace std; 

/*default constructor for shape*/
Shape::Shape()
{
	cout << "Default constructor of Shape called" << endl;
	name = "Default";
}
/*copy constructor for shape*/
Shape::Shape(const Shape& n)
{
	cout << "Copy constructor of Shape called" << endl;
	name = n.name;
}

/*parametric constructor for shape*/
Shape::Shape(const string& n) : name(n) {
}

/*print name function*/
void Shape::printName() const {
	cout << name << endl;
}
/*settter and getter for Name*/
void Shape::setName(string& newname)
{
	name = newname;
}

string Shape::getName()
{
	return name;
}

/*default constructor for Centered shape*/
CenteredShape::CenteredShape()
{
	cout << "Default constructor of Centered Shape called" << endl;
	x=0;
	y=0;
}
/*copy constructor for Centered shape*/
CenteredShape::CenteredShape(const CenteredShape& q) : Shape(q)
{
	cout << "Copy constructor of Centered Shape called" << endl;
	x = q.x;
	y = q.y;
}
/*parametric constructor for Centered shape*/
CenteredShape::CenteredShape(const string& n, double nx, double ny): Shape(n) {
	x = nx;
	y = ny;
}
/*settter and getter for center coordinates*/
void CenteredShape::setxcoordinate(double newnx)
{
	x = newnx;
}
void CenteredShape::setycoordinate(double newny)
{
	y = newny;
}
double CenteredShape::getxcoordinate()
{
	return x;
}

double CenteredShape::getycoordinate()
{
	return y;
}

/*default constructor for Regular Polygon*/
RegularPolygon::RegularPolygon()
{
	cout << "Default constructor of Regular Polygon called" << endl;
	EdgesNumber = 0;
}
/*copy constructor for Regular Polygon*/
RegularPolygon::RegularPolygon(const RegularPolygon& q) : CenteredShape(q)
{
	cout << "Copy constructor of Regular Polygon called" << endl;
	EdgesNumber = q.EdgesNumber;
}
/*Parametric constructor for Regular Polygon*/
RegularPolygon::RegularPolygon(const string& n, double nx, double ny, int nl) :
	CenteredShape(n,nx,ny) 
{
	EdgesNumber = nl;
}

/*setter and getter for edges number*/
void RegularPolygon::setedges(int newedges)
{
	EdgesNumber = newedges;
}

int RegularPolygon::getedges()
{
	return EdgesNumber;
}

/*default constructor for Circle*/
Circle::Circle()
{
	cout << "Default constructor of Circle called" << endl;
	Radius = 0;
}
/*copy constructor for Circle*/
Circle::Circle(const Circle& q) : CenteredShape(q)
{
	cout << "Copy constructor of Circle called" << endl;
	Radius = q.Radius;
}
/*parametric constructor for Circle*/
Circle::Circle(const string& n, double nx, double ny, double r) : 
  CenteredShape(n,nx,ny) 
{
	Radius = r;
}

/*setter and getter for Radius*/
void Circle::setradius(double newradius)
{
	Radius = newradius;
}

double Circle::getradius()
{
	return Radius;
}

/*default constructor for Rectangle*/
Rectangle::Rectangle()
{
	cout << "Default constructor of Rectangle called" << endl;
	width =0;
	height = 0;
}	
/*copy constructor for Rectangle*/
Rectangle::Rectangle(const Rectangle& q) : RegularPolygon(q)
{
	cout << "Copy constructor of Rectangle called" << endl;
	width = q.width;
	height = q.height;
}

/*parametric constructor for Rectangle*/
Rectangle::Rectangle(const string& n, double nx, double ny, double nwidth, double nheight) :
	RegularPolygon(n,nx,ny,4)
{
	width = nwidth;
	height = nheight;
}

/*setter and getter for width and height*/
void Rectangle::setwidth(double newwidth)
{
	width = newwidth;
}
void Rectangle::setheight(double newheight)
{
	height = newheight;
}
double Rectangle::getwidth()
{
	return width;
}
double Rectangle::getheight()
{
	return height;
}

/*default constructor for Square*/
Square::Square()
{
	cout << "Default constructor of Square called" << endl;
	length = 0;
}
/*copy constructor for Square*/
Square::Square(const Square& q) : Rectangle(q)
{
	cout << "Copy constructor of Square called" << endl;
	length = q.length;
}
/*parametric constructor for Square*/
Square::Square(const string& n, double nx, double ny, double nside) :
	Rectangle(n,nx,ny,nside, nside)
{
	length = nside;
}
/*setter and getter for length*/
void Square::setlength(double newnlength)
{
	length = newnlength;
}
double Square::getlength()
{
	return length;
}

/*calculation of perimeters for circle, rectangle and square*/
double Circle::perimeter() 
{
	return (2 * M_PI * Radius);
}
double Rectangle::perimeter() 
{
	return (width+width+height+height);
}
double Square::perimeter() 
{
	return (4 * length);
}
/*calculation of area for circle, rectangle and square*/
double Circle::area() 
{
	return (M_PI * Radius * Radius);
}
double Rectangle::area() 
{
	return (width * height);
}
double Square::area() 
{
	return (length * length);
}

/*Destructors for different shapes*/
Shape::~Shape()
{
	cout << "Shape Destructed\n";
}

CenteredShape::~CenteredShape()
{
	cout << "CenteredShape Destructed\n";
}

RegularPolygon::~RegularPolygon()
{
	cout << "RegularPolygon Destructed\n";
}

Circle::~Circle()
{
	cout << "Circle Destructed\n";
}

Rectangle::~Rectangle()
{
	cout << "Rectangle Destroyed\n";
}

Square::~Square()
{
	cout << "Square Destroyed\n";
}