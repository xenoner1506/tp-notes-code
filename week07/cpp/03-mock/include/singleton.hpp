#pragma once
#include <string>

class MockSingleton;

class Singleton {
private:
  Singleton();
  static Singleton *singleton_;
  static bool initialized;
  friend class MockSingleton;
public:
  static Singleton *GetInstance();
  virtual bool isInitialized() const;
};
