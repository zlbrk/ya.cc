#include <algorithm>
#include <iostream>
#include <string>
#include <tuple>
#include <unordered_map>
#include <vector>

int main() {

  std::unordered_map<std::string, int> freqs;
  // freqs.reserve(300'000);  // можно использовать апостроф для выделения разрядов
  std::string word;

  while (std::cin >> word) {
    ++freqs[word]; // вставка считанного слова в контейнер
    // так как повторная вставка ключа перезаписывает
    // его значение, то таким нехитрым образом мы узнаем
    // сколько раз одно и то же слово встретилось в файле
  }

  // копируем пары в вектор, используя шаблонный конструктор от двух итераторов:
  std::vector<std::pair<std::string, int>> sortedByFreq(
    freqs.begin(),
    freqs.end()
  );

  // сортируем с помощью своей лямбда-функции:
  std::sort(
    sortedByFreq.begin(),
    sortedByFreq.end(),
    [](const auto& p1, const auto& p2) {
      // сначала сравниваем частоты по убыванию, потом - слова по возрастанию
      return std::tie(p2.second, p1.first) < std::tie(p1.second, p2.first);
    }
  );



  for (const auto& [word, freq] : sortedByFreq) {
    std::cout << word << "\t" << freq << "\n";
  }
  return 0;
}
