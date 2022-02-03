/*
CH-230-A
a13p2.cpp
Aditya Ojha
ad.ojha@jacobs-university.de
*/

#include <iostream>
#include <string>
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

complex complex ::conjugate()
{
    /*conjugate function*/
    complex ans;
    ans.setreal(real);
    ans.setimaginary(-imaginary);
    /*changing the signs*/
    return ans;
}

/*adding the real numbers and imaginary numbers*/
complex complex::operator+(complex &f)
{
    complex sum(real + f.real, imaginary + f.imaginary);
    return sum;
}
/*subtracting the real numbers and imaginary numbers*/
complex complex::operator-(complex &f)
{
    complex subtract(real - f.real, imaginary - f.imaginary);
    return subtract;
}
/*product of the complex number*/
complex complex::operator*(complex &f)
{
    int a = f.real;
    int b = f.imaginary;
    complex product((real * a) - (imaginary * b), (imaginary * a) + (real * b));
    return product;
}
/*assigning the with =*/
void complex::operator=(complex &f)
{
    real = f.real;
    imaginary = f.imaginary;
}
/*since the structure of input can be any type
this program takes the input in the format
x +yi or x -yi*/
/*taking the input from the file*/
istream &operator>>(istream &input, complex &f)
{
    char c = 'x'; /*reading from the format x +yi or x -yi*/
    string str = "";
    while (c != 'i')
    {
        input.get(c);
        /*getting the value for real number*/

        str = str + c;
        /*only until space is typed*/
        if (c == ' ')
        {
            /*use of stoi to take the string to number*/
            f.real = stoi(str);
            str = "";
        }
    }
    /*imaginary number value*/
    f.imaginary = stoi(str);
    return input;
}

ostream &operator<<(ostream &output, const complex &f)
{
    /*printing the real part in the file*/
    output << f.real;
    if (f.imaginary < 0)
    {
        /*printing the imaginary part in the file*/
        output << " - " << (f.imaginary * -1) << "i\n";
    }
    else
    {
        output << " + " << f.imaginary << "i\n";
    }
    return output;
}

complex::~complex()
{
    /*destructor*/
}

/*
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
    showpos to show positives
} 
*/