/*
CH-230-A
a12p5.cpp
Aditya Ojha
ad.ojha@jacobs-university.de
*/
// simple class for fractions

#ifndef FRACTION_H_
#define FRACTION_H_

class Fraction {

private:						// internal implementation is hidden
	int num;					// numerator
	int den;					// denominator

	int gcd(int a, int b);		// calculates the gcd of a and b
	int lcm(int a, int b);

public:
	Fraction();					// empty constructor
	// constructor taking values for fractions and integers.
	// Denominator by default is 1
	Fraction(int, int = 1); 
	/*overloading of the << >> operators for input and output*/	
	friend std::ostream& operator <<(std::ostream& out ,const Fraction &f );
	friend std::istream& operator >>(std::istream& in ,Fraction &f );
	/*overloading of the + - * / > < = operators for respective operations*/
	Fraction operator<<(Fraction &);
	Fraction operator+(Fraction &);
	Fraction operator-(Fraction &);
	Fraction operator*(Fraction &);
	Fraction operator/(Fraction &);
	Fraction operator<(Fraction &);
	Fraction operator>(Fraction &);
	void operator=(Fraction &);
	
};


#endif /* FRACTION_H_ */
