#include <iostream>
#include "ComplexNumber.h"

int main() {
    ComplexNumber my_number;
    my_number.SetReal(15);
    my_number.SetImaginable(20);
    ComplexNumber other_number;
    other_number.SetReal(10);
    other_number.SetImaginable(30);
    my_number-=other_number;
    std::cout<<my_number;
    return 0;
}
