#pragma once
#include "Figure.h"

class Quadrangle : public Figure {
protected:
    int a, b, c, d, A, B, C, D;
public:
    Quadrangle();
    void print_info() override;
};