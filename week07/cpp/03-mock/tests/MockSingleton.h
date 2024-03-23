#pragma once

#include "singleton.hpp"
#include <gmock/gmock.h>

class MockSingleton : public Singleton {
  public:
    MOCK_METHOD(bool, isInitialized, (), (const, override));
};
