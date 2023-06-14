#include <iostream>
#include <locale.h>
#include <string>
#include "Figure.h"
#include "Right_Triangle.h"
#include "Isosceles_Triangle.h"
#include "Equilateral_Triangle.h"
#include "Triangle.h"
#include "Quadrangle.h"
#include "Rectangle.h"
#include "Parallelogram.h"
#include "Square.h"
#include "Rhombus.h"
#include "Wrong_Figure.h"

int main() {
    setlocale(LC_ALL, "Russian");

    try {
        Triangle triangle; triangle.print_info();
        Right_Triangle right_triangle; right_triangle.print_info();
        Isosceles_Triangle isosceles_triangle; isosceles_triangle.print_info();
        Equilateral_Triangle equilateral_triangle; equilateral_triangle.print_info();

        Quadrangle quadrangle; quadrangle.print_info();
        Rectangle rectangle; rectangle.print_info();
        Square square; square.print_info();
        Parallelogram parallelogram; parallelogram.print_info();
        Rhombus rhombus; rhombus.print_info();
    }
    catch (const std::domain_error& er) { std::cout << "Ошибка создания фигуры. Причина: " << er.what() << std::endl; }

    return 0;
}