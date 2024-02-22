#include "builder.hpp"
#include "character.hpp"

void SwordmanBuilder::BuildHealth() { _character->SetHealth(10); }

void SwordmanBuilder::BuildMana() { _character->SetMana(20); }

void SwordmanBuilder::BuildAgility() { _character->SetAgility(5); }

void SwordmanBuilder::InitCharacter() {
  _character = std::make_shared<Character>();
}

std::shared_ptr<Character> SwordmanBuilder::GetCharacter() {
  return std::move(_character);
}

void MageBuilder::BuildHealth() { _character->SetHealth(20); }

void MageBuilder::BuildMana() { _character->SetMana(5); }

void MageBuilder::BuildAgility() { _character->SetAgility(5); }

void MageBuilder::InitCharacter() {
  _character = std::make_shared<Character>();
}

std::shared_ptr<Character> MageBuilder::GetCharacter() {
  return std::move(_character);
}

void ArcherBuilder::BuildHealth() { _character->SetHealth(10); }

void ArcherBuilder::BuildMana() { _character->SetMana(5); }

void ArcherBuilder::BuildAgility() { _character->SetAgility(10); }

void ArcherBuilder::InitCharacter() {
  _character = std::make_shared<Character>();
}

std::shared_ptr<Character> ArcherBuilder::GetCharacter() {
  return std::move(_character);
}
