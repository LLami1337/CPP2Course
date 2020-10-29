#include "RationalNumber.h"

RationalNumber::RationalNumber(double m, double n) {
	SetM(m);
	SetN(n);
}

RationalNumber::RationalNumber(int m, int n) {
	SetM(m);
	SetN(n);
}

RationalNumber::RationalNumber(double m) {
	SetM(m);
	SetN(1);
}

RationalNumber::RationalNumber(int m) {
	SetM(m);
	SetN(1);
}

void RationalNumber::SetM(double m) {
	this->m = m;
}

void RationalNumber::SetM(int m) {
	this->m = m;
}

void RationalNumber::SetN(double n) {
	this->n = n;
}

void RationalNumber::SetN(int n) {
	this->n = n;
}

double RationalNumber::GetM() {
	return this->m;
}

double RationalNumber::GetN() {
	return this->n;
}

double RationalNumber::toDouble() {
	return this->m / this->n;
}

std::ostream& operator<<(std::ostream& out, RationalNumber rationalNumber) {
	out << "ComplexNumber: " << rationalNumber.GetM() << " / " << rationalNumber.GetN();
	return out;
}