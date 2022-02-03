/*
CH-230-A
a11p1.cpp
Aditya Ojha
ad.ojha@jacobs-university.de
*/
#include <iostream>
#include "Box.h"

box::box()
{
    /*default constructor*/
    height = 0;
    width = 0;
    depth = 0;
}
box::box(const box &b)
{
    /*copy constructor*/
    height = b.height;
    width = b.width;
    depth = b.depth;
} 
box::box(double newheight, double newwidth, double newdepth)
{
    /*Constructor that takes all the parameters*/
    height = newheight;
    width = newwidth;
    depth = newdepth;
}

/*implementation of setters*/
void box::setheight(double newheight)
{
    height = newheight;
}
void box::setwidth(int newwidth)
{
    width = newwidth;
}

void box::setdepth(int newdepth)
{
    depth = newdepth;
}

/*implementation of getters*/
double box::getheight()
{
    return height;
}
double box::getwidth()
{
    return height;
}
double box::getdepth()
{
    return height;
}

double box::vol(double newheight, double newwidth, double newdepth)
{
    /*calculating volume*/
    double volume = newheight * newdepth * newwidth;
    return volume;
}

void box::print()
{
    cout << "The Volume is: " << vol(height, depth, width) << endl;
}

box::~box()
{
    /*destructor */
}