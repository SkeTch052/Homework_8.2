#include "Isosceles_Triangle.h"
#include "Wrong_Figure.h"
#include <iostream>

Isosceles_Triangle::Isosceles_Triangle() {
    name = "�������������� �����������";
    c = a; C = A;
    if (a != c) {
        throw std::domain_error("������� \"a\" � \"c\" �� �����");
    } else if (A != C) {
        throw std::domain_error("���� \"A\" � \"C\" �� �����");
    } else {
        std::cout << name << " ( �������: " << a << ", " << b << ", " << c << "; ���� " << A << ", " << B << ", " << C << ") ������\n" << std::endl;
    }
}