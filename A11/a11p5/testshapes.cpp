/*
CH-230-A
a11p5.cpp
Aditya Ojha
ad.ojha@jacobs-university.de
*/
#include<iostream>
#include "Shapes.h"
using namespace std;
int main(int argc, char** argv) {

  /*setting the values to call for different shapes*/
  Circle c("first circle", 3, 4, 7);
  RegularPolygon r("TRIANGLE", 1, 1, 3);
  Rectangle rect("RECTANGLE", 1, 1, 4.5, 1.7);
  Square sq("SQUARE", 1, 1, 4.8);
  Circle c1(c);

  /*printing the Names*/
  r.printName();
  c.printName();
  rect.printName();
  sq.printName();
  /*printing the perimeter and area*/
  cout << "Perimeter of Circle: " << c.perimeter() << endl;
  cout << "Perimeter of Rectangle: " << rect.perimeter() << endl;
  cout << "Perimeter of Square: " << sq.perimeter() << endl;
  cout << "Area of Circle: " << c.area() << endl;
  cout << "Area of Rectangle: " << rect.area() << endl;
  cout << "Area of Square: " << sq.area() << endl;
}
