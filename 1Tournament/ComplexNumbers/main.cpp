#include <iostream>
#include "ComplexNumber.h"
#include "RationalNumber.h"

int main()
{
    RationalNumber first(2.0, 4.5);
    RationalNumber second(1, 6);
    ComplexNumber mynum(first, second);
    std::cout<<mynum.pow(3);
}
