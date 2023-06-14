#include "Square.h"
#include "Wrong_Figure.h"
#include <iostream>

Square::Square() {
    name = "Квадрат";
    c = b; a = b;
    if ((a != c) || (a != b) || (a != d)) {
        throw std::domain_error("Все стороны должны быть равны");
    }
    else if ((A + B + C + D) != 360) {
        throw std::domain_error("Сумма углов не равна 360");
    }
    else if ((A != 90) || (B != 90) || (C != 90) || (D != 90)) {
        throw std::domain_error("Все углы должны быть равны 90");
    }
}
void Square::print_info() {
    Quadrangle::print_info();
}