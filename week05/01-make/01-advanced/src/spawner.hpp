#pragma once
#include "enemy.hpp"

class Spawner {
public:
  Spawner(Enemy *);
  Enemy *clone() const;

private:
  Enemy *prototype_;
};
