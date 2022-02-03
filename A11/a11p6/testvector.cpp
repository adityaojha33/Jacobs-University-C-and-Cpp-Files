/*
CH-230-A
a11p6.cpp
Aditya Ojha
ad.ojha@jacobs-university.de
*/
#include<iostream>
#include "Vector.h"

using namespace std;

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    /*allocation of input*/
    double *x = new double [n]; 
    double *y = new double [n];
    Vector v1; //default
    Vector v2(n); //parametric for 2nd instance
    Vector v4(n); // parametric for 4th instance
    
    cout << "Enter components of 2nd instance Vector:\n";
    for(int i=0; i<n; i++)
    { 
        cin >> x[i];
    }
    v2.setcomponent(x);

    Vector v3(v2); // copy constructor

    cout << "Enter components of 4th instance Vector:\n";
    for(int i=0; i<n; i++)
    { 
        cin >> y[i];
    }

    v4.setcomponent(y);

    /*printing the inputted vectors*/
    cout << "The 2nd instance vector is: ";
    v2.print();
    cout << "The 4th instance vector is: ";
    v4.print();

    /*the magnitude of 2nd instance vector*/
    cout << "The norm of the 2nd instance vector is: " << v2.norm() << endl;

    /*scalar product*/
    cout << "The scalar product of the two vectors is: " ;
    cout << v2.product(v4);

    /*sum and difference of vectors*/
    cout << "\nThe sum of the 2nd and 4th vector is: ";
    (v2.add(v4)).print();

    cout << "The difference of the 2nd and 4th vector is: ";
    (v2.subtract(v4)).print();
    

    return 0;
}