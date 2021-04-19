#ifndef __DIV_HPP__
#define __DIV_HPP__

#include "op.hpp"

class Div: public Base {
  public:

    Base* b1;
    Base* b2;

    Div(Base* a, Base* b) {
      b1 = a;
      b2 = b;
    }

    ~Div() {
      delete b1;
      delete b2;
    }

    double evaluate() {
      if(b2->evaluate() != 0){ return b1->evaluate() / b2->evaluate(); }
    }

    std::string stringify() {
      return "(" + std::to_string(b1->evaluate()) + " / " + std::to_string(b2->evaluate()) + ")";
    }
};

#endif // __DIV_HPP__

