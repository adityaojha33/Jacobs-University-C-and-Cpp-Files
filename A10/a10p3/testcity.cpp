/*
CH-230-A
a10p3.cpp
Aditya Ojha
ad.ojha@jacobs-university.de
*/
#include <iostream>
#include <cstdlib>
#include "City.h"

using namespace std;

int main(int argc, char** argv)
{
    /*Three instances*/
	City Bremen;
    City Paris;
    City London;

	string name, mayor;
	int population;
	double area;

    /*taking input for each instances*/
	cout << endl << "Please enter data for Bremen: " << endl;
	cout << "Name of City: ";
    getline(cin, name);
    Bremen.setName(name);
    cout << "Population: ";
    cin >> population;
    Bremen.setpopulation(population);
    cout << "Area: ";
    cin >> area;
    Bremen.setarea(area);
    getchar();
    cout << "Mayor: ";
    getline(cin, mayor);
    Bremen.setMayor(mayor);
    cout << "You have created:" << endl;
    /*printing for bremen*/
    Bremen.print();
    
    cout << endl << "Please enter data for Paris: " << endl;
	cout << "Name of City: ";
    getline(cin, name);
    Paris.setName(name);
    cout << "Population: ";
    cin >> population;
    Paris.setpopulation(population);
    cout << "Area: ";
    cin >> area;
    Paris.setarea(area);
    getchar();
    cout << "Mayor: ";
    getline(cin, mayor);
    Paris.setMayor(mayor);
    cout << "You have created:" << endl;
    /*printing for paris*/
    Paris.print();

    cout << endl << "Please enter data for London: " << endl;
	cout << "Name of City: ";
    getline(cin, name);
    London.setName(name);
    cout << "Population: ";
    cin >> population;
    London.setpopulation(population);
    cout << "Area: ";
    cin >> area;
    London.setarea(area);
    getchar();
    cout << "Mayor: ";
    getline(cin, mayor);
    London.setMayor(mayor);
    cout << "You have created:" << endl;
    /*printing for london*/
    London.print();
    
    return 0;
}
