/*
CH-230-A
a9p4.cpp
Aditya Ojha
ad.ojha@jacobs-university.de
*/
#include <iostream>
using namespace std;
int mycount(int x, int y)
{
    /*returning the difference*/
    return(y-x);
}
int mycount(char a, string b)
{
    int count = 0;
    int size = b.size();
    /*counting the occurance of character in the string*/
    for(int i=0; i<size; i++)
    {
        if (b[i]==a)
            count++;
    }
    /*returning the occurance of the character*/
    return count;
}
int main()
{
    cout<< "The difference is: "<< mycount(7,3) << endl;
    cout<< "The occurance of character is: "<< mycount('i', "this is a string") << endl;
    return 0;
}