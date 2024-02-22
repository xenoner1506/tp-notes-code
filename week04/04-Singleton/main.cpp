#include "singleton.hpp"
#include <iomanip>

int main() {
  Singleton *object = Singleton::GetInstance("text");
  return 0;
}
