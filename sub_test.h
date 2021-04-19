#ifndef __SUB_TEST_H__
#define __SUB_TEST_H__

#include "gtest/gtest.h"

#include "sub.h"

TEST(SubTest, ThreeMinusTwo) {
  Base* three = new Op(3);
  Base* two = new Op(2);
  Sub* minus = new Sub(three, two);
  EXPECT_DOUBLE_EQ(minus->evaluate(), 1.000000);
  EXPECT_EQ(minus->stringify(), "(3.000000 - 2.000000)");
}

TEST(SubTest, LargeNumbers) {
  Base* large1 = new Op(49723);
  Base* large2 = new Op(8651);
  Sub* minus = new Sub(large1, large2);
  EXPECT_DOUBLE_EQ(minus->evaluate(), 41072.000000);
  EXPECT_EQ(minus->stringify(), "(49723.000000 - 8651.000000)");
}

TEST(SubTest, Negatives) {
  Base* negative1 = new Op(-32);
  Base* negative2 = new Op(-5);
  Sub* minus = new Sub(negative1, negative2);
  EXPECT_DOUBLE_EQ(minus->evaluate(), -27.000000);
  EXPECT_EQ(minus->stringify(), "(-32.000000 - -5.000000)");
}

TEST(SubTest, Zero) {
  Base* number = new Op(83);
  Base* zero = new Op(0);
  Sub* minus = new Sub(number, zero);
  EXPECT_DOUBLE_EQ(minus->evaluate(), 83.000000);
  EXPECT_EQ(minus->stringify(), "(83.000000 - 0.000000)");
}

#endif // __SUB_TEST_H__
