/*
CH-230-A
a12p2.cpp
Aditya Ojha
ad.ojha@jacobs-university.de
*/
#include <iostream>
#include "TournamentMember.h"
using namespace std;
int main()
{
    TournamentMember first; //empty constructor
    TournamentMember copy(first); // copy constructor
    /*assigning the first name, last name, DOB*/
    char fn[37] = "Harry";
    char ln[37] = "Maguire";
    char db[11] = "2020-11-28";
    cout << endl;
    /*calling parametric constructors*/
    TournamentMember second(fn, ln, db, 67.6, 8);
    second.print();
    /*changing and setting the location*/
    cout << "***Changing the Location***\n";
    second.setlocation("Leicester");
    second.print(); 
    cout << endl;
    return 0;
}