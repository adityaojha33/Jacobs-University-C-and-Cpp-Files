/*
CH-230-A
a10p2.cpp
Aditya Ojha
ad.ojha@jacobs-university.de
*/
#include <iostream>
#include <cstdlib>
#include "Critter.h"

using namespace std;

int main(int argc, char **argv)
{
	Critter c;

	string name;
	int hunger, boredom;
	double height;

	cout << endl
		 << "Please enter data: " << endl;
	/*getting the inputs*/
	cout << "Name: ";
	getline(cin, name);
	c.setName(name);
	c.setName(name);
	cout << "Height(in m): ";
	cin >> height;
	c.setHeight(height);
	cout << "Hunger: ";
	cin >> hunger;
	c.setHunger(hunger);
	cout << "Boredom: ";
	cin >> boredom;
	c.setBoredom(boredom);

	cout << "You have created:" << endl;
	/*printing*/
	c.print();
	return 0;
}
