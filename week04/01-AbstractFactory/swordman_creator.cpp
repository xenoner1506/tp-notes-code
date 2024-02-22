#include "swordman_creator.hpp"

std::shared_ptr<Elf> SwordmanCreator::CreateElf() {
  return std::make_shared<ElfMage>();
}

std::shared_ptr<Human> SwordmanCreator::CreateHuman() {
  return std::make_shared<HumanMage>();
}
