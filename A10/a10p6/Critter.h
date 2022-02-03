/*
CH-230-A
a10p6.cpp
Aditya Ojha
ad.ojha@jacobs-university.de
*/
#include <string> // defines standard C++ string class
using namespace std;
/* First C++ class */
class Critter
{
private: // data members are private
	string name;
	double hunger;
	int boredom;
	double height;
	double thirst;
	/*functions to change the hunger to decimal and back to int*/
	double todouble(int hunger);
	int tointeger(double hunger);

public:																		   // business logic methods are public
	Critter();																   //default critter
	Critter(string &newname);												   //for name input only
	Critter(string &newname, int newhunger, int newboredom, double newheight); //supplying all parameters
	Critter(string &newname, int newhunger, int newboredom);				   //supplying all parameters except height
	Critter(string &newname, int newhunger, int newboredom, double newheight, double newthirst);
	// setter methods
	void setName(string &newname);
	void setHunger(int newhunger);
	void setboredom(int newboredom);
	void setheight(double newheight);
	void setthirst(double newthirst);

	//getter methods
	int getHunger();
	int getboredom();
	double getheight();
	double getthirst();

	void print();
};
