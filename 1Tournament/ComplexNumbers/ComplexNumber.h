//
// Created by maxim on 14.10.2020.
//
#pragma once
#include <ostream>
#include "RationalNumber.h"

class ComplexNumber {
private:
	double re;
	double im;
public:
	ComplexNumber();
	ComplexNumber(RationalNumber re, RationalNumber im);
	double GetReal();
	void SetReal(RationalNumber re);
	double GetImaginable();
	void SetImaginable(RationalNumber im);
	ComplexNumber operator+(const ComplexNumber& other);
	ComplexNumber operator-(const ComplexNumber& other);
	ComplexNumber operator*(const ComplexNumber& other);
	ComplexNumber operator/(const ComplexNumber& other);
	ComplexNumber& operator=(const ComplexNumber& other);
	friend bool operator==(const ComplexNumber& first, const ComplexNumber& second);
	friend bool operator!=(const ComplexNumber& first, const ComplexNumber& second);
	ComplexNumber& operator+=(ComplexNumber other);
	ComplexNumber& operator-=(ComplexNumber other);
	ComplexNumber& operator*=(ComplexNumber other);
	ComplexNumber& operator/=(ComplexNumber other);
	friend const ComplexNumber operator-(const ComplexNumber& other);
	friend std::ostream& operator<<(std::ostream& out, const ComplexNumber complexNumber);
	RationalNumber arg();
	RationalNumber abs();
	ComplexNumber pow(int n);
};