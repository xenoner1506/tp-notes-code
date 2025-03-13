#include "include/singleton.hpp"
#include <iostream>

int main() {
  Singleton *object = Singleton::GetInstance("text");
  std::cout << object->value() << std::endl;
  return 0;
}
