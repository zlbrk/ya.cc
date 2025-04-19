#include <iostream>
#include <set>
#include <string>
#include <unordered_set>


int main() {
  // здесь будем хранить все слова (каждое по одному разу)
  std::unordered_set<std::string> words;
  
  // здесь будем хранить повторяющиеся слова
  // используем set, чтобы потом напечатать их
  // по алфавиту
  std::set<std::string> duplicate_words;
  
  // переменная, в которую считывается очередное слово
  // из входного потока
  std::string word;
  
  while (std::cin >> word) {
    auto [iter, has_been_inserted] = words.insert(word);
    if (!has_been_inserted) {
      duplicate_words.insert(word);
    }
  }


  for (const auto& word : duplicate_words) {
    std::cout << word << "\n";
  }
  return 0;
}
