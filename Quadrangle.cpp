#include "Quadrangle.h"
#include "Wrong_Figure.h"
#include <iostream>

Quadrangle::Quadrangle() {
    name = "Четырёхугольник";
    sides_count = 4;
    a = 10, b = 20, c = 30, d = 40, A = 100, B = 70, C = 110, D = 80;
    if (sides_count != 4) {
        throw std::domain_error("Число сторон не равно 4");
    }
    else if ((A + B + C + D) != 360) {
        throw std::domain_error("Сумма углов не равна 360");
    }
}
void Quadrangle::print_info() {
    Figure::print_info();
    std::cout << " (стороны: " << a << ", " << b << ", " << c << ", " << d << "; углы: " << A << ", " << B << ", " << C << ", " << D << ") создан" << std::endl;
}