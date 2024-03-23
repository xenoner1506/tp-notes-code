#include "singleton.hpp"
#include <iostream>

int main() {
  Singleton *object = Singleton::GetInstance();
  return 0;
}
