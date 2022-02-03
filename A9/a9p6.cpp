/*
CH-230-A
a9p6.cpp
Aditya Ojha
ad.ojha@jacobs-university.de
*/
#include <iostream>
#include <cmath>
using namespace std;

int myfirst(int x[], int n)
{
    int pos = -1; /*to return -1 when positive even is not found*/
    for(int i=0; i<n; i++)
    {
        /*finding even positive number*/
        if(x[i]>0 && (x[i]%2)==0)
        {
            pos = x[i];
            break;
        }
    }
    return pos;
}
double myfirst(double x[], int n)
{
    /*to return -1.1 when negative non fractional is not found*/
    double neg = -1.1;
    for(int i=0; i<n; i++)
    {
        double intpart, fract;
        /*dividing into integer and fractional part*/
        fract = modf(x[i], &intpart);
        /*when it is negative and non fractional*/
        if(x[i]< 0 && fract == 0)
        {
            neg = x[i];
            break;
        }
    } 
    return neg;
}

char myfirst(char x[], int n)
{
    /*to return 0 when consonant is not found*/
    char val = '0';
    for(int i=0; i<n; i++)
    {
        /*checking for consonants*/
        if(x[i]!='a' && x[i]!='e' && x[i]!='i' && x[i]!='o' && x[i]!='u' &&
        x[i]!='A' && x[i]!='E' && x[i]!='I' && x[i]!='O' && x[i]!='U')
        {
            val = x[i];
            break;
        }
    } 
    return val;
}

int main()
{
    char operand;
    cout << "Which operation do you want to perform" <<endl;
    /*asking input for the type of operation*/
    cout << "i for integer, d for double, c for character: ";
    cin >> operand;
    int total;
    /*asking input for total number of elements*/
    cout << "Enter total number of elements: ";
    cin >> total;
    if(operand == 'i')
    {
        int array[total];
        cout << "Enter the integers" << endl;
        /*taking the inputs*/
        for(int j = 0; j< total; j++)
        {
            cin >> array[j];
        }
        cout << "1st even +ve integer is (-1 when none): " << myfirst(array, total) << endl;
    }
    else if(operand == 'd')
    {
        double array[total];
        cout << "Enter the doubles" << endl;
        /*taking the inputs*/
        for(int j = 0; j< total; j++)
        {
            cin >> array[j];
        }
        cout << "1st -ve non fractional is (-1.1 when none): " << myfirst(array, total) << endl;
    }
    else if(operand == 'c')
    {
        char array[total];
        cout << "Enter the characters" << endl;
        /*taking the inputs*/
        for(int j = 0; j< total; j++)
        {
            cin >> array[j];
        }
        cout << "1st consonant is (0 when none): " << myfirst(array, total) << endl;
    }
    else
    {
        cout << "Wrong operation" << endl;
    }
    
    return 0;
}