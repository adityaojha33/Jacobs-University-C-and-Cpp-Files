/*
CH-230-A
a13p3.cpp
Aditya Ojha
ad.ojha@jacobs-university.de
*/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    /*taking the n for number of files input*/
    int n;
    cout << "Enter integer n: ";
    cin >> n;
    string input;
    string str;
    /*opening the output file*/
    ofstream destination("concatn.txt", ios::binary);
    for (int i=0; i<n; i++)
    {
        cout << "Enter file name: ";
        cin >> input;
        ifstream source(input, ios::binary);
        /*opening the inputted file*/
        if(source.is_open())
        {
            cout << "Copying from " << input << " \n";
        }
        /*copying from the input file to output file*/
        while(getline(source,str))
        {
            destination<<str<<endl;
        }
        /*adding a new line after each file content*/
        destination << "\n" ;
        /*closing the input file*/
        source.close();
    }
    /*closing the output file*/
    destination.close();
    return 0;
}