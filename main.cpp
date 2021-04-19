#include <iostream>

#include "op.hpp"
#include "add.h"
#include "mult.h"
#include "pow.h"
#include "sub.h"

int main() {
    // This is a very basic main, and being able to correctly execute this main
    // does not constitute a completed lab. Make sure you write unit tests for
    // all the classes that you create (and can be instantiated) in this lab
    Base* three = new Op(3);
    Base* seven = new Op(7);
    Base* four = new Op(4);
    Base* two = new Op(2);
    //Base* mult = new Mult(seven, four);
    //Base* add = new Add(three, mult);
    //Base* minus = new Sub(add, two);

    std::cout << three->stringify() << " = " << three->evaluate() << std::endl;
    
    Base* add = new Add(four, two);
    std::cout << add->stringify() << " = " << add->evaluate() << std::endl;
    
    Base* mult = new Mult(add, three);
    std::cout << mult->stringify() << " = " << mult->evaluate() << std::endl;

    Base* pow = new Pow(two, three);
    std::cout << pow->stringify() << " = " << pow->evaluate() << std::endl;

    Base* sub = new Sub(seven, two);
    std::cout << sub->stringify() << " = " << sub->evaluate() << std::endl;

    return 0;
}
