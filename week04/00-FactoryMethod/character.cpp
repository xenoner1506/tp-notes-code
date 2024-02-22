#include "character.hpp"

void Mage::Sound() {
  std::cout << "You shall not pass!" << std::endl;
  ++mana_point;
}

void Swordman::Sound() {
  std::cout << "Nani!" << std::endl;
  ++health_point;
}
