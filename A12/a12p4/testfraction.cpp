/*
CH-230-A
a12p4.cpp
Aditya Ojha
ad.ojha@jacobs-university.de
*/
#include <iostream>
#include "fraction.h"

using namespace std;

int main(void)
{
	/*taking the inputs of fraction*/
	cout << "Enter the Fraction 1\n";
	Fraction a;
	cin >> a;

	cout << "Enter the Fraction 2\n";
	Fraction b;
	cin >> b;
	/*printing the input*/
	cout << "The first fraction: " << a;
	cout << "The second fraction: " << b;
	/*printing after doing the operations*/
	Fraction product;
	product = a*b;
	cout << "Product is: " << product;
	Fraction division;
	division = a/b;
	cout << "Quotient is: " << division;
	return 0;
}
