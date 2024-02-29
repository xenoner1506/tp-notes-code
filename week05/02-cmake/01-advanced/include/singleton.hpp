#pragma once
#include <string>

class Singleton {
protected:
  Singleton(const std::string value) : value_(value) {}

  static Singleton *singleton_;

  std::string value_;

public:
  Singleton(Singleton &other) = delete;
  void operator=(const Singleton &) = delete;
  static Singleton *GetInstance(const std::string &value);

  std::string value() const { return value_; }
};
