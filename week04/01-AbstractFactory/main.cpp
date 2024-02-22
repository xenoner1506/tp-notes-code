#include "character_creator.hpp"
#include "mage_creator.hpp"
#include "swordman_creator.hpp"
#include <iostream>

int main() {
  std::shared_ptr<CharacterCreator> mage_creator =
      std::make_shared<MageCreator>();
  std::shared_ptr<CharacterCreator> swordman_creator =
      std::make_shared<SwordmanCreator>();

  std::shared_ptr<Elf> mage_elf = mage_creator->CreateElf();
  std::shared_ptr<Human> mage_human = mage_creator->CreateHuman();

  mage_elf->IncreaseMana();
  mage_elf->EnchantHuman(*mage_human);

  std::shared_ptr<Elf> swordman_elf = swordman_creator->CreateElf();
  std::shared_ptr<Human> swordman_human = swordman_creator->CreateHuman();

  swordman_elf->IncreaseMana();
  swordman_elf->EnchantHuman(*swordman_human);

  return 0;
}
