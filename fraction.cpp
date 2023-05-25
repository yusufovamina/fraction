#include<iostream>
#include"fraction.h"
using namespace std;

Fraction::Fraction()
{
	numerator = 0;
	denominator = 1;
}

Fraction::Fraction(int numer, int denom)
{
	numerator = numer;
	denominator = denom;
}

Fraction::~Fraction()
{
	cout << "Fraction was deleted" << endl;
}

int Fraction::val(int a, int b) {
	if (b == 0) {
		return a;
	}
	else {
		return val(b, a % b);
	}
}

void Fraction::reduce() {
	int value = val(numerator, denominator);
	numerator /= value;
	denominator /= value;
}


void Fraction::show_fraction() {
	if (numerator == denominator) cout << 1 << endl;
	else if (numerator == 0) cout << 0 << endl;
	else if (numerator > denominator) {
		int celoe = numerator / denominator;
		numerator = numerator - celoe * denominator;
		if (numerator == 0) cout << celoe << endl;
		else cout << celoe << " " << numerator << "/" << denominator << endl;
	}
	else {
		reduce();
		cout << numerator << "/" << denominator << endl;
	}
}

void Fraction::input_fraction() {
	cout << "Numerator: ";
	cin >> numerator;
	do
	{
		cout << "Denominator: ";
		cin >> denominator;
	} while (denominator == 0);


}

Fraction Fraction::add(Fraction& fraction) {
	Fraction result;
	result.numerator = numerator * fraction.denominator + fraction.numerator * denominator;
	result.denominator = denominator * fraction.denominator;
	return result;
}

Fraction Fraction::subtract(Fraction& fraction) {
	Fraction result;
	result.numerator = numerator * fraction.denominator - fraction.numerator * denominator;
	result.denominator = denominator * fraction.denominator;
	return result;
}

Fraction Fraction::multiply(Fraction& fraction) {
	Fraction result;
	result.numerator = numerator * fraction.numerator;
	result.denominator = denominator * fraction.denominator;
	return result;
}

Fraction Fraction::divide(Fraction& fraction) {
	Fraction result;
	result.numerator = numerator * fraction.denominator;
	result.denominator = denominator * fraction.numerator;
	return result;
}