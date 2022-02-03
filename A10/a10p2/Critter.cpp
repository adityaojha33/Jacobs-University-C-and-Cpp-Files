/*
CH-230-A
a10p2.cpp
Aditya Ojha
ad.ojha@jacobs-university.de
*/
#include <iostream>
#include "Critter.h"

using namespace std;

/*setter methods*/
void Critter::setName(string& newname) {
	name = newname;
}

void Critter::setHunger(int newhunger) {
	hunger = newhunger;
}

void Critter::setBoredom(int newboredom) {
	boredom = newboredom;
}

void Critter::setHeight(double newheight) {
	height = newheight;
}

void Critter::print() {
	/*printing the data*/
	cout << "I am " << name << ". I am " << height << "m tall" << ". My hunger level is " << hunger << ". My boredom level is " << boredom << "." << endl;
}

/*getter methods*/
double Critter::getHeight() {
	return height;
}

int Critter::getHunger() {
	return hunger;
}

int Critter::getBoredom() {
	return boredom;
}
