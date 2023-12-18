#include <iostream>

class CS1C {
  public:
    CS1C() {}
    CS1C(std::string student) : student_(student) {
      std::cout << "ctor\n";
    }
  private:
    std::string student_;
};

template<typename T> class CoolPtr {
  public:
    CoolPtr() { std::cout << "im def ctor\n";}
    CoolPtr(T* target) : target_(target) {
      std::cout << "ctor\n;";
    }
    CoolPtr(const T&) = delete;  // copy ctor deleted
    ~CoolPtr() {
      std::cout << "dtor\n";
      delete target_;
    }
  private:
    T* target_;
};
