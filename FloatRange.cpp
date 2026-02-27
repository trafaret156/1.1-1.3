#include "FloatRange.h"
#include <iostream>
#include <cmath>

using namespace std;

bool FloatRange::SetFirst(double value) {
	first = value;
	return true;
}
bool FloatRange::SetSecond(double value) {
	if (value > first) {
		second = value;
		return true;
	}
	else {
		return false;
	}
}
bool FloatRange::Init(double a, double b) {
	first = a;
	return SetSecond(b);
}
void FloatRange::Read() {
	double a, b;
	do {
		cout << "First: ";
		cin >> a;
		cout << "Second: ";
		cin >> b;
	} while (!Init(a, b));
}
void FloatRange::Display() {
	cout << "Range : [" << first << "," << second << "]" << endl;
}
bool FloatRange::RangeCheak(double x) const {
	return (x >= first && x <= second);
}
