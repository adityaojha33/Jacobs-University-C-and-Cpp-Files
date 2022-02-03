/*
CH-230-A
a12p7.cpp
Aditya Ojha
ad.ojha@jacobs-university.de
*/
#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>
using namespace std;
#include "Area.h"
#include "Circle.h"
#include "Ring.h"
#include "Rectangle.h"
#include "Square.h"

int main()
{
	Area *list[4]; // array of pointers "list" pointing to each object in Area class
	/*4 because of 4 possible colors*/
	/*generating a random number through time*/
	srand((unsigned)time(NULL));
	// so that every time it runs different random number is generated
	const char *color[4] = {"RED", "BLACK", "VIOLET", "BLUE"};
	// 4 different colors
	for (int i = 0; i < 25; i++)
	{ 
		/*assigning random color, size to each shape*/
		Ring name1(color[rand() % 4], rand() % 95 + 6, rand() % 95 + 6);
		Circle name2(color[rand() % 4], rand() % 95 + 6);
		Rectangle name3(color[rand() % 4], rand() % 95 + 6, rand() % 95 + 6);
		Square name4(color[rand() % 4], rand() % 95 + 6);
		// storing pointers to the created objects
		list[0] = &name1;
		list[1] = &name2;
		list[2] = &name3;
		list[3] = &name4;
		int x = rand() % 4;
		/*printing area and perimeter for each shape that is randomly chosen*/
		double area = list[x]->calcArea();
		double perimeter = list[x]->calcPerimeter();
		cout << "\n\nThe area of this shape is: " << abs(area) << endl;
		cout << "The perimeter of this shape is: " << abs(perimeter) << endl;
		cout << endl;
	}
	return 0;
}
