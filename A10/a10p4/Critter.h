/*
CH-230-A
a10p4.cpp
Aditya Ojha
ad.ojha@jacobs-university.de
*/
#include <string> 
using namespace std;

class Critter
{
private:  // data members are private
	string name;
	int hunger;
	int boredom;
	double height;

public: // business logic methods are public
	
	Critter(); //default critter
	Critter(string& newname); //for name input only
	Critter(string& newname, int newhunger, int newboredom, double newheight); 
	//supplying all parameters
	Critter(string& newname, int newhunger, int newboredom); 
	//supplying all parameters except height
	
	// setter methods
	void setName(string& newname);
	void setHunger(int newhunger);
	void setboredom(int newboredom);
    void setheight(double newheight);

	//gettter methods
	int getHunger();
	int getboredom();
	double getheight();

	void print();
};
