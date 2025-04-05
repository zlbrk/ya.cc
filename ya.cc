#include <forward_list>
#include <iostream>
#include <iterator>

int main() {
    std::forward_list<int> fl = {3, 42, 5};
    fl.push_front(2);
    // fl.push_back(10);  // ошибка компиляции!
    for (int x : fl) {
        std::cout << x << "\n";  // 2 3 42 5
    }
    std::cout << "\n";
    auto iter1 = std::next(fl.begin());
    // auto iter2 = std::next(fl.end());
    iter1 = fl.erase_after(iter1);
    fl.insert_after(iter1, 100500);

    for (int x : fl) {
        std::cout << x << "\n";  // 2 3 5 4
    }
}
