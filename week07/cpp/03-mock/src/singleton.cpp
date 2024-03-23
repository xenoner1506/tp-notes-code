#include "singleton.hpp"

bool Singleton::initialized = false;
Singleton *Singleton::singleton_ = nullptr;

Singleton::Singleton() = default;

bool Singleton::isInitialized() const {
  return initialized;
}

Singleton *Singleton::GetInstance() {
  if (singleton_ == nullptr) {
    singleton_ = new Singleton;
    initialized = true;
    return singleton_;
  }
  return singleton_;
}
