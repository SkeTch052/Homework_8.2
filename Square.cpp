#include "Square.h"
#include "Wrong_Figure.h"
#include <iostream>

Square::Square() {
    name = "Квадрат";
    c = b; a = b;
    if ((a != c) || (a != b) || (a != d)) {
        //throw Wrong_Figure();
        throw std::domain_error("Все стороны должны быть равны");
    } else {
        std::cout << name << " (стороны: " << a << ", " << b << ", " << c << ", " << d << "; углы: " << A << ", " << B << ", " << C << ", " << D << ") создан\n" << std::endl;
    }
}