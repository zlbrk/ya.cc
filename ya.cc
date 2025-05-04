#include <algorithm>
#include <iostream>
#include <list>
#include <npkit.hh>

int main() {
    std::list<int> vi = {2, 7, 1, 8, 2, 8};
    std::list<std::string> vs = {"one", "two", "three"};
    printc("vi", vi);
    printc("vs", vs);
    // std::cout << std::count(v.begin(), v.end(), 8) << "\n";
}