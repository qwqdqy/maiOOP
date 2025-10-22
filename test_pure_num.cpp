#include <gtest/gtest.h>
#include "pure_num.h"

TEST(PureNumberTest, 123) 
{
EXPECT_TRUE(isPureNum(123)); 
}
TEST(PureNumberTest, 122334) 
{
EXPECT_TRUE(isPureNum(122334));
}
TEST(PureNumberTest, negative1337)
{
EXPECT_TRUE(isPureNum(-1337));
}
TEST(PureNumberTest, negative9821)
{
EXPECT_FALSE(isPureNum(-9871));
}
TEST(PureNumberTest, 5) 
{
EXPECT_TRUE(isPureNum(5));
}
TEST(PureNumberTest, 321) 
{
EXPECT_FALSE(isPureNum(321));
}
TEST(PureNumberTest, 7) 
{
EXPECT_TRUE(isPureNum(7));
}
