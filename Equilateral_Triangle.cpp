#include "Equilateral_Triangle.h"
#include "Wrong_Figure.h"
#include <iostream>

Equilateral_Triangle::Equilateral_Triangle() {
    name = "�������������� �����������";
    a = c; b = c; A = B; C = B;
    if ((a != b) || (a != c)) {
        //throw Wrong_Figure();
        throw std::domain_error("������� �� �����");
    }
    else if ((A != B) || (A != C)) {
        //throw Wrong_Figure();
        throw std::domain_error("���� �� �����");
    } else {
        std::cout << name << " ( �������: " << a << ", " << b << ", " << c << "; ���� " << A << ", " << B << ", " << C << ") ������\n" << std::endl;
    }
}