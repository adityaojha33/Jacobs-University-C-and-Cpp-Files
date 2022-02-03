/*
CH-230-A
a11p1.cpp
Aditya Ojha
ad.ojha@jacobs-university.de
*/
#include <iostream>
#include "Box.h"

using namespace std;

int main()
{
    int n, i;

    double height, width, depth;

    cout << "Input n: ";
    cin >> n; /*Taking input of n*/

    box *newarr;
    /*Dynamically allocating memory*/
    newarr = new box[2 * n];

    for (i = 0; i < n; i++)
    {
        /*Taking input for n number of times*/
        cout << "Enter Height of Box number " << i + 1 << ": ";
        cin >> height;
        cout << "Enter Width of Box number " << i + 1 << ": ";
        cin >> width;
        cout << "Enter Depth of Box number " << i + 1 << ": ";
        cin >> depth;
        /*setting the values*/
        newarr[i].setwidth(height);
        newarr[i].setheight(width);
        newarr[i].setdepth(depth);

        /*copying in the remaining spaces (n to 2n)*/
        newarr[n+i]=newarr[i];
    }

    for (i = 0; i < 2*n; i++)
    {
/*printing volume for n number of inputs as well as from copy constructor*/
        newarr[i].print();
    }

    delete[] newarr;
    /*deallocation of memory*/

    return 0;
}