//
// Created by maxim on 14.10.2020.
//

#include "ComplexNumber.h"
#include <cmath>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

ComplexNumber::ComplexNumber() {
	SetReal(0);
	SetImaginable(0);
}

ComplexNumber::ComplexNumber(double re, double im) {
	SetReal(re);
	SetImaginable(im);
}

double ComplexNumber::GetReal() {
	return this->re;
}
void ComplexNumber::SetReal(double re) {
	this->re = re;
}
double ComplexNumber::GetImaginable() {
	return this->im;
}
void ComplexNumber::SetImaginable(double im) {
	this->im = im;
}

ComplexNumber ComplexNumber::operator+(const ComplexNumber& other) {
	this->re += other.re;
	this->im += other.im;
	return *this;
}

ComplexNumber ComplexNumber::operator-(const ComplexNumber& other) {
	this->re -= other.re;
	this->im -= other.im;
	return *this;
}

ComplexNumber ComplexNumber::operator*(const ComplexNumber& other) {
	ComplexNumber final;
	final.re = (((this->re) * (other.re)) - ((this->im) * (other.im)));
	final.im = (((this->re) * (other.im)) + ((this->im) * (other.re)));
	return final;
}

ComplexNumber ComplexNumber::operator/(const ComplexNumber& other) {
	ComplexNumber final;
	final.re = (this->re*other.re+this->im*other.im) / (other.re*other.re+other.im*other.im);
	final.im = (this->im*other.re-this->re*other.im) / (other.re*other.re+other.im*other.im);
	return final;
}

ComplexNumber& ComplexNumber::operator=(const ComplexNumber& other) {
	if (this == &other) {
		return *this;
	}
	this->re = other.re;
	this->im = other.im;
	return *this;
}

bool operator==(const ComplexNumber& first, const ComplexNumber& second) {
	if ((first.re == second.re) && (first.im == second.im)) return true;
	return false;
}

bool operator!=(const ComplexNumber& first, const ComplexNumber& second) {
	if ((first.re != second.re) || (first.im != second.im)) return true;
	return false;
}

ComplexNumber& ComplexNumber::operator+=(ComplexNumber other) {
	this->re = this->re + other.re;
	this->im = this->im + other.im;
	return *this;
}

ComplexNumber& ComplexNumber::operator-=(ComplexNumber other) {
	this->re = this->re - other.re;
	this->im = this->im - other.im;
	return *this;
}

ComplexNumber& ComplexNumber::operator*=(ComplexNumber other) {
	return *this = *this * other;
}

ComplexNumber& ComplexNumber::operator/=(ComplexNumber other) {
	return *this = *this / other;
}

const ComplexNumber operator-(const ComplexNumber& other)
{
	static ComplexNumber temp = other;
	temp.re *= -1;
	temp.im *= -1;
	return temp;
}

double ComplexNumber::arg()
{
	if ((this->re == 0.0) && (this->im == 0.0)) return 0.0;
	if (this->re == 0.0) {
		if (this->im > 0) return M_PI / 2; else return -M_PI / 2;
	}
	else
		if (this->re > 0.0) return atan(this->im / this->re);
		else
		{
			if (this->im >= 0) return M_PI + atan(this->im/this->re);
			else return -M_PI + atan(this->im /this->re);
		}
}

double ComplexNumber::abs()
{
	return sqrt(this->re * this->re + this->im * this->im);
}

ComplexNumber ComplexNumber::pow(int n)
{	// z^n = r^n(cosn*Fi+sinn*Fi)
	static ComplexNumber final;
	final.re = (std::pow(abs(), n)) * (std::cos(n * arg()));
	final.im = (std::pow(abs(), n)) * (std::sin(n * arg()));
	return final;
}


std::ostream& operator<<(std::ostream& out, ComplexNumber complexNumber) {
	if (complexNumber.im >= 0) {
		out << "ComplexNumber: " << complexNumber.GetReal() << " + " << complexNumber.GetImaginable() << "*i";
	}
	else {
		out << "ComplexNumber: " << complexNumber.GetReal() << " - " << -complexNumber.GetImaginable() << "*i";
	}
	return out;
}
