#pragma once
#include "Figure.h"
#include <iostream>

class Triangle : public Figure {
protected:
    int a, b, c, A, B, C;
public:
    Triangle();
};