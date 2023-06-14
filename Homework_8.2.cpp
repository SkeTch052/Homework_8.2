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
        Triangle triangle;
        Right_Triangle right_triangle;
        Isosceles_Triangle isosceles_triangle;
        Equilateral_Triangle equilateral_triangle;

        Quadrangle quadrangle;
        Rectangle rectangle;
        Square square;
        Parallelogram parallelogram;
        Rhombus rhombus;
    }
    //catch (const Wrong_Figure& error) { std::cout << "Ошибка создания фигуры. Причина: " << error.what() << std::endl; }
    catch (const std::domain_error& er) { std::cout << "Ошибка создания фигуры. Причина: " << er.what() << std::endl; }

    return 0;
}