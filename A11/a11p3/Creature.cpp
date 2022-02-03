/*
CH-230-A
a11p3.cpp
Aditya Ojha
ad.ojha@jacobs-university.de
*/
#include <iostream>
#include "Creature.h"

using namespace std;

/*value of distance as 10*/
Creature::Creature(): distance(10)
{}    

/*run method for Creature*/
void Creature::run() const
{ 
    cout << "running " << distance << " meters!\n";
}  

Creature::~Creature()
{
    //destructor of Creature
}

/*value of dist factor as 3*/
Wizard::Wizard() : distFactor(3)
{}  

void Wizard::hover() const
{
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}

/*destructor of wizard*/
Wizard::~Wizard()
{
    cout << "Wizard destroyed\n";
}

/*value of fire intensity as 8*/
Dragons::Dragons() : fireintensity(8)
{}  

void Dragons::spitfire() const
{
    cout << "Spitting fire of " << fireintensity << " intensity!\n";
}

/*destructor for Dragons*/
Dragons::~Dragons()
{
    cout << "Dragon destroyed\n";
}

/*value of number of coins to toss as 800*/
Witcher::Witcher() : numberofcoins(800)
{}  

void Witcher::cointoss() const
{
    cout << "Toss " << numberofcoins << " coins to your Witcher!\n\n";
}

/*destructor for witcher class*/
Witcher::~Witcher()
{
    cout << "Witcher destroyed\n";
}

