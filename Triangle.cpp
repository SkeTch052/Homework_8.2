#include "Triangle.h"

Triangle::Triangle() {
    name = "�����������";
    sides_count = 3;
    a = 10, b = 20, c = 30, A = 50, B = 60, C = 70;
}
int Triangle::get_side_a() const { return a; }
int Triangle::get_side_b() const { return b; }
int Triangle::get_side_c() const { return c; }
int Triangle::get_angle_A() const { return A; }
int Triangle::get_angle_B() const { return B; }
int Triangle::get_angle_C() const { return C; }