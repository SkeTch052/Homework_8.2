#include "Rectangle.h"
#include "Wrong_Figure.h"
#include <iostream>

Rectangle::Rectangle() {
    name = "�������������";
    c = a; d = b;
    A = 90; B = 90; C = 90; D = 90;
    if ((a != c) || (b != d)) {
        //throw Wrong_Figure();
        throw std::domain_error("������� a,c � b,d ������ ���� ������� �����");
    }
    else if ((A != 90) || (B != 90) || (C != 90) || (D != 90)) {
        //throw Wrong_Figure();
        throw std::domain_error("��� ���� ������ ���� ����� 90");
    }
    else {
        std::cout << name << " (�������: " << a << ", " << b << ", " << c << ", " << d << "; ����: " << A << ", " << B << ", " << C << ", " << D << ") ������\n" << std::endl;
    }
}