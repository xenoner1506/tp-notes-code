#include "enemy.hpp"

Ghost::Ghost(std::string_view yell) : yell(yell) {}
Ghost::Ghost(const Ghost &other) { this->yell = other.yell; }
Enemy *Ghost::clone() const { return new Ghost(*this); }

Goblin::Goblin(std::string_view yell) : yell(yell) {}
Goblin::Goblin(const Goblin &other) { this->yell = other.yell; }
Enemy *Goblin::clone() const { return new Goblin(*this); }
