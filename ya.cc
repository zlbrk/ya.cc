#include <iostream>
#include <list>

void printli (const char* list_name, const std::list<int>& l) {
  std::cout << list_name << ": [";
  for (int i : l) {
    std::cout << i << ", ";
  }
  std::cout << "\b\b]\n";
}

int main() {
  std::list<int> l = {0, 10, 15, 20};
  // печатаем оригинальный список
  printli("orig", l);
  // вместо этого можно воспользоваться std::next(l.begin())
  // auto iter = l.begin();
  // ++iter;
  auto iter = std::next(l.begin());
  l.insert(iter, 5);  // вставляем на эту позицию элемент

  // печатаем обновлённый список
  printli("mod1", l);
  std::advance(iter, -2);
  std::cout << "*iter after std::advance(iter, -2): " << *iter << "\n";

  // Удаляем из списка чётные числа
  for (auto iter = l.begin(); iter != l.end(); ) {
    if (*iter % 2 == 0) {
      iter = l.erase(iter);  // возвращается итератор на элемент, следующий за удалённым
    } else {
      ++iter;
    }
  }
  printli("mod2", l);
  auto iter2 = l.begin();

  std::cout << "*iter2 before std::advance(iter2, 1): " << *iter2 << "\n";

  std::advance(iter2, 1);

  std::cout << "*iter2 after std::advance(iter2, 1): " << *iter2 << "\n";

  return 0;
}
