#include <iostream>
#include <algorithm>
#include <vector>
// обычно предполагается, что итераторы, передаваемые в функции
// из библиотеки <algorithm>, получают два итератора
// первый из которых указывает на начальный элемент контейнера,
// а второй "за последний" элемент

// если контейнер допускает движение по ит-рам в
// обе стороны, то у него есть две доп. функции:
// rbegin(), возвращающая итератор, ук. на последний эл-т, и
// функция rend(), возвращающая ит-р, ук. за первый эл-т.

// Это пример сортировки середины списка, без 
// первого и последнего эл-тов.
void printvec (const char* vname ,const std::vector<int>& vec) {
  std::cout << vname << ": [";
  for (int el : vec) {
    std::cout << el << ", ";
  }
  std::cout << "\b\b]\n";
}
int main() {
  std::vector<int> data = {100, 42, 17, 80, 20, 0};
  printvec("init data", data);
  // std::cout << "line";
  std::sort(data.begin() + 1, data.end() - 1);  // 100, 17, 20, 42, 80, 0
  printvec("sorted data", data);

  return 0;
}