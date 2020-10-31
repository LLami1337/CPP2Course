#pragma once
#include <ostream>
class RationalNumber
{	
 private:
	double m, n;
 public:
	RationalNumber();
	RationalNumber(double m, double n);
	RationalNumber(int m, int n);
	RationalNumber(double m);
	RationalNumber(int m);
	void SetM(double m);
	void SetM(int m);
	void SetN(double n);
	void SetN(int n);
	double GetM();
	double GetN();
	double toDouble();
	RationalNumber pow2();
	RationalNumber operator+(const RationalNumber& other);
	RationalNumber operator-(const RationalNumber& other);
	RationalNumber operator*(const RationalNumber &other);
	RationalNumber operator/(const RationalNumber& other);
	RationalNumber& operator=(const RationalNumber& other);
	friend bool operator==(RationalNumber first,RationalNumber second);
	friend bool operator>(RationalNumber first,RationalNumber second);
	friend bool operator>=(RationalNumber first, RationalNumber second);
	friend bool operator!=(RationalNumber first,RationalNumber second);
	friend std::ostream& operator<<(std::ostream& out, const RationalNumber rationalNumber);
};

