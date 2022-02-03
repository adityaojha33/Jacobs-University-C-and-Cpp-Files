/*
CH-230-A
a10p4.cpp
Aditya Ojha
ad.ojha@jacobs-university.de
*/
#include <iostream>
#include "Critter.h"

using namespace std;

Critter::Critter()
{
	/*default critter*/
	cout << "Constructor one is being called" << endl;
	name = "default_critter";
	boredom = 0;
	hunger = 0;
	/*setting height to 5*/
	height = 5;
}

Critter::Critter(string &newname)
{
	/*second constructor where only name is passed*/
	cout << "Constructor two is being called" << endl;
	name = newname;
	boredom = 0;
	hunger = 0;
	/*setting height to 5*/
	height = 5;
}

Critter::Critter(string &newname, int newhunger, int newboredom, double newheight)
{
	/*third constructor where every parameter is passed*/
	cout << "Constructor three is being called" << endl;
	name = newname;
	boredom = newboredom;
	hunger = newhunger;
	height = newheight;
}
Critter::Critter(string &newname, int newhunger, int newboredom)
{
	/*third constructor where every parameter(except height) is passed*/
	cout << "Constructor three (without height) is being called" << endl;
	name = newname;
	boredom = newboredom;
	hunger = newhunger;
	/*setting height to 10*/
	height = 10;
}

/*implementing setters*/
void Critter::setName(string &newname)
{
	name = newname;
}

void Critter::setHunger(int newhunger)
{
	hunger = newhunger;
}

void Critter::setheight(double newheight)
{
	height = newheight;
}
void Critter::setboredom(int newboredom)
{

	boredom = newboredom;
}

/*implementing getters*/
int Critter::getHunger()
{
	return hunger;
}

double Critter::getheight()
{
	return height;
}
int Critter::getboredom()
{
	return boredom;
}

void Critter::print()
{
	/*printing data*/
	cout << "I am " << name << ". I am " << height << "m tall"
		 << ". My hunger level is " << hunger << ". My boredom level is " << boredom << "." << endl;
}
