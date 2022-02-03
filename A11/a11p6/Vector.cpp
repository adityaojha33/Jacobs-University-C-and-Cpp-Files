/*
CH-230-A
a11p6.cpp
Aditya Ojha
ad.ojha@jacobs-university.de
*/
#include <iostream>
#include <cmath>
#include "Vector.h"

using namespace std;

/*default constructor*/
Vector::Vector()
{
    cout << "\nDefault constructor called\n";
    size = 0;
    component = NULL;
}

/* Parametric constructor*/
Vector::Vector(const int newsize)
{
    cout << "\nParametric constructor called\n";
    size = newsize;
    component = new double [size];
}

/*copy constructor*/
Vector::Vector(const Vector &v1)
{
    cout << "\nCopyconstructor called\n";
    size = v1.size;
    component = new double[size];
    for (int i = 0; i < size; i++)
    {
        component[i] = v1.component[i];
    }
}

/*setter and getter implementation*/
void Vector::setsize(const int newsize)
{
    size = newsize;
    component = new double[size];
}
int Vector::getsize()
{
    return size;
}

void Vector::setcomponent(double *newcomponent)
{
    component = newcomponent;
}

/*function to perform addition*/
Vector Vector::add(const Vector &obj) const
{
    Vector added(size);
    for (int i = 0; i < size; i++)
    {
        added.component[i] = component[i] + obj.component[i];
    }

    return added;
}

/*function to perform suntraction*/
Vector Vector::subtract(const Vector &obj) const
{
    Vector subtracted(size);
    for (int i = 0; i < size; i++)
    {
        subtracted.component[i] = component[i] - obj.component[i];
    }

    return subtracted;
}

/*function to perform scalar product*/
double Vector::product(const Vector &obj) const
{
    double scalarprod = 0;
    for (int i = 0; i < size; i++)
    {
        scalarprod += component[i] * obj.component[i];
    }

    return scalarprod;
}

/*function to calculate the magnitude*/
double Vector::norm()
{
    double square = 0;
    for (int i = 0; i < size; i++)
    {
        square += component[i] * component[i];
    }
    double root = sqrt(square);
    return root;
}

/*printing function*/
void Vector::print()
{
    for (int i = 0; i < size; i++)
        cout << component[i] << " ";
    cout << endl;
}

/*destructor where dynamically allocated is deleted*/
Vector::~Vector()
{
    delete[] component;
    cout << "Destructor Executed\n";
}