#pragma once
#include <string>
#include <string_view>

class Enemy {

public:
  virtual Enemy *clone() const = 0;

  virtual ~Enemy() = default;
};

class Ghost : public Enemy {
private:
  std::string yell;

public:
  explicit Ghost(std::string_view);
  Ghost(const Ghost &);
  Enemy *clone() const override;
};

class Goblin : public Enemy {
private:
  std::string yell;

public:
  explicit Goblin(std::string_view);
  Goblin(const Goblin &);
  Enemy *clone() const override;
};
