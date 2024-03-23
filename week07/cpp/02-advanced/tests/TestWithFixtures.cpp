#include "TestWithFixtures.h"

void TestWithFixtures::SetUpCase() { std::cout << "SetUpCase()\n"; }

void TestWithFixtures::SetUp() {
  std::cout << "SetUp()\n";
  thermometer = new FahrenheitThermometer(0);
}

void TestWithFixtures::TearDown() {
  std::cout << "TearDown()\n";
  delete thermometer;
}

float TestWithFixtures::GetTemperature() const {
  return thermometer->getFahrenheitTemperature();
}

TEST_F(TestWithFixtures, Subtest_1) {
  std::cout << "TEST_F\n";
  EXPECT_EQ(TestWithFixtures::GetTemperature(), 0);
}
