/*
CH-230-A
a11p1.cpp
Aditya Ojha
ad.ojha@jacobs-university.de
*/
#include <string>
using namespace std;

class box
{
    /*private data menbers*/
private:
    double height;
    double width;
    double depth;
public:
    box(); /*default constructor*/
    box(double newheight, double newwidth, double newdepth); /*parametric*/
    box(const box& b);/*copy constructor*/
    ~box(); /*for destruction*/

    /*setters and getters*/
    void setheight(double newheight);
	void setwidth(int newwidth);
	void setdepth(int newdepth);


    double getheight();
	double getwidth();  
	double getdepth();

    double vol(double newheight, double newwidth, double newdepth);

    void print();

};