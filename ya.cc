#include <iostream>
#include <vector>

using namespace std;

void PrintVS(const char* name, vector<string> vs) {
  cout << name;
  for (string s : vs) {
    cout << s << ", ";
  }
  cout << "\b\b!\n";
}

void Swap(vector<string>& s1, vector<string>& s2) {
  vector<string> temp = s1;
  s1 = s2;
  s2 = temp;
}

int main () {
  vector<string> words1 = {"one", "two", "three"};
  vector<string> words2 = {"tree", "two", "one"};

  cout << "Before Swap(words1, words2)" << "\n";
  PrintVS("words1: ", words1);
  PrintVS("words2: ", words2);

  Swap(words1, words2);

  cout << "After Swap(words1, words2)" << "\n";
  PrintVS("words1: ", words1);
  PrintVS("words2: ", words2);

  return 0;
}
