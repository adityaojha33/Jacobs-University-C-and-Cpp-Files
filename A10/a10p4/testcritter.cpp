/*
CH-230-A
a10p4.cpp
Aditya Ojha
ad.ojha@jacobs-university.de
*/
#include <iostream>
#include <cstdlib>
#include "Critter.h"

using namespace std;

int main(int argc, char** argv)
{
	string name;
	int hunger;
	double height;
    int boredom;
	/*getting input*/
	cout << "Enter Data:" << endl;
	cout << "Name: ";
	getline(cin, name);
	cout << "Hunger Level: ";
	cin >> hunger;
	getchar();
    cout<<"Height:";
    cin>>height;
    cout<<"Boredom Level:";
    cin>>boredom;
	
	Critter construct1; //default constructor
	construct1.print();

	Critter construct2(name);
	/*constructor with name only passed*/
	construct2.setName(name);
	construct2.print();

	Critter construct3(name, hunger, boredom, height);
	/*constructor where every parameter is passed*/
	construct3.setName(name);
	construct3.setHunger(hunger);
	construct3.setboredom(boredom);
	construct3.setheight(height);
	construct3.print();

	Critter construct4(name, hunger, boredom);
	/*constructor where every parameter except height is passed*/
	construct4.setName(name);
    construct4.setHunger(hunger);
    construct4.setboredom(boredom);
	construct4.print();

    return 0;
}
