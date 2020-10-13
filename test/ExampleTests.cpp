#include <gtest/gtest.h>
#include "../src/Example.hpp"

struct ExampleTests : public ::testing::Test {
    int* x;
    int getX() { return *x; }
    void SetUp() override { x = new int(42); }
    void TearDown() override { delete x; }
};

bool f() { return true; }
TEST_F(ExampleTests, DemonstrateGTestMacros) {
    EXPECT_EQ(true, true);
    const bool result = f();
    EXPECT_EQ(true, result) << "Hello, world mistake is " << result;
    ASSERT_TRUE(true);
}

TEST_F(ExampleTests, MAC) {
    int y = 16;
    int sum = 100;
    int oldSum = sum;
    EXPECT_EQ(oldSum + getX() * y, MAC(getX(), y, sum));
    EXPECT_EQ(oldSum + getX() * y, sum);
}

TEST_F(ExampleTests, Square) {
    int x = 5;
    int expectedSquare = x * x;
    EXPECT_EQ(expectedSquare, square(5));
}
