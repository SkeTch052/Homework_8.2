#include "Isosceles_Triangle.h"
#include "Wrong_Figure.h"
#include <iostream>

Isosceles_Triangle::Isosceles_Triangle() {
    name = "Равнобедренный треугольник";
    c = a; C = A;
    if (a != c) {
        throw std::domain_error("Стороны \"a\" и \"c\" не равны");
    } else if (A != C) {
        throw std::domain_error("Углы \"A\" и \"C\" не равны");
    } else {
        std::cout << name << " ( Стороны: " << a << ", " << b << ", " << c << "; углы " << A << ", " << B << ", " << C << ") создан\n" << std::endl;
    }
}