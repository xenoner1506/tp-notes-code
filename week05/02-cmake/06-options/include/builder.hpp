#pragma once
#include "character.hpp"
#include <memory>

class Builder {
public:
  virtual void InitCharacter() = 0;
  virtual void BuildHealth() = 0;
  virtual void BuildMana() = 0;
  virtual void BuildAgility() = 0;
  virtual std::shared_ptr<Character> GetCharacter() = 0;
};

class SwordmanBuilder : public Builder {
private:
  std::shared_ptr<Character> _character;

public:
  void InitCharacter() override;
  void BuildHealth() override;
  void BuildMana() override;
  void BuildAgility() override;
  std::shared_ptr<Character> GetCharacter() override;
};

class MageBuilder : public Builder {
private:
  std::shared_ptr<Character> _character;

public:
  void InitCharacter() override;
  void BuildHealth() override;
  void BuildMana() override;
  void BuildAgility() override;
  std::shared_ptr<Character> GetCharacter() override;
};

class ArcherBuilder : public Builder {
private:
  std::shared_ptr<Character> _character;

public:
  void InitCharacter() override;
  void BuildHealth() override;
  void BuildMana() override;
  void BuildAgility() override;
  std::shared_ptr<Character> GetCharacter() override;
};
