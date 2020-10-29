#define CATCH_CONFIG_MAIN
#include "ComplexNumber.h"
#include "RationalNumber.h"
#include "catch.hpp"

RationalNumber a(4, 5); //  4/5
RationalNumber b(3, 4); //  3/4
RationalNumber c(2, 3); //  2/3
RationalNumber d(1, 2); //  1/2

ComplexNumber first(a, b);
ComplexNumber second(c, d);
ComplexNumber third;

TEST_CASE("Test #1") {
    REQUIRE(first.pow(3).GetReal() == 0.0507545); //  ((4/5)+(3/4)i)^3 = 0.05075445816186558 + 0.09413580246913587i
        
}