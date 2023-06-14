#include "Parallelogram.h"
#include "Wrong_Figure.h"
#include <iostream>

Parallelogram::Parallelogram() {
    name = "��������������";
    A = 30; C = A; B = 40; D = B;
    if ((A != C) || (B != D)) {
        //throw Wrong_Figure();
        throw std::domain_error("���� A, C � B, D ������ ���� ������� �����");
    } else {
        std::cout << name << " (�������: " << a << ", " << b << ", " << c << ", " << d << "; ����: " << A << ", " << B << ", " << C << ", " << D << ") ������\n" << std::endl;
    }
}