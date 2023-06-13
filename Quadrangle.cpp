#include "Quadrangle.h"

Quadrangle::Quadrangle() {
    name = "Четырёхугольник";
    sides_count = 4;
    a = 10, b = 20, c = 30, d = 40, A = 50, B = 60, C = 70, D = 80;
}
int Quadrangle::get_side_a() const { return a; }
int Quadrangle::get_side_b() const { return b; }
int Quadrangle::get_side_c() const { return c; }
int Quadrangle::get_side_d() const { return d; }
int Quadrangle::get_angle_A() const { return A; }
int Quadrangle::get_angle_B() const { return B; }
int Quadrangle::get_angle_C() const { return C; }
int Quadrangle::get_angle_D() const { return D; }