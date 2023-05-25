#pragma once
#include<iostream>
using namespace std;

class Fraction
{
public:
	Fraction();
	Fraction(int numer, int denom);
	~Fraction();
	void show_fraction();
	void input_fraction();
	Fraction add(Fraction& fraction);
	Fraction subtract(Fraction& fraction);
	Fraction multiply(Fraction& fraction);
	Fraction divide(Fraction& fraction);
	int val(int a, int b);
	void reduce();
private:
	int numerator;
	int denominator;
};


