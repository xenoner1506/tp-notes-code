#pragma once
#include "character_creator.hpp"

class SwordmanCreator : public CharacterCreator {
public:
  virtual std::shared_ptr<Elf> CreateElf() override;
  virtual std::shared_ptr<Human> CreateHuman() override;
};
