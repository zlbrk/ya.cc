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

  auto iter = l.begin();
  ++iter;
  l.insert(iter, 5);  // вставляем на эту позицию элемент
  // печатаем обновлённый список
  printli("mod1", l);

  // Удаляем из списка чётные числа
  for (auto iter = l.begin(); iter != l.end(); ) {
    if (*iter % 2 == 0) {
      iter = l.erase(iter);  // возвращается итератор на элемент, следующий за удалённым
    } else {
      ++iter;
    }
  }
  printli("mod2", l);

  return 0;
}
