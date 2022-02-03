/*
CH-230-A
a13p8.cpp
Aditya Ojha
ad.ojha@jacobs-university.de
*/
#include <iostream>
//#include <exception>

using namespace std;

class Motor
{
public:
    Motor()
    {
        //cout << "This motor has problems\n";
        throw "This motor has problems";
        /*throws the required message*/
    }
};
class Car : public Motor
{
    /*Car inherited from motor*/
public:
    Car():Motor()
    {
        
    }
};

class Garage : public Car
{
    /*inherited from car*/
public:
    Garage() try :Car()
    {
    }
    //cout << "The car in this garage has problems with the motor\n";
    catch(const char* error)
    {
        cerr << error; /*error of the motor*/
        /*prints This motor has problems*/
        cout << "\n";
        throw "The car in this garage has problems with the motor";
        /*throws the required error of garage*/
    }
};

int main()
{
    try
    {
        Garage g;
    }
    catch(const char* error)
    {

        cerr << error;
        /*error from garage*/
        cout << "\n";
    }

    return 0;
}