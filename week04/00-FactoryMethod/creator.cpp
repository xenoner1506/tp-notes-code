#include "creator.hpp"

std::shared_ptr<Character> MageCreator::CreateCharacter() const {
  return std::make_shared<Mage>();
}

std::shared_ptr<Character> SwordmanCreator::CreateCharacter() const {
  return std::make_shared<Swordman>();
}
