#ifndef _COOLPTR_
#define _COOLPTR_

#include <iostream>

template<typename T> class CoolPtr {
  public:
    CoolPtr(): target_(nullptr) {}
    CoolPtr(T* target): target_(target) {}
    CoolPtr(const T&) = delete;  // copy ctor deleted
    CoolPtr(CoolPtr&& obj): target_(nullptr) {
      target_ = obj.target_;
      obj.target_ = nullptr;
    }
    ~CoolPtr() { if(target_) delete target_; }

    CoolPtr& operator=(const CoolPtr&) = delete;
    CoolPtr& operator=(CoolPtr&& obj) {
      if(target_) delete target_;
      target_ = obj.target_;
      obj.target_ = nullptr;
      return *this;
    }
  private:
    T* target_;
};

#endif
