/*
CH-230-A
a13p2.cpp
Aditya Ojha
ad.ojha@jacobs-university.de
*/
/* Reference taken from a10p8*/
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
    /*via operator overloading*/
    complex operator+(complex &);
    complex operator-(complex &);
    complex conjugate();
    complex operator*(complex &);
    friend std::ostream& operator <<(std::ostream&  ,const complex & );
	friend std::istream& operator >>(std::istream& ,complex & );
    void operator=(complex &);

    void print();
    ~complex();
};