/*
CH-230-A
a11p6.cpp
Aditya Ojha
ad.ojha@jacobs-university.de
*/
#include <iostream>

using namespace std;
class Vector
{
private: // data members are private
    int size; //size of vector
    double* component; //components of vector
public:
    Vector();  //empty constructor
    Vector(int newsize);  // parametric constructor
    Vector(const Vector& v1); //copy constructor
    ~Vector(); // destructor

    /*setter and getter implementation*/
    void setsize(int newsize); 
    void setcomponent(double *newcomponent);
    
    int getsize();

    /*functions to perform operations*/
    Vector add(const Vector &v1) const;
    Vector subtract(const Vector &v1) const;
    double product(const Vector &v1) const;
    double norm();
    void print();
};