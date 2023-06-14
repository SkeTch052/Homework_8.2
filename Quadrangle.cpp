#include "Quadrangle.h"
#include "Wrong_Figure.h"
#include <iostream>

Quadrangle::Quadrangle() {
    name = "Четырёхугольник";
    sides_count = 4;
    a = 10, b = 20, c = 30, d = 40, A = 100, B = 70, C = 110, D = 80;
    if (sides_count != 4) {
        //throw Wrong_Figure();
        throw std::domain_error("Число сторон не равно 4");
    }
    else if ((A + B + C + D) != 360) {
        //throw Wrong_Figure();
        throw std::domain_error("Сумма углов не равна 360");
    }
    else {
        std::cout << name << " (стороны: " << a << ", " << b << ", " << c << ", " << d << "; углы: " << A << ", " << B << ", " << C << ", " << D << ") создан\n" << std::endl;
    }
}