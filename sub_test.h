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

#endif // __SUB_TEST_H__
