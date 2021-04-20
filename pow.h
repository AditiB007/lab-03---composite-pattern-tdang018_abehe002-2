#ifndef __POW_HPP__
#define __POW_HPP__

#include "op.hpp"

class Pow: public Base {
  public:

    Base* b1;
    Base* b2;

    Pow(Base* a, Base* b) {
      b1 = a;
      b2 = b;
    }

    ~Pow() {
      delete b1;
      delete b2;
    }

    double evaluate() {
      double result = 1;
      for(int i = 0; i < b2->evaluate(); i++) {
        result *= b1->evaluate();
      }
      return result;
    }

    std::string stringify() {
      return "(" + b1->stringify() + " ** " + b2->stringify() + ")";
    }
};

#endif // __ADD_HPP__

