#ifndef _COOLPTR_
#define _COOLPTR_

#include <iostream>

template<typename T> class CoolPtr {
  public:
    CoolPtr(): target_(nullptr) {}
    CoolPtr(T* target): target_(target) {}
    CoolPtr(const T&) = delete;  // Copy Ctor
    CoolPtr(CoolPtr&& obj): target_(obj.target_) { obj.target_ = nullptr; }
    ~CoolPtr() { if(target_) delete target_; }

    //Assignment Overloads
    CoolPtr& operator=(const CoolPtr&) = delete;
    CoolPtr& operator=(CoolPtr&& obj) {
      if(target_) delete target_;
      target_ = obj.target_;
      obj.target_ = nullptr;
      return *this;
    }

    //DeRef Overloads
    T& operator*() { return *target_; }
    T* operator->() { return target_; }
  private:
    T* target_;
};

#endif
