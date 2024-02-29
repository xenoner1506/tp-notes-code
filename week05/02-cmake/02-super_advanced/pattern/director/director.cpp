#include "director.hpp"

void Director::SetBuilder(std::shared_ptr<Builder> builder) {
  this->builder = std::move(builder);
}

std::shared_ptr<Character> Director::CreateCharacter() const {
  builder->InitCharacter();
  builder->BuildHealth();
  builder->BuildMana();
  builder->BuildAgility();
  return std::move(builder->GetCharacter());
}
