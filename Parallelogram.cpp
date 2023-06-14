#include "Parallelogram.h"
#include "Wrong_Figure.h"
#include <iostream>

Parallelogram::Parallelogram() {
    name = "��������������";
    A = 30; C = A; B = 40; D = B;
    if ((A != C) || (B != D)) {
        throw std::domain_error("���� A, C � B, D ������ ���� ������� �����");
    }
    else if ((A + B + C + D) != 360) {
        throw std::domain_error("����� ����� �� ����� 360");
    }
}
void Parallelogram::print_info() {
    Quadrangle::print_info();
}