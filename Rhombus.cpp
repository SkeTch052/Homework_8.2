#include "Rhombus.h"
#include "Wrong_Figure.h"
#include <iostream>

Rhombus::Rhombus() {
    name = "����";
    a = 30; b = a; c = a; d = a;
    if ((a != b) || (a != c) || (a != d)) {
        throw std::domain_error("��� ������� ������ ���� �����");
    } 
    else if ((A != C) || (B != D)) {
        throw std::domain_error("���� A, C � B, D ������ ���� ������� �����");
    }
    else if ((A + B + C + D) != 360) {
        throw std::domain_error("����� ����� �� ����� 360");
    }
}
void Rhombus::print_info() {
    Quadrangle::print_info();
}