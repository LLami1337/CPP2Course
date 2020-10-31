#include "RationalNumber.h"

RationalNumber::RationalNumber() {
	SetM(1);
	SetN(1);
}

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
	if (this->n != 0)
	return this->m / this->n;
}

RationalNumber RationalNumber::operator+(const RationalNumber& other)
{
	RationalNumber final(0,0);
	final.n = this->n * other.n;
	final.m = ((final.n / this->m) + (final.n / other.m));
	return final;
}

RationalNumber RationalNumber::operator-(const RationalNumber& other)
{
	RationalNumber final(0, 0);
	final.n = this->n * other.n;
	final.m = ((final.n / this->m) - (final.n / other.m));
	return final;
}

RationalNumber RationalNumber::operator*(const RationalNumber& other)
{
	this->m *= other.m;
	this->n *= other.n;
	return *this;
}

RationalNumber RationalNumber::operator/(const RationalNumber& other)
{
	this->m *= other.n;
	this->n *= other.m;
	return *this;
}

RationalNumber& RationalNumber::operator=(const RationalNumber& other)
{
	if (this == &other) {
		return *this;
	}
	this->m = other.m;
	this->n = other.n;
	return *this;
}

bool operator==(RationalNumber first, RationalNumber second)
{
	if (first.toDouble() == second.toDouble()) return true;
	return false;
}

bool operator>(RationalNumber first, RationalNumber second)
{
	if (first.toDouble() > second.toDouble()) return true;
	return false;
}

bool operator>=(RationalNumber first, RationalNumber second)
{
	if (first.toDouble() >= second.toDouble()) return true;
	return false;
}

bool operator!=(RationalNumber first, RationalNumber second)
{
	if (first.toDouble() != second.toDouble()) return true;
	return false;
}

std::ostream& operator<<(std::ostream& out, RationalNumber rationalNumber) {
	if (rationalNumber.GetN() == 1) {
		out << rationalNumber.GetM();
	} else 
	out << rationalNumber.GetM() << "/" << rationalNumber.GetN();
	return out;
}

RationalNumber RationalNumber::pow2() {
	this->m = this->m * this->m;
	this->n = this->n * this->n;
	return *this;
}

