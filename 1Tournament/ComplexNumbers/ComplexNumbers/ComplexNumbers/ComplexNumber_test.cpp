#define CATCH_CONFIG_MAIN
#include "ComplexNumber.h"
#include "RationalNumber.h"
#include "catch.hpp"
#include<iostream>
#include<stdio.h>
#include<stdlib.h>

/* TESTS CREATED BY oubre 29.10.2020*/

TEST_CASE("Constructors") {
    SECTION("RationalNumber") {
        double j = 5.2, m = 3.1;
        int k = 3, l = 1;
        RationalNumber a;
        RationalNumber b(j);
        RationalNumber c(j, m);
        RationalNumber d(k);
        RationalNumber e(k, l);
        REQUIRE(a.toDouble() == 1);
        REQUIRE(b.toDouble() == 5.2);
        REQUIRE(c.toDouble() == 5.2 / 3.1);
        REQUIRE(d.toDouble() == 3);
        REQUIRE(e.toDouble() == 3);
    };
}

TEST_CASE("Getters-Setters") {

    SECTION("RationalNumber") {
        RationalNumber a(1, 2);
        RationalNumber b(3, 4);
        a.SetM(2); b.SetN(5);
        REQUIRE(a.GetM() == 2);
        REQUIRE(b.GetN() == 5);
    };

    SECTION("ComplexNumber") {
        ComplexNumber a(RationalNumber(1, 2), RationalNumber(3, 4));
        ComplexNumber b(RationalNumber(5, 6), RationalNumber(7, 8));
        a.SetImaginable(RationalNumber(2, 1));
        b.SetReal(RationalNumber(1, 1));
        REQUIRE(a.GetImaginable() == RationalNumber(2, 1));
        REQUIRE(b.GetReal() == RationalNumber(1, 1));
    };
}

TEST_CASE("Operators") {
    SECTION("RationalNumber") {
        RationalNumber a(1, 2);
        RationalNumber b(2, 4);
        REQUIRE((a + b) == RationalNumber(12,8));
        REQUIRE((a - b) == RationalNumber(4, 8));
        REQUIRE((a * b) == RationalNumber(2, 8));
        REQUIRE((a / b) == RationalNumber(8, 16));
    };
}