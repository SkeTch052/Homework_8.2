#include "Triangle.h"
#include "Wrong_Figure.h"
#include <iostream>

Triangle::Triangle() {
    name = "Треугольник";
    sides_count = 3;
    a = 10, b = 20, c = 30, A = 50, B = 60, C = 70;
    if (sides_count != 3) {
        //throw Wrong_Figure();
        throw std::domain_error("Число сторон не равно 3");
    } else if ((A + B + C) != 180) {
        //throw Wrong_Figure();
        throw std::domain_error("Сумма углов не равна 180");
    } else {
        std::cout << name << " ( Стороны: " << a << ", " << b << ", " << c << "; углы " << A << ", " << B << ", " << C << ") создан\n" << std::endl;
    }
}