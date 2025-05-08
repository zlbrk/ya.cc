#include <algorithm>
#include <iostream>
#include <deque>
#include <npkit.hh>

// using namespace np;

// пример применения ф-ции std::find
int main() {
  std::deque<int> di = {1, 2, 3, 4, 3, 2, 1, 0};
  std::deque<std::string> ds = {"one", "two", "three", "two", "one"};
  np::printc("vi", di);
  np::printc("vs", ds);
  std::cout << std::count(di.begin(), di.end(), 8) << "\n";
  std::cout << np::count(ds.begin(), ds.end(), "one") << "\n";
  auto iter1 = std::find(di.begin(), di.end(), 4);
  // итераторы дека можно вычитать, напечатается индекс
  // найденного элемента
  // std::cout << (iter1 - di.begin()) << "\n";
  std::cout << "" << (iter1 - di.begin()) << "\n";

  // к итераторам дека и вектора можно прибавлять целые числа
  auto start = ds.begin();
  auto end = start + 3;
  auto iter2 = std::find(start, end, "five");
  auto iter3 = np::find(start, end, "three");
  if (iter2 == end) {
    std::cout << "No such element!\n";
  } else {
    std::cout << *iter2 << "\n";
  }
  std::cout << *iter3 << "\n";
}