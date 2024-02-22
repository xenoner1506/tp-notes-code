#pragma once
#include <memory>

class Character {
private:
  int health_points = 0;
  int mana_points = 0;
  int agility_points = 0;

public:
  void SetHealth(int);
  void SetMana(int);
  void SetAgility(int);
};
