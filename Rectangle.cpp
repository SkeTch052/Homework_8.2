#include "Rectangle.h"
#include "Wrong_Figure.h"
#include <iostream>

Rectangle::Rectangle() {
    name = "Прямоугольник";
    c = a; d = b;
    A = 90; B = 90; C = 90; D = 90;
    if ((a != c) || (b != d)) {
        throw std::domain_error("Стороны a,c и b,d должны быть попарно равны");
    }
    else if ((A != 90) || (B != 90) || (C != 90) || (D != 90)) {
        throw std::domain_error("Все углы должны быть равны 90");
    }
    else if ((A + B + C + D) != 360) {
        throw std::domain_error("Сумма углов не равна 360");
    }
}
void Rectangle::print_info() {
    Quadrangle::print_info();
}