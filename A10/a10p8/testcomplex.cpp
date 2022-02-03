/*
CH-230-A
a10p8.cpp
Aditya Ojha
ad.ojha@jacobs-university.de
*/
/* Reference taken from geeksforgeeks URL: https://www.geeksforgeeks.org/complex-numbers-c-set-1/*/
#include <iostream>
#include <cstdlib>
#include "Complex.h"

using namespace std;
int main()
{
    /*for each operation*/
    complex c1;
    complex c2;
    complex c3;
    complex c4;
    complex c5;
    complex c6;
    complex c7;

    float real1;
    float real2;
    float imaginary1;
    float imaginary2;

    /*taking the inputs*/
    cout << "Input Real Number #1 : ";
    cin >> real1;
    cout << "Input Imaginary #1 :";
    cin >> imaginary1;

    cout << "Input Real Number #2 : ";
    cin >> real2;
    cout << "Input Imaginary #2 :";
    cin >> imaginary2;

    c1.setreal(real1);
    c1.setimaginary(imaginary1);
    c2.setreal(real2);
    c2.setimaginary(imaginary2);

    /*computation of operation by calling the respective functions*/
    c3 = c1.add(c2);
    c4 = c1.subtraction(c2);
    c5 = c1.multiply(c2);
    c6 = c1.conjugate();
    c7 = c2.conjugate();

    /*printing the respective operations*/
    cout << "First Complex Number: ";
    c1.print();
    cout << "Second Complex Number: ";
    c2.print();
    cout << "Addition: ";
    c3.print();
    cout << "Subtraction: ";
    c4.print();
    cout << "Multiplication: ";
    c5.print();
    cout << "Conjugate of first: ";
    c6.print();
    cout << "Conjugate of second: ";
    c7.print();

    return 0;
}