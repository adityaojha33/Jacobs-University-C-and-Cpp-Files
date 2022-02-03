/*
CH-230-A
a12p3.cpp
Aditya Ojha
ad.ojha@jacobs-university.de
*/
#include <iostream>
#include "TournamentMember.h"

using namespace std;

TournamentMember::TournamentMember()
{
    /*creating empty constructor of Tournament Member*/
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
    /*creating parametric constructor of Tournament Member*/
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
    /*creating copy constructor of Tournament Member*/
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
}

/*destructor implementation of Tournament Member*/
TournamentMember::~TournamentMember()
{
    cout << "Destructor of Tournament member\n";
}

Player::Player()
{
    /*creating empty constructor of Player*/
    cout << "Empty Constructor of Player\n";
    number = 0;
    position = "";
    goals = 0;
    foot = "";
}

Player::Player(char *newfirstname, char *newlastname, char *newDOB, double newweight, int newnervousness, int newnumber, string newposition, int newgoals, string newfoot)
    :TournamentMember(newfirstname, newlastname, newDOB, newweight, newnervousness)
{
    /*creating parametric constructor of Player*/
    cout << "Parametric Constructor of Player\n";
    number = newnumber;
    position = newposition;
    goals = newgoals;
    foot = newfoot;
}

Player::Player(const Player &h) : TournamentMember(h)

{
    /*creating copy constructor of Player*/
	cout << "Copy Constructor of Player called\n";
	number = h.number;
    position = h.position;
    goals = h.goals;
    foot = h.foot;
}
/*setter and getter for goals*/
void Player::setgoals(int newgoals)
{
    goals = newgoals;
}

int Player::getgoals()
{
    goals++;
    return goals;
}

/*printing the new datas for players*/
void Player::print2()
{
    cout << "Number: " << number << endl;
    cout << "Goals: " << goals << endl;
    cout << "Preferred Foot: " << foot << endl;
    cout << endl;
}

/*destructor implementation of players*/
Player::~Player()
{
    cout << "Player injured (Destructed)\n";
}