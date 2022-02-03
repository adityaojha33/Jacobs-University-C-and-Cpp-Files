/*
CH-230-A
a9p7.cpp
Aditya Ojha
ad.ojha@jacobs-university.de
*/
#include <iostream>
using namespace std;
void swapping(int &a, int &b)
{
    /*swapping the integers*/
    int temp = a;
    a = b;
    b = temp;
}
void swapping(float &x, float &y)
{
    /*swapping the floats*/
    float now = x;
    x = y;
    y = now;
}
void swapping(const char *&str1, const char *&str2)
{
    /*swapping the characters*/
    const char *current = str1;
    str1 = str2;
    str2 = current;
}
int main(void)
{
    int a = 7, b = 15;
    float x = 3.5, y = 9.2;
    const char *str1 = "One";
    const char *str2 = "Two";
    /*before the swap*/
    cout << "a=" << a << ", b=" << b << endl;
    cout << "x=" << x << ", y=" << y << endl;
    cout << "str1=" << str1 << ", str2=" << str2 << endl;
    /*calling the functions*/
    swapping(a, b);
    swapping(x, y);
    swapping(str1, str2);
    /*after the swap*/
    cout << "a=" << a << ", b=" << b << endl;
    cout << "x=" << x << ", y=" << y << endl;
    cout << "str1=" << str1 << ", str2=" << str2 << endl;
    return 0;
}