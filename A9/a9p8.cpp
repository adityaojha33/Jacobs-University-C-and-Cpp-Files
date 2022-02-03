/*
CH-230-A
a9p8.cpp
Aditya Ojha
ad.ojha@jacobs-university.de
*/
#include <iostream>
using namespace std;

void subtract_max(int *&mem, int n)
{
    int max = mem[0];
    /*finding the max value*/
    for(int i=0; i<n ;i++)
    {
        if(mem[i] > max)
            max = mem[i];
    }
    /*subtracting each term with max value*/
    for(int i=0; i<n; i++)
    {
        mem[i]-= max;
    }
}
void deallocate(int *&mem)
{
    delete[] mem; /*deallocating memory*/
}

int main()
{
    int n;
    int *mem;
    cout << "Input n (Number of elements): ";
    cin >> n;
    /*dynamically allocating memory to mem*/
    mem = new (nothrow) int[n];
    if (mem == nullptr)
        cout << "Memory could not be allocated";
    else
    {
        /*taking n number of inputs*/
        for (int i = 0; i < n; i++)
        {
            cout << "Enter number: ";
            cin >> mem[i];
        }
    }
    /*before subtraction*/
    cout << "You have entered: ";
    for (int i = 0; i < n; i++)
    {
        cout << mem[i] << ", ";
    }
    cout << endl;
    subtract_max(mem, n);
    /*after subtraction*/
    cout << "After subtracting: ";
    for (int i = 0; i < n; i++)
    {
        cout << mem[i] << ", ";
    }
    cout << endl;
    deallocate(mem);
    return 0;
}