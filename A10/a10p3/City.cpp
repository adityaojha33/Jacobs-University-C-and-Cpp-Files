/*
CH-230-A
a10p3.cpp
Aditya Ojha
ad.ojha@jacobs-university.de
*/
#include <iostream>
#include "City.h"

using namespace std;

/*implementation of setters*/
void City::setName(string& newname) {
	name = newname;
}

void City::setpopulation(int newpopulation) {
	population = newpopulation;
}

void City::setMayor(std::string& newmayor) {
	mayor = newmayor;
}

void City::setarea(double newarea) {
	area = newarea;
}

/*printing the data*/
void City::print() {
	cout << "The city " << name << " with a population of " << population << " has an area of " << area << "square km. The mayor is " << mayor << "." << endl;
}
/*implementing getters*/
int City::getpopulation() {
	return population;
}


double City::getarea() {
	return area;
}
