#ifndef _CS1C_
#define _CS1C_

#include <iostream>

class CS1C {
  public:
    CS1C(): student_("N/A") {}
    CS1C(std::string stu): student_(stu) {}
  private:
    std::string student_;
};

#endif
