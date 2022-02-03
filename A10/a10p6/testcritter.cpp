/*
CH-230-A
a10p6.cpp
Aditya Ojha
ad.ojha@jacobs-university.de
*/
#include <iostream>
#include <cstdlib>
#include "Critter.h"

using namespace std;

int main(int argc, char **argv)
{
	string name;
	int hunger;
	double height, thirst;
	int boredom;
	/*getting the inputs*/
	cout << "Enter Data:" << endl;
	cout << "Name: ";
	getline(cin, name);
	cout << "Hunger: ";
	cin >> hunger;
	getchar();
	cout << "Height: ";
	cin >> height;
	cout << "Boredom Level: ";
	cin >> boredom;
	cout << "Thirst level: ";
	cin >> thirst;

	Critter construct1; //default constructor
	construct1.setHunger(2);
	construct1.print();

	Critter construct2(name);
	/*constructor with name only passed*/
	construct2.setHunger(2);
	construct2.print();

	Critter construct3(name, hunger, boredom, height);
	/*constructor where every parameter except thirst is passed*/
	construct3.setHunger(2);
	construct3.print();

	Critter construct4(name, hunger, boredom);
	/*constructor where every parameter except height and thirst is passed*/
	construct4.setHunger(2);
	construct4.print();

	Critter construct5(name, hunger, boredom, height, thirst);
	/*constructor where every parameter is passed*/
	construct5.setHunger(2);
	construct5.print();

	return 0;
}
