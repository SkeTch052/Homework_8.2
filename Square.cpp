#include "Square.h"
#include "Wrong_Figure.h"
#include <iostream>

Square::Square() {
    name = "�������";
    c = b; a = b;
    if ((a != c) || (a != b) || (a != d)) {
        //throw Wrong_Figure();
        throw std::domain_error("��� ������� ������ ���� �����");
    } else {
        std::cout << name << " (�������: " << a << ", " << b << ", " << c << ", " << d << "; ����: " << A << ", " << B << ", " << C << ", " << D << ") ������\n" << std::endl;
    }
}