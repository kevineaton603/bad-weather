#include "../Example.h"
#include <gtest/gtest.h>

TEST(ExampleTests, isTrue) {

    EXPECT_EQ(isTrue(true), true);
    EXPECT_EQ(isTrue(false),false);
}