/*
CH-230-A
a12p3.cpp
Aditya Ojha
ad.ojha@jacobs-university.de
*/
#include <iostream>
#include "TournamentMember.h"
using namespace std;
int main()
{
    Player p0; //empty constructor
    /*assigning the first name, last name, DOB for 3 players*/
    char fn1[37] = "Harry";
    char ln1[37] = "Maguire";
    char db1[11] = "2020-11-28";
    char fn2[37] = "Bruno";
    char ln2[37] = "Fernandes";
    char db2[11] = "1994-11-12";
    char fn3[37] = "David";
    char ln3[37] = "DeGea";
    char db3[11] = "1990-03-06";
    /*parametric constructors for 3 players*/
    Player p1(fn1, ln1, db1, 76.5, 13, 5, "CentreBack", 2, "Right");
    Player p2(fn2, ln2, db2, 65.2, 5, 18, "Midfielder", 15, "Right");
    Player p3(fn3, ln3, db3, 70.4, 11, 1, "Goal Keeper", 0, "Left");
    /*printing the datas*/
    p1.print();
    p1.print2();
    p2.print();
    p2.print2();
    p3.print();
    p3.print2();

    /*increasing the goals by 1 by calling getgoals*/
    p1.getgoals();
    p2.getgoals();
    p3.getgoals();

    /*changing the location to Hamburg*/
    p1.setlocation("Hamburg");
    /*printing after changing*/
    p1.print();
    p1.print2();
    p2.print();
    p2.print2();
    p3.print();
    p3.print2();
    return 0;
}