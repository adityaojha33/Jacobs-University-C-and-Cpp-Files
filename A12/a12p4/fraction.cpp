/*
CH-230-A
a12p4.cpp
Aditya Ojha
ad.ojha@jacobs-university.de
*/
#include <iostream>
#include "fraction.h"

Fraction::Fraction()
{
	num = 1;
	den = 1;
}
/*computing gcd*/
Fraction::Fraction(int n, int d)
{
	int tmp_gcd = gcd(n, d);

	num = n / tmp_gcd;
	den = d / tmp_gcd;
}

int Fraction::gcd(int a, int b)
{
	int tmp_gcd = 1;

	// Implement GCD of two numbers;

	return tmp_gcd;
}

/*computing lcm*/
int Fraction::lcm(int a, int b)
{
	return a * b / gcd(a, b);

}

/*void Fraction::print()
{
	std::cout << num << "/" << den << std::endl;
} */
/*implementation of << operator overloading*/
Fraction Fraction::operator<<(Fraction &f)
{
	Fraction ans(f.num, f.den);
	return ans;
}
/*taking the fraction input as "number'/'number"*/
/*check if the input has '/' as well as making sure denominator is not 0 */
std::istream& operator >>(std::istream& input ,Fraction &f )
{
	char slash = 'a';
	input >> f.num >> slash >> f.den;
	while (f.den == 0 || slash != '/')
	{
		std::cout << "Math error. Please reenter:\n";
		input >> f.num >> slash >> f.den;
	}
	return input;
}

/*overloading << operator to print the output*/
std::ostream &operator<<(std::ostream &output, const Fraction &f)
{
	output<< f.num << "/" << f.den << std::endl;
	return output;
}
/*overloading of '*' and '/' operator for product and division*/
Fraction Fraction::operator*(Fraction f)
{
	Fraction product(this->num * f.num, this->den * f.den);
	return product;
}

Fraction Fraction::operator/(Fraction f)
{
	Fraction division(this->num * f.den, this->den * f.num);
	return division;
}