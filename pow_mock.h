#ifndef __POW_MOCK_H__
#define _POW_MOCK_H__

#include <string>

class Pow_Mock {
  public:
    Pow_Mock() {}
    ~Pow_Mock() {}

    double evaluate() { // parameters: 3, 2
      return 9;
    }
    
    std::string stringify() {
      return "(3 ** 2)";
    }
}

#endif // __POW_MOCK_H__
