#include "Figure.h"
#include <string>
#include <iostream>

Figure::Figure() {
    sides_count = 0;
    name = "������";
}
void Figure::print_info() {
    std::cout << name;
}