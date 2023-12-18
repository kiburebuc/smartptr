#ifndef _COOLPTR_
#define _COOLPTR_

#include <iostream>

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

#endif
