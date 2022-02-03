/*
CH-230-A
a10p8.cpp
Aditya Ojha
ad.ojha@jacobs-university.de
*/
/* Reference taken from geeksforgeeks URL: https://www.geeksforgeeks.org/complex-numbers-c-set-1/*/
#include <iostream>

using namespace std;
class complex
{
private: // data members are private
    float real;
    float imaginary;

public:
    complex(); //default
    complex(float newreal, float newimaginary); //parametric
    complex(const complex &); //copyconstructor

    /*setter methods*/
    void setreal(float newreal);
    void setimaginary(float newimaginary);

    /*getter methods*/
    float getreal();
    float getimaginary();

    /*functions to do the operation*/
    complex add(complex &x);
    complex subtraction(complex &x);
    complex conjugate();
    complex multiply(complex &x);

    void print();
    ~complex();
};