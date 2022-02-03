/*
CH-230-A
a9p3.cpp
Aditya Ojha
ad.ojha@jacobs-university.de
*/
#include <iostream>
using namespace std;

float absolute(float x)
{
    if(x<(float)0.0)
    {
        /*returning positive when negative value is entered*/
        return (x * (float)-1);
    }
    else
    {
        /*returning the same number when positive or 0 is entered*/
        return (x);
    }
}

int main()
{
    float f;
    cout << "Enter a (float) number: ";
    cin >> f; /*input of float*/
    cout << "The absolute value is: " << absolute(f) << endl;
    return 0;
}
