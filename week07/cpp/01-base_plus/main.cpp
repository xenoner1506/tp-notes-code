#include <iostream>
#include "gtest/gtest.h"


// EQ|NE, LT|LE, GT|GE

TEST(TestCaseName, Subtest_1) {
  ASSERT_TRUE(1 == 1);  // success
}

TEST(TestCaseName, Subtest_2) {
  // ASSERT_FALSE('b' == 'b');  // fatal failure
  ASSERT_TRUE('b' == 'b');  // fatal failure
  std::cout << "We are in Subtest_2" << std::endl;
}

TEST(TestCaseName, Subtest_3) {
  EXPECT_EQ('b', 'c');  // non-fatal failure
  std::cout << "We are in Subtest_3" << std::endl;
}

TEST(TestCaseName, Subtest_4) {
  // Arange
  int value = 10;
  double multiplier = 1.4;

  // Act
  value *= multiplier;
  
  // Assert
  ASSERT_EQ(value, 14);
}

// TEST(MyArray, Sum_1) {
//   // Arrange
//   MyArray array = MyArray(12, 0);
// 
//   // Act
//   int expected_sum = 0;
// 
//   // Assert
//   ASSERT_EQ(array.sum(), expected_sum);
// }
// 
// TEST(MyArray, Sum_2) {
//   // Arrange
//   MyArray array = MyArray(12, 0);
//   for (size_t idx = 0; idx != 12; ++idx) {
//     array[idx] = idx;
//   }
// 
//   // Act
//   int expected_sum = (0 + 11) * 6;
// 
//   // Assert
//   ASSERT_EQ(array.sum(), expected_sum);
// }


int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);

  return RUN_ALL_TESTS();
}
