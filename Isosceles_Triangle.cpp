#include "Isosceles_Triangle.h"
#include "Wrong_Figure.h"
#include <iostream>

Isosceles_Triangle::Isosceles_Triangle() {
    name = "�������������� �����������";
    c = a; C = A, B = 80;
    if (a != c) {
        throw std::domain_error("������� \"a\" � \"c\" �� �����");
    } 
    else if (A != C) {
        throw std::domain_error("���� \"A\" � \"C\" �� �����");
    }
    else if ((A + B + C) != 180) {
        throw std::domain_error("����� ����� �� ����� 180");
    }
}
void Isosceles_Triangle::print_info() {
    Triangle::print_info();
}