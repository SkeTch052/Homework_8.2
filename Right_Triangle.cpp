#include "Right_Triangle.h"
#include "Wrong_Figure.h"
#include <iostream>

Right_Triangle::Right_Triangle() {
    name = "������������� �����������";
    C = 90;
    if (C != 90) {
        //throw Wrong_Figure();
        throw std::domain_error("���� C �� ����� 90");
    }
    else {
        std::cout << name << " ( �������: " << a << ", " << b << ", " << c << "; ���� " << A << ", " << B << ", " << C << ") ������\n" << std::endl;
    }
}