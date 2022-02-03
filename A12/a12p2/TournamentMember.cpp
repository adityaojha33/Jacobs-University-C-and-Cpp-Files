/*
CH-230-A
a12p2.cpp
Aditya Ojha
ad.ojha@jacobs-university.de
*/
#include <iostream>
#include "TournamentMember.h"

using namespace std;

TournamentMember::TournamentMember()
{
    /*creating empty constructor*/
    cout << "Empty Constructor\n";
    for (int i = 0; i < 37; i++)
    {
        firstname[i] = 0;
        lastname[i] = 0;
    }
    for (int i = 0; i < 11; i++)
    {
        DOB[i] = 0;
    }
    weight = 0;
    nervousnesslevel = 0;
}

/*setting the location*/
string TournamentMember::location = "Manchester";

TournamentMember::TournamentMember(char *newfirstname, char *newlastname, char *newDOB, double newweight, int newnervousness)
{
    /*creating parametric constructor*/
    cout << "Parametric constructor called\n";
    /*setting every character in the array*/
    for (int i = 0; i < 37; i++)
    {
        firstname[i] = newfirstname[i];
        lastname[i] = newlastname[i];
    }
    for (int i = 0; i < 11; i++)
    {
        DOB[i] = newDOB[i];
    }
    weight = newweight;
    nervousnesslevel = newnervousness;
}
TournamentMember::TournamentMember(const TournamentMember &xyz)
{
    /*creating copy constructor*/
    cout << "Copy constructor called\n";
    for (int i = 0; i < 37; i++)
    {
        firstname[i] = xyz.firstname[i];
        lastname[i] = xyz.lastname[i];
    }
    for (int i = 0; i < 11; i++)
    {
        DOB[i] = xyz.DOB[i];
    }
    weight = xyz.weight;
    nervousnesslevel = xyz.nervousnesslevel;
}

/*printing the datas*/
void TournamentMember::print()
{
    cout << "First Name: " << firstname << endl;
    cout << "Last Name: " << lastname << endl;
    cout << "Date of Birth: " << DOB << endl;
    cout << "Location: " << location << endl;
    cout << "Weight: " << weight << endl;
    cout << "Nervousness level: " << nervousnesslevel << endl;
    cout << endl;
}

/*destructor implementation*/
TournamentMember::~TournamentMember()
{
    cout << "Destructor\n";
}
