#include "MockSingleton.h"


using ::testing::AtLeast;
using ::testing::Return;


TEST(SingletonTest, CheckValue) {
  MockSingleton singleton;
  EXPECT_CALL(singleton, isInitialized())
  .Times(AtLeast(1))
  .WillOnce(Return(true));

  auto result = singleton.isInitialized();
  ASSERT_EQ(result, true);
}
