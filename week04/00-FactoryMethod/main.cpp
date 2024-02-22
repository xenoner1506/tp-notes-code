#include "character.hpp"
#include "creator.hpp"
#include <iostream>
#include <memory>

int main() {
  std::shared_ptr<Creator> mage_creator = std::make_shared<MageCreator>();
  std::shared_ptr<Creator> swordman_creator =
      std::make_shared<SwordmanCreator>();
  std::shared_ptr<Character> mage = mage_creator->CreateCharacter();
  std::shared_ptr<Character> swordman = swordman_creator->CreateCharacter();
  return 0;
}
