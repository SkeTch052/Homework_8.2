#include "Right_Triangle.h"
#include "Wrong_Figure.h"
#include <iostream>

Right_Triangle::Right_Triangle() {
    name = "Прямоугольный треугольник";
    C = 90;
    if (C != 90) {
        //throw Wrong_Figure();
        throw std::domain_error("Угол C не равен 90");
    }
    else {
        std::cout << name << " ( Стороны: " << a << ", " << b << ", " << c << "; углы " << A << ", " << B << ", " << C << ") создан\n" << std::endl;
    }
}