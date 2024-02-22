#pragma once
#include "elf.hpp"
#include "human.hpp"
#include <memory>

class CharacterCreator {
public:
  virtual std::shared_ptr<Elf> CreateElf() = 0;
  virtual std::shared_ptr<Human> CreateHuman() = 0;
};
