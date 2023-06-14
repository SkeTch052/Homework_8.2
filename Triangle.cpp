#include "Triangle.h"
#include "Wrong_Figure.h"
#include <iostream>

Triangle::Triangle() {
    name = "�����������";
    sides_count = 3;
    a = 10, b = 20, c = 30, A = 50, B = 60, C = 70;
    if (sides_count != 3) {
        throw std::domain_error("����� ������ �� ����� 3");
    } else if ((A + B + C) != 180) {
        throw std::domain_error("����� ����� �� ����� 180");
    }
}
void Triangle::print_info() {
    Figure::print_info();
    std::cout << " (c������: " << a << ", " << b << ", " << c << "; ����: " << A << ", " << B << ", " << C << ") ������" << std::endl;
}