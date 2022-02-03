/*
CH-230-A
a11p3.cpp
Aditya Ojha
ad.ojha@jacobs-university.de
*/
#include <iostream>
#include "Creature.h"

using namespace std;

int main()
{ 
    cout << "Creating a Creature.\n";
    /*calling for creature*/
    Creature c;
    c.run();

    cout << "\nCreating a Wizard.\n";
    /*calling for wizard*/
    Wizard w;
    w.run();
    w.hover();

    cout << "\nCreating a Dragon.\n";
    /*calling for dragon*/
    Dragons d;
    d.run();
    d.spitfire();

    cout << "\nWizard created a Witcher to fight the Dragon.\n";
    /*calling for witcher*/
    Witcher wit;
    wit.run();
    wit.cointoss();

    return 0;
} 
