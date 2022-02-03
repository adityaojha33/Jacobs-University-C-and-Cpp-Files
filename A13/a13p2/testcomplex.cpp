/*
CH-230-A
a13p2.cpp
Aditya Ojha
ad.ojha@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include "Complex.h"
#include <fstream>

using namespace std;
int main()
{
    complex c1;
    complex c2;
    /*taking input from the first file*/
    /*since the structure of input can be any type
    this program takes the input in the format
    x +yi or x -yi*/
    ifstream input1("in1.txt");
    if(input1.is_open())
    {
        cout << "******in1.txt******\n";
        input1 >> c1;
    }
    input1.close();
    /*taking input from the second file*/
    ifstream input2("in2.txt");
    if(input2.is_open())
    {
        cout << "******in2.txt******\n";
        input2 >> c2;
    }
    input2.close();
    /*printing the final data in output file*/
    ofstream destination("output.txt");
    if(destination.is_open())
    {
        destination << "First Complex number: " << c1;
        destination << "Second Complex number: " << c2;
        destination << "Sum  of Complex numbers: " << (c1 + c2);
        destination << "Difference of Complex numbers: " << (c1 - c2);
        destination << "Product of Complex numbers: " << (c1 * c2);
    }
    destination.close();
    return 0;
}