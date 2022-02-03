/*
CH-230-A
a11p5.cpp
Aditya Ojha
ad.ojha@jacobs-university.de
*/
/* 
	Classic shape examples: an inheritance tree in a geometric context
*/
#ifndef __SHAPES_H
#define __SHAPES_H
#include <string>
#include <cmath>

class Shape {			// base class
	private:   				// private access modifier: could also be protected
		std::string name;   // every shape will have a name
	public:
		Shape(const std::string&);  // builds a shape with a name
		Shape();					// empty shape
		Shape(const Shape&);		// copy constructor
		void printName() const ;  	// prints the name  
		void setName(std::string& newname);
		std::string getName();
		~Shape();
};

class CenteredShape : public Shape {  // inherits from Shape
	private: 
		double x,y;  // the center of the shape
	public:
		CenteredShape(const std::string&, double, double);  // usual three constructors
		CenteredShape();
		CenteredShape(const CenteredShape&); //copy constructor
		void move(double, double);	// moves the shape, i.e. it modifies it center
		void setxcoordinate(double newnx);
		void setycoordinate(double newny);
		double getxcoordinate();
		double getycoordinate();
		~CenteredShape();
};

class RegularPolygon : public CenteredShape { // a regular polygon is a centered_shape with a number of edges
	private: 
		int EdgesNumber;
	public:
		RegularPolygon(const std::string&, double, double, int);
		RegularPolygon(); // empty constructor
		RegularPolygon(const RegularPolygon&); //copy constructor
		void setedges(int newedges); //setter
		int getedges(); //getter
		~RegularPolygon();
};

class Circle : public CenteredShape {  // a Circle is a shape with a center and a radius
	private:
		double Radius;
	public:
		Circle(const std::string&, double, double, double); //parametric constructor
		Circle(); //empty
		Circle(const Circle&); //copy constructor
		void setradius(double newradius); //setter
		double getradius(); //getter
		double perimeter(); // method for perimeter
		double area(); //method for area
		~Circle();
};

class Rectangle : public RegularPolygon{
	private:
		double width;
		double height;
	public:
		Rectangle(const std::string&, double, double, double, double); //parametric constructor
		Rectangle(); //empty
		Rectangle(const Rectangle&); //copy constructor
		void setwidth(double newwidth); //setter
		void setheight(double newheight); //setter
		double getwidth(); //getter
		double getheight(); //getter
		double perimeter(); // method for perimeter
		double area(); //method for area
		~Rectangle();
};

class Square : public Rectangle{
	private:
		double length;
	public:
		Square(const std::string&, double, double, double); //parametric constructor
		Square(); //empty
		Square(const Square&); //copy constructor
		void setlength(double newnlength); //setter
		double getlength();//getter
		double perimeter(); // method for perimeter
		double area(); // method for area
		~Square();
};
    
#endif
