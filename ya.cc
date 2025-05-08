#include <algorithm>
#include <iostream>
#include <set>
#include <npkit.hh>

// using namespace np;

// Демонстрация различий 
// между алгоритмами и встроенными функциями
int main() {
  std::set<int> numbers = {2, 3, 5, 7, 11, 13, 17, 19};
  // std::set<std::string> ds = {"one", "two", "three", "two", "one"};
  np::printc("numbers", numbers);

  //Предпочтительный способ
  auto iter1 = numbers.find(19);

  if (iter1 != numbers.end()) {
    std::cout << *iter1 << " found at " << &*iter1 << "\n";
  } else {
    std::cout << "Not found!\n";
  }

  // Допустимо, но неэффективно!
  auto iter2 = std::find(numbers.begin(), numbers.end(), 11);

  if (iter2 != numbers.end()) {
    std::cout << *iter2 << " found at " << &*iter2 << "\n";
  } else {
    std::cout << "Not found!\n";
  }
  std::cout << "Diff: " << &*iter1 - &*iter1 << "\n";  

}