#pragma once
#include <iostream>

class Human {
public:
  virtual int Health() const = 0;
};

class HumanMage : public Human {
private:
  int health_point = 5;

public:
  virtual int Health() const override;
};

class HumanSwordman : public Human {
private:
  int health_point = 10;

public:
  virtual int Health() const override;
};
