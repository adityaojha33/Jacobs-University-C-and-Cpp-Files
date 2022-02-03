/*
CH-230-A
a10p2.cpp
Aditya Ojha
ad.ojha@jacobs-university.de
*/
#include <string> 

class Critter
{
private:  // data members are private
	std::string name;
	int hunger;
	int boredom;
	double height;

public: // business logic methods are public
	// setter methods
	void setName(std::string& newname);
	void setHunger(int newhunger);
	void setBoredom(int newboredom);
	void setHeight(double newheight);
	// getter method
	int getHunger();
	int getBoredom();
	double getHeight();
	// service method
	void print();
};
