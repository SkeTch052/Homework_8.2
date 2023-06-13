#include "Triangle.h"
#include "Wrong_Figure.h"
#include <iostream>

Triangle::Triangle() {
    name = "Треугольник";
    sides_count = 3;
    a = 10, b = 20, c = 30, A = 50, B = 60, C = 70;
    if ((sides_count != 3) && (A + B + C != 180)) {
        throw Wrong_Figure();
    } else {
        std::cout << name << " ( Стороны: " << a << ", " << b << ", " << c << "; углы " << A << ", " << B << ", " << C << ") создан" << std::endl;
    }
}
//int Triangle::get_side_a() const { return a; }
//int Triangle::get_side_b() const { return b; }
//int Triangle::get_side_c() const { return c; }
//int Triangle::get_angle_A() const { return A; }
//int Triangle::get_angle_B() const { return B; }
//int Triangle::get_angle_C() const { return C; }
