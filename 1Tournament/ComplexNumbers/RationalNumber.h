#pragma once
#include <ostream>
class RationalNumber
{	
 private:
	double m, n;
 public:
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
	friend std::ostream& operator<<(std::ostream& out, const RationalNumber rationalNumber);
};

