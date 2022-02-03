/*
CH-230-A
a13p6.cpp
Aditya Ojha
ad.ojha@jacobs-university.de
*/
#include <iostream>
#include <vector>
#include <stdexcept>
 using namespace std;
int main()
{
    /*adding value 8, 20 times in the vector*/
    vector <int> first(20,8);

    try
    {
        /*trying to access 21st element*/
        first.at(21);
    }
    catch(const out_of_range& error)
    {
        /*catching out_of_range exception*/
        /*using cerr to print*/
        cerr << "Out of Range error: " << error.what() << endl;
    }
    return 0;
}