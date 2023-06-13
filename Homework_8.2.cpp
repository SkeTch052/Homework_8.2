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

//void print_info_angle_3(const Triangle& x) {
//    std::cout << x.get_name() << ":" << std::endl;
//    std::cout << "Стороны: a=" << x.get_side_a() << " b=" << x.get_side_b() <<
//        " c=" << x.get_side_c() << std::endl;
//    std::cout << "Углы: A=" << x.get_angle_A() << " B=" << x.get_angle_B() <<
//        " C=" << x.get_angle_C() << std::endl << std::endl;
//}
//
//void print_info_angle_4(const Quadrangle& y) {
//    std::cout << y.get_name() << ":" << std::endl;
//    std::cout << "Стороны: a=" << y.get_side_a() << " b=" << y.get_side_b() <<
//        " c=" << y.get_side_c() << " d=" << y.get_side_d() << std::endl;
//    std::cout << "Углы: A=" << y.get_angle_A() << " B=" << y.get_angle_B() <<
//        " C=" << y.get_angle_C() << " D=" << y.get_angle_D() << std::endl << std::endl;
//}

int main() {
    setlocale(LC_ALL, "Russian");

    //Triangle triangle;
    //Right_Triangle right_triangle;
    //Isosceles_Triangle isosceles_triangle;
    //Equilateral_Triangle equilateral_triangle;

    //Quadrangle quadrangle;
    //Rectangle rectangle;
    //Square square;
    //Parallelogram parallelogram;
    //Rhombus rhombus;

    try {
        Triangle triangle;
    }
    catch (const Wrong_Figure& error) { std::cout << error.what() << std::endl; }

    //print_info_angle_3(triangle);
    //print_info_angle_3(right_triangle);
    //print_info_angle_3(isosceles_triangle);
    //print_info_angle_3(equilateral_triangle);

    //print_info_angle_4(quadrangle);
    //print_info_angle_4(rectangle);
    //print_info_angle_4(square);
    //print_info_angle_4(parallelogram);
    //print_info_angle_4(rhombus);

    return 0;
}