//
// Created by maxim on 14.10.2020.
//
#pragma once
#include <ostream>


class ComplexNumber {
private:
    double re;
    double im;
public:
    double GetReal();
    void SetReal(double re);
    double GetImaginable();
    void SetImaginable(double im);
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
    friend const ComplexNumber operator-(const ComplexNumber& other); // Унарный минус
    friend std::ostream& operator<< (std::ostream &out, const ComplexNumber complexNumber);
    ComplexNumber pow(ComplexNumber other);
    ComplexNumber arg(ComplexNumber other);
    ComplexNumber abs(ComplexNumber other);
};



