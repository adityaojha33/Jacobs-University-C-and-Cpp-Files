/*
CH-230-A
a10p8.cpp
Aditya Ojha
ad.ojha@jacobs-university.de
*/
/* Reference taken from geeksforgeeks URL: https://www.geeksforgeeks.org/complex-numbers-c-set-1/*/
#include <iostream>
#include "Complex.h"

using namespace std;

complex::complex()
{
    /*default constructor*/
    real = 0;
    imaginary = 0;
}

complex::complex(float newreal, float newimaginary)
{
    /*when the parameters are passed*/
    real = newreal;
    imaginary = newimaginary;
}

complex::complex(const complex &x)
{
    /*copy constructor*/
    real = x.real;
    imaginary = x.imaginary;
}

/*implementation of setters*/
void complex::setimaginary(float newimaginary)
{
    imaginary = newimaginary;
}

void complex::setreal(float newreal)
{
    real = newreal;
}

/*implementation of getters*/
float complex::getimaginary()
{
    return imaginary;
}

float complex::getreal()
{
    return real;
}

complex complex::add(complex &c2)
{
    /*addition function*/
    complex ans;
    ans.setreal(real + c2.getreal());
    ans.setimaginary(imaginary + c2.getimaginary());
    return ans;
}
complex complex::subtraction(complex &c2)
{
    /*subtraction function*/
    complex ans;
    ans.setreal(real - c2.getreal());
    ans.setimaginary(imaginary - c2.getimaginary());
    return ans;
}
complex complex::multiply(complex &c2)
{
    /*multiplication function*/
    complex ans;
    ans.setreal((real * c2.getreal()) - (imaginary * c2.getimaginary()));
    ans.setimaginary((imaginary * c2.getreal()) + (real * c2.getimaginary()));
    return ans;
}

complex complex ::conjugate()
{
    /*conjugate function*/
    complex ans;
    ans.setreal(real);
    ans.setimaginary(-imaginary);
    /*changing the signs*/
    return ans;
}

void complex::print()
{

    if (imaginary)
    {

        cout << noshowpos << real << showpos << imaginary << "i" << endl;
    }
    else
    {
        cout << noshowpos << real << showpos << endl;
    }
    /*showpos to show positives*/
}

complex::~complex()
{
    /*destructor*/
}