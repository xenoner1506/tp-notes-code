#pragma once

#include "character.hpp"
#include <memory>

class Creator {
public:
  virtual std::shared_ptr<Character> CreateCharacter() const = 0;
};

class MageCreator : public Creator {
public:
  virtual std::shared_ptr<Character> CreateCharacter() const override;
};

class SwordmanCreator : public Creator {
public:
  virtual std::shared_ptr<Character> CreateCharacter() const override;
};
