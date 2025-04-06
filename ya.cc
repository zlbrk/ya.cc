#include <iostream>
#include <map>
#include <string>

int main() {
  // инициализируем map набором пар {ключ, значение}
  std::map<std::string, int> years = {
    {"Moscow", 1147},
    {"Rome", -753},
    {"London", 47},
  };

  for (const auto& [city, year] : years) {
    std::cout << city << ": " << year << "\n";
  }

  std::cout << "\nwithout auto\n";

  // если бы не было автовыведения типов, то
  // пришлось бы писать полностью
  for (const std::pair<const std::string, int>& item : years) {
    // иными словами, в примере элементами контейнера map
    // являются пары типа std::pair<const std::string, int>,
    //
    std::cout << item.first << ": " << item.second << "\n";
  }
  return 0;
}
