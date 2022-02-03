/*
CH-230-A
a12p6.cpp
Aditya Ojha
ad.ojha@jacobs-university.de
*/
#include <iostream>
#include <cstring>
#include "Area.h"
using namespace std;

Area::Area(const char* n) {
	/*calling the constructor for area*/
	strncpy(color, n, 10);
	cout << "Area constructor being called...\n";
}

/*destructor for area*/
Area::~Area() {
}
/*color getter*/
void Area::getColor() const {
	cout << "\n" << color << ": ";
}
