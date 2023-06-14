#include "Isosceles_Triangle.h"
#include "Wrong_Figure.h"
#include <iostream>

Isosceles_Triangle::Isosceles_Triangle() {
    name = "Равнобедренный треугольник";
    c = a; C = A, B = 80;
    if (a != c) {
        throw std::domain_error("Стороны \"a\" и \"c\" не равны");
    } 
    else if (A != C) {
        throw std::domain_error("Углы \"A\" и \"C\" не равны");
    }
    else if ((A + B + C) != 180) {
        throw std::domain_error("Сумма углов не равна 180");
    }
}
void Isosceles_Triangle::print_info() {
    Triangle::print_info();
}