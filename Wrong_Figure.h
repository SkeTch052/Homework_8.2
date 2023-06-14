#pragma once
#include <stdexcept>

class Wrong_Figure : public std::domain_error {
public:
	Wrong_Figure() : std::domain_error("Domain Error") {

	};
	//const char* what() const override { return "What Error"; };


	//Wrong_Figure();
    //const char* what() const override { return "Ошибка"; };
};