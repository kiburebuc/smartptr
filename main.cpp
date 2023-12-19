#include "coolptr.h"
#include "CS1C.h"

int main() {
  std::string st = "Jose";
  CoolPtr<CS1C> defptr;
  CoolPtr<CS1C> cptr(new CS1C(st));
}
