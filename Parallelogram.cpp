#include "Parallelogram.h"
#include "Wrong_Figure.h"
#include <iostream>

Parallelogram::Parallelogram() {
    name = "ѕараллелограмм";
    A = 30; C = A; B = 40; D = B;
    if ((A != C) || (B != D)) {
        //throw Wrong_Figure();
        throw std::domain_error("”глы A, C и B, D должны быть попарно равны");
    } else {
        std::cout << name << " (стороны: " << a << ", " << b << ", " << c << ", " << d << "; углы: " << A << ", " << B << ", " << C << ", " << D << ") создан\n" << std::endl;
    }
}