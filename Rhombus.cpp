#include "Rhombus.h"
#include "Wrong_Figure.h"
#include <iostream>

Rhombus::Rhombus() {
    name = "Ромб";
    a = 30; b = a; c = a; d = a;
    if ((a != b) || (a != c) || (a != d)) {
        throw std::domain_error("Все стороны должны быть равны");
    } 
    else if ((A != C) || (B != D)) {
        throw std::domain_error("Углы A, C и B, D должны быть попарно равны");
    }
    else if ((A + B + C + D) != 360) {
        throw std::domain_error("Сумма углов не равна 360");
    }
}
void Rhombus::print_info() {
    Quadrangle::print_info();
}