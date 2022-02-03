/*
CH-230-A
a12p1.cpp
Aditya Ojha
ad.ojha@jacobs-university.de
*/
#include <iostream>
#include "Shapes.h"

using namespace std;

int main()
{
    /*creating two desired hexagon*/
    Hexagon h1("Hexagon1", 1, 1, 9, "Blue");
    Hexagon h2("Hexagon2", 1, 1, 15, "Green");
    Hexagon h3(h2); /*copy constructor of 2nd hexagon*/

    /*printing the calculated data for first, second and copied hexagon*/
    h1.printName();
    cout << "The Perimeter of 1st Hexagon is: " << h1.perimeter() << endl;
    cout << "The Area of the 1st Hexagon is: " << h1.area() << endl;

    h2.printName();
    cout << "The Perimeter of 2nd Hexagon is: " << h2.perimeter() << endl;
    cout << "The Area of the 2nd Hexagon is: " << h2.area() << endl;

    h3.printName();
    cout << "The Perimeter of Copy Hexagon is: " << h3.perimeter() << endl;
    cout << "The Area of the Copy Hexagon is: " << h3.area() << endl;

    return 0;
}