#include "Equilateral_Triangle.h"
#include "Wrong_Figure.h"
#include <iostream>

Equilateral_Triangle::Equilateral_Triangle() {
    name = "�������������� �����������";
    a = c; b = c; A = B; C = B;
    if ((a != b) || (a != c)) {
        throw std::domain_error("������� �� �����");
    }
    else if ((A != B) || (A != C)) {
        throw std::domain_error("���� �� �����");
    } 
    else if ((A + B + C) != 180) {
        throw std::domain_error("����� ����� �� ����� 180");
    }
}
void Equilateral_Triangle::print_info() {
    Triangle::print_info();
}