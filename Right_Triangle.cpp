#include "Right_Triangle.h"
#include "Wrong_Figure.h"
#include <iostream>

Right_Triangle::Right_Triangle() {
    name = "Прямоугольный треугольник";
    A = 50, B = 40, C = 90;
    if (C != 90) {
        throw std::domain_error("Угол C не равен 90");
    }
    else if ((A + B + C) != 180) {
        throw std::domain_error("Сумма углов не равна 180");
    }
}
void Right_Triangle::print_info() {
    Triangle::print_info();
}