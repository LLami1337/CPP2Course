//
// Created by maxim on 14.10.2020.
//

#include "ComplexNumber.h"

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

ComplexNumber ComplexNumber::operator+(const ComplexNumber &other) {
    this->re += other.re;
    this->im += other.im;
    return *this;
}

ComplexNumber ComplexNumber::operator-(const ComplexNumber &other) {
    this->re -= other.re;
    this->im -= other.im;
    return *this;
}

ComplexNumber ComplexNumber::operator*(const ComplexNumber &other) {
    this->re = (((this->re)*(other.re)) - ((this->im)*(other.im)));
    this->im = (((this->re)*(other.im)) + ((this->im)*(other.re)));
    return *this;
}
// Не работает
ComplexNumber ComplexNumber::operator/(const ComplexNumber &other) {
    this->re = (this->re*other.re+other.im*this->im)/(this->re*this->re+this->im*this->im);
    this->im = (this->im*other.re-this->re*other.im)/(this->re*this->re+this->im*this->im);
    return *this;
}

ComplexNumber &ComplexNumber::operator=(const ComplexNumber &other) {
    if (this == &other) {
        return *this;
    }
    this->re = other.re;
    this->im = other.im;
    return *this;
}

bool operator==(const ComplexNumber &first, const ComplexNumber &second) {
    if ((first.re == second.re) && (first.im == second.im)) return true;
    return false;
}

bool operator!=(const ComplexNumber &first, const ComplexNumber &second) {
    if ((first.re != second.re) || (first.im != second.im)) return true;
    return false;
}

ComplexNumber &ComplexNumber::operator+=(ComplexNumber other) {
    this->re = this->re + other.re;
    this->im = this->im + other.im;
    return *this;
}

ComplexNumber &ComplexNumber::operator-=(ComplexNumber other) {
    this->re = this->re - other.re;
    this->im = this->re - other.im;
    return *this;
}

std::ostream &operator<<(std::ostream &out, ComplexNumber complexNumber) {
    out << "ComplexNumber: "<< complexNumber.GetReal()<< " + " << complexNumber.GetImaginable() << "*i";
    return out;
}








