#include <iostream>
#include <list>

int main() {
    std::list<int> v = {1, 2, 3, 4}; // сначала это был вектор

    auto iter = v.begin();  // итератор
    int* ptr = &v.front();  // указатель
    int& ref = v.front();  // ссылка

    std::cout << *iter << " " << *ptr << " " << ref << "\n";  // 1 1 1

    v.push_back(5);  // происходит реаллокация

    // обращаться к старым итераторам, указателям и ссылкам больше нельзя:
    std::cout << *iter << " " << *ptr << " " << ref << "\n";  // неопределённое поведение!
}
