#ifndef __MULT_MOCK_H__
#define _MULT_MOCK_H__

#include <string>

class Mult_Mock {
  public:
    Mult_Mock() {}
    ~Mult_Mock() {}

    double evaluate() { // parameters: 3, 2
      return 6;
    }
    
    std::string stringify() {
      return "(3 * 2)";
    }
}

#endif // __MULT_MOCK_H__
