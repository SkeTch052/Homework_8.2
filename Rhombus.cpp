#include "Rhombus.h"
#include "Wrong_Figure.h"
#include <iostream>

Rhombus::Rhombus() {
    name = "����";
    a = 30; b = a; c = a; d = a;
    if ((a != b) || (a != c) || (a != d)) {
        //throw Wrong_Figure();
        throw std::domain_error("��� ������� ������ ���� �����");
    }
    else {
        std::cout << name << " (�������: " << a << ", " << b << ", " << c << ", " << d << "; ����: " << A << ", " << B << ", " << C << ", " << D << ") ������\n" << std::endl;
    }
}