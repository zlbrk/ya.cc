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

  std::string word;
  while (std::cin >> word) {
    if (words.contains(word)) {
      duplicate_words.insert(word);
    } else {
      words.insert(word);
    }
  }


  for (const auto& word : duplicate_words) {
    std::cout << word << "\n";
  }
  return 0;
}
