/*
CH-230-A
a12p6.cpp
Aditya Ojha
ad.ojha@jacobs-university.de
*/
#include <iostream>
using namespace std;
#include "Area.h"
#include "Circle.h"
#include "Ring.h"
#include "Rectangle.h"
#include "Square.h"

/*
		   ______
		   |Area|
		 
		 -----------
		 /         \
	 Circle 	 Rectangle
	  /				  \
	Ring			Square
	  \				  /
	    \____________/
		|testvirtual|
		-------------
*/
 
const int num_obj = 7;
int main() {
	Area *list[num_obj];  // array of pointers "list" pointing to each object in Area class
	int index = 0;		//for starting from 0th object in the array
	int indexb = 0;
	double sum_area = 0.0;	// initialization of the value to 0 
	double sum_perimeter = 0.0;
	cout << "Creating Ring: ";
	Ring blue_ring("BLUE", 5, 2);	// creation different objects of different shapes class
	cout << "Creating Circle: ";
	Circle yellow_circle("YELLOW", 7);
	cout << "Creating Rectangle: ";
	Rectangle green_rectangle("GREEN",5,6);
	cout << "Creating Circle: ";
	Circle red_circle("RED", 8);
	cout << "Creating Rectangle: ";
	Rectangle black_rectangle("BLACK", 10, 20);
	cout << "Creating Ring: ";
	Ring violet_ring("VIOLET", 100, 5);
	cout << "Creating Square: ";
	Square brown_square("BROWN", 7);
	list[0] = &blue_ring; // storing pointers to the created objects of area class(upcasting)
	list[1] = &yellow_circle;
	list[2] = &green_rectangle;
	list[3] = &red_circle;
	list[4] = &black_rectangle;
	list[5] = &violet_ring;
	list[6] = &brown_square;

	while (index < num_obj) {	// looping for area by summing each value of area
		(list[index])->getColor();				
		double area = list[index++]->calcArea(); // calling method of calculating area for each object
		sum_area += area;
	}

	while (indexb < num_obj) {	// looping for perimeter by summing each value of perimeter
		(list[indexb])->getColor();				
		double perimeter = list[indexb++]->calcPerimeter();
		sum_perimeter += perimeter;
	}

	cout << "\nThe total area is "
			<< sum_area << " units " << endl; // printing the value of total area
	cout << "\nThe total perimeter is "
			<< sum_perimeter<< " units " << endl; // printing the value of total perimeter
	return 0;
}
