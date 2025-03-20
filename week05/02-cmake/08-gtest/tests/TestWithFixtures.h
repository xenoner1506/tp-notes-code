#pragma once

#include <gtest/gtest.h>
#include "adaptee.hpp"

class TestWithFixtures : public ::testing::Test {
    private:
        FahrenheitThermometer *thermometer;
    public:
        static void SetUpCase();
        void SetUp() override;
        void TearDown() override;
        float GetTemperature() const;
};
