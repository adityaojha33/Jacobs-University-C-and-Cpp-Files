/*
CH-230-A
a11p4.cpp
Aditya Ojha
ad.ojha@jacobs-university.de
*/
#include <iostream>
#include <string>
#include "Creature.h"

using namespace std;

int main()
{
    string choice;
    /*infinite loop*/
    while (1)
    {
        /*getting the input to create creature*/
        cout << "\nEnter option: ";
        cin >> choice;
        if (choice == "wizard") /*choice as wizard*/
        {
            cout << "\nCreating a Wizard.\n";
            Wizard *w;
            /*dynamically allocating*/
            w = new Wizard[1];
            w->run();
            w->hover();
            delete []w;
        }
        else if (choice == "object1") /*choice as object1 (Dragon)*/
        {
            cout << "\nCreating a Dragon.\n";
            Dragons *d;
            /*dynamically allocating*/
            d = new Dragons[1];
            d->run();
            d->spitfire();
            delete [] d;
        }
        else if (choice == "object2") /*choice as object2 (Witcher)*/
        {
            cout << "\nWizard created a Witcher to fight the Dragon.\n";
            Witcher *wit;
            /*dynamically allocating*/
            wit = new Witcher[1];
            wit->run();
            wit->cointoss();
            delete [] wit;
        }
        else if (choice == "quit") /*when quit is entered*/
        {
            break;
        }
    }

    return 0;
}
