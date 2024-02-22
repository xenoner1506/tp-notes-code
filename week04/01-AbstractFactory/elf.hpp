#pragma once
#include "human.hpp"

class Elf {
protected:
  int mana_point = 10;

public:
  virtual void IncreaseMana() = 0;
  virtual void EnchantHuman(Human &) = 0;
};

class ElfMage : public Elf {
public:
  void IncreaseMana() override;
  void EnchantHuman(Human &) override;
};

class ElfSwordman : public Elf {
public:
  void IncreaseMana() override;
  void EnchantHuman(Human &) override;
};
