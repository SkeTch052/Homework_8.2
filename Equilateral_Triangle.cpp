#include "Equilateral_Triangle.h"
#include "Wrong_Figure.h"
#include <iostream>

Equilateral_Triangle::Equilateral_Triangle() {
    name = "Равносторонний треугольник";
    a = c; b = c; A = B; C = B;
    if ((a != b) || (a != c)) {
        //throw Wrong_Figure();
        throw std::domain_error("Стороны не равны");
    }
    else if ((A != B) || (A != C)) {
        //throw Wrong_Figure();
        throw std::domain_error("Углы не равны");
    } else {
        std::cout << name << " ( Стороны: " << a << ", " << b << ", " << c << "; углы " << A << ", " << B << ", " << C << ") создан\n" << std::endl;
    }
}