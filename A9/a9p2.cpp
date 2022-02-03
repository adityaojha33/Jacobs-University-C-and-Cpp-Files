/*
CH-230-A
a9p2.cpp
Aditya Ojha
ad.ojha@jacobs-university.de
*/

#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    double x;
    string s; 
    cout << "Enter n: ";
    cin >> n; /*taking input for n*/
    cout << "Enter (double) x: ";
    cin >> x; /*taking input for double x*/
    cout << "Enter string: ";
    cin >> s; /*taking input for string*/
    for(int i = 0; i<n; i++)
    {
        /*printing 'string':'double' n number of times*/
        cout << s << ":" << x << endl;
    }
    
    return 0;
}