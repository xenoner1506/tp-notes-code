#include "human.hpp"

int HumanMage::Health() const {
  std::cout << "Mage has " << health_point << std::endl;
  return health_point;
}

int HumanSwordman::Health() const {
  std::cout << "Swordman has " << health_point << std::endl;
  return health_point;
}
