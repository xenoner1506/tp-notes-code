#include <algorithm>
#include <iostream>
#include <vector>

int main() {
  std::vector<int> vector = {};
  int val = 0;
  std::cin >> val;
  while (val != 0) {
    vector.push_back(val);
    std::cin >> val;
  }
  std::for_each(vector.rbegin(), vector.rend(),
                [](auto &val) { std::cout << val << std::endl; });
  return 0;
}
