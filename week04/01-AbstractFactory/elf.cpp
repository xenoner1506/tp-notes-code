#include "elf.hpp"

void ElfMage::IncreaseMana() { mana_point += 2; }

void ElfMage::EnchantHuman(Human &character) { --mana_point; }

void ElfSwordman::IncreaseMana() { ++mana_point; }
void ElfSwordman::EnchantHuman(Human &character) {
  mana_point -= character.Health();
}
