#ifndef __ADD_TEST_H__
#define __ADD_TEST_H__

#include "gtest/gtest.h"

#include "add.h"

TEST(AddTest, ThreePlusTwo) {
  Base* three = new Op(3);
  Base* two = new Op(2);
  Add* add = new Add(three, two);
  EXPECT_DOUBLE_EQ(add->evaluate(), 5.000000);
  EXPECT_EQ(add->stringify(), "(3.000000 + 2.000000)");
}

TEST(AddTest, LargeNumbers) {
  Base* large1 = new Op(1234);
  Base* large2 = new Op(5678);
  Add* add = new Add(large1, large2);
  EXPECT_DOUBLE_EQ(add->evaluate(), 6912.000000);
  EXPECT_EQ(add->stringify(), "(1234.000000 + 5678.000000)");
}

TEST(AddTest, Negatives) {
  Base* negative1 = new Op(-3);
  Base* negative2 = new Op(-2);
  Add* add = new Add(negative1, negative2);
  EXPECT_DOUBLE_EQ(add->evaluate(), -5.000000);
  EXPECT_EQ(add->stringify(), "(-3.000000 + -2.000000)");
}

TEST(AddTest, Zero) {
  Base* number = new Op(69);
  Base* zero = new Op(0);
  Add* add = new Add(number, zero);
  EXPECT_DOUBLE_EQ(add->evaluate(), 69.000000);
  EXPECT_EQ(add->stringify(), "(69.000000 + 0.000000)");
}
 
#endif // __ADD_TEST_H__
