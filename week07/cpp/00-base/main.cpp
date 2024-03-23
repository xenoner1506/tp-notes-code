#include "gtest/gtest.h"

int add(int value1, int value2) {
    return (value1 + value2);
}

TEST(AddTest, PositiveNos) {
    EXPECT_EQ(16, add(8, 8));
}

TEST(AddTest, NeqNos) {
    EXPECT_NE(15, add(8, 8));
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);

  return RUN_ALL_TESTS();
}
