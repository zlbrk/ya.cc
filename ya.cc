#include <algorithm>
#include <iostream>
#include <deque>
#include <npkit.hh>


// пример применения ф-ции std::find
int main() {
  std::deque<int> di = {1, 2, 3, 4, 3, 2, 1, 0};
  std::deque<std::string> ds = {"one", "two", "three", "two", "one"};
  printc("vi", di);
  printc("vs", ds);
  std::cout << std::count(di.begin(), di.end(), 8) << "\n";
  std::cout << np_count(ds.begin(), ds.end(), "one") << "\n";
  auto iter1 = std::find(di.begin(), di.end(), 4);
  // итераторы дека можно вычитать, напечатается индекс
  // найденного элемента
  // std::cout << (iter1 - di.begin()) << "\n";
  std::cout << "" << (iter1 - di.begin()) << "\n";

}