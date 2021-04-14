#ifndef __ADD_HPP__
#define __ADD_HPP__

#include "op.hpp"

class Add: public Base {
  public:

    Base* b1;
    Base* b2;

    Add(Base* a, Base* b) {
      b1 = a;
      b2 = b;
    }

    ~Add() {
      delete b1;
      delete b2;
    }

    double evaluate() {
      return b1->evaluate() + b2->evaluate();
    }

    std::string stringify() {
      return "(" + std::to_string(b1->evaluate()) + " + " + std::to_string(b2->evaluate()) + ")";
    }
};

#endif // __ADD_HPP__

