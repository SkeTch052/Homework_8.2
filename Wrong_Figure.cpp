#include "Wrong_Figure.h"
#include <stdexcept>

Wrong_Figure::Wrong_Figure() : std::domain_error("Domain Error") {}
//const char* Wrong_Figure::what() const { return "What Error"; }