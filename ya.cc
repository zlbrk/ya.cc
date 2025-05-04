#include <iostream>
#include <unordered_map>

// перегруженная версия erase

int main() {
  std::unordered_multimap<std::string, int> data = {
    {"a", 1},
    {"a", 2},
    {"a", 3},
    {"b", 4}    
  };
  
  auto iter = data.find("a");
    
  if (iter != data.end()) {
    // печатаем найденный элемент
    data.erase(iter);
    // удаляем первое  найденное вхождение
    // с ключом "a"
  } 
  std::cout << "Before erase(\"a\"):\n";
  for (const auto& [key, val] : data) {
    std::cout << key << "\t" << val << "\n"; 
  }
  std::cout << "\n";

  data.erase("a");
  std::cout << "After erase(\"a\"):\n";

  for (const auto& [key, val] : data) {
    std::cout << key << "\t" << val << "\n"; 
  }

  return 0;
}
