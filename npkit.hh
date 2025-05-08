#pragma once
#include <iostream>

namespace np {

template <typename Container>
void printc (const std::string name, const Container& container) {
	std::cout << name << ": [";
	for (const auto& elem : container ) {
		std::cout << elem << ", ";
	}
	std::cout << "\b\b]\n";
}

template <typename Iter, typename Value>
// два шаблонных параметра: тип итератора 
// и тип эталонного элемента
int count(Iter first, Iter last, const Value& value) {
	int counter = 0;
	for (Iter iter = first; // инициализация 
		iter != last; // проверка
		++iter) { // сдвиг
		if (*iter == value) {
			++counter;
		}
	}
	return counter;
}

template <typename It, typename Val>
It find(It first, It last, const Val& value) {
	while (first != last) {
		if (*first == value) {
			return first;
		}
		++first;
	}
	return last;
}

} // namespace np