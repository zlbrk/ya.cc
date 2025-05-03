#include <iostream>
#include <map>


int main() {
  // здесь будем хранить все слова (каждое по одному разу)
  std::multimap<std::string, int> positions;
  
  std::string word;
  int position = 0;
    
  while (std::cin >> word) {
    positions.insert({word, position});
    ++position;
  }


  for (const auto& [word, pos] : positions) {
    std::cout << word << "\t" << pos << "\n";
  }
  return 0;
}
