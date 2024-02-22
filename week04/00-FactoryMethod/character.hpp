#pragma once
#include <iostream>

class Character {
protected:
  int health_point = 10;
  int mana_point = 10;

public:
  virtual void Sound() = 0;
};

class Mage : public Character {
public:
  void Sound() override;
};

class Swordman : public Character {
public:
  void Sound() override;
};
