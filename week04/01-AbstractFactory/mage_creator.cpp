#include "mage_creator.hpp"

std::shared_ptr<Elf> MageCreator::CreateElf() {
  return std::make_shared<ElfMage>();
}

std::shared_ptr<Human> MageCreator::CreateHuman() {
  return std::make_shared<HumanMage>();
}
