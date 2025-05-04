#pragma once
#include <iostream>
template <typename Container>
void printc (const std::string name, const Container& container) {
	std::cout << name << ": [";
	for (const auto& elem : container ) {
		std::cout << elem << ", ";
	}
	std::cout << "\b\b]\n";
}