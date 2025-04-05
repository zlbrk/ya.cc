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
    iter1 = fl.erase_after(iter1);
    fl.push_front(1);
    // 1 2 3 5

    auto iter2 = std::next(fl.begin());
    iter2 = fl.erase_after(std::next(iter2));
    // fl.insert_after(std::next(iter2), 4);
    fl.push_front(0);
    // Покраска кубика Рубика
    for (int x : fl) {
      x = x + 1;
      std::cout << x << "\n";  // 1 2 3 5
    }


}
