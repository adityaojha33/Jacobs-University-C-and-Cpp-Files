/*
CH-230-A
a10p6.cpp
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
	height = 5;
	/*value of thirst as hunger when not called*/
	thirst = todouble(hunger);
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
	/*value of thirst as hunger when not called*/
	thirst = todouble(hunger);
}

Critter::Critter(string &newname, int newhunger, int newboredom, double newheight)
{
	/*third constructor where every parameter (not thirst) is passed*/
	cout << "Constructor three is being called" << endl;
	name = newname;
	boredom = newboredom;
	hunger = newhunger;
	height = newheight;
	/*value of thirst as hunger when not called*/
	thirst = todouble(hunger);
}
Critter::Critter(string &newname, int newhunger, int newboredom)
{
	/*third constructor where every parameter(except height and thirst) is passed*/
	cout << "Constructor three (without height) is being called" << endl;
	name = newname;
	boredom = newboredom;
	hunger = newhunger;
	height = 10;
	/*value of thirst as hunger when not called*/
	thirst = todouble(hunger);
}
Critter::Critter(string &newname, int newhunger, int newboredom, double newheight, double newthirst)
{
	/*constructor where every is passed*/
	cout << "Constructor four is being called" << endl;
	name = newname;
	boredom = newboredom;
	hunger = newhunger;
	height = 10;
	thirst = newthirst;
}

/*implementing setter*/
void Critter::setName(string &newname)
{
	name = newname;
}

void Critter::setHunger(int newhunger)
{
	hunger = todouble(newhunger);
}

void Critter::setheight(double newheight)
{
	height = newheight;
}
void Critter::setboredom(int newboredom)
{

	boredom = newboredom;
}
void Critter::setthirst(double newthirst)
{

	thirst = newthirst;
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
double Critter::getthirst()
{
	return thirst;
}

double Critter::todouble(int hunger)
{

	return (double)hunger / 10;
}

int Critter::tointeger(double hunger)
{

	return (int)(hunger * 10);
}

void Critter::print()
{
	/*printing the data*/
	hunger = tointeger(hunger);
	cout << "I am " << name << ". I am " << height << "m tall";
	cout << ". My hunger level is " << hunger;
	cout << ". My boredom level is " << boredom << ".";
	cout << " My thirst level is " << thirst << endl;
	cout << endl;
}