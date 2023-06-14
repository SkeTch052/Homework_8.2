#include "Parallelogram.h"
#include "Wrong_Figure.h"
#include <iostream>

Parallelogram::Parallelogram() {
    name = "ѕараллелограмм";
    A = 30; C = A; B = 40; D = B;
    if ((A != C) || (B != D)) {
        throw std::domain_error("”глы A, C и B, D должны быть попарно равны");
    }
    else if ((A + B + C + D) != 360) {
        throw std::domain_error("—умма углов не равна 360");
    }
}
void Parallelogram::print_info() {
    Quadrangle::print_info();
}