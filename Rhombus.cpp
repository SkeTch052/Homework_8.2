#include "Rhombus.h"
#include "Wrong_Figure.h"
#include <iostream>

Rhombus::Rhombus() {
    name = "Ромб";
    a = 30; b = a; c = a; d = a;
    if ((a != b) || (a != c) || (a != d)) {
        //throw Wrong_Figure();
        throw std::domain_error("Все стороны должны быть равны");
    }
    else {
        std::cout << name << " (стороны: " << a << ", " << b << ", " << c << ", " << d << "; углы: " << A << ", " << B << ", " << C << ", " << D << ") создан\n" << std::endl;
    }
}