#include<iostream>
#include"fraction.h"
using namespace std;

int main() {
	Fraction fr1;
	Fraction fr2(1, 3);
	fr1.input_fraction();
	fr1.multiply(fr2).show_fraction();
}