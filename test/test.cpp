#include <gtest/gtest.h>

TEST(HelloTest, StringsEqual) {
    EXPECT_STRNE("hello", "world");
}

TEST(HelloTest, IntEqual) {
    EXPECT_EQ(1, 1);
}

TEST(HelloTest, AnothaOne) {
    EXPECT_GE(2, 1);
}