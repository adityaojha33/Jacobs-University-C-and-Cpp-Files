/*
CH-230-A
a13p1.cpp
Aditya Ojha
ad.ojha@jacobs-university.de
*/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string input;
    cout << "Enter file name: ";
    /*taking the input of file name*/
    getline(cin, input);
    /*finding the position of '.'*/
    int x = input.find_first_of('.');
    /*separating the name and extension*/
    string extension = input.substr(x, input.size());
    string name = input.substr(0, x);
    /*adding copy to the name and then adding back the extension*/
    string output = name + "_copy" + extension;
    /*output file name*/
    cout << "Output file name: " << output << endl;
    ifstream source(input); /*the source is the input file*/
    /*the output file with updated name is the destination*/
    ofstream destination(output); 
    /*restore input content in output*/
    string str;
    while(getline(source,str))
    {
        destination<<str<<endl;
    }
    /*closing the files*/
    source.close();
    destination.close(); 
    return 0;
}
//destination << source.rdbuf();