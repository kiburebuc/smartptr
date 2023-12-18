#include "coolptr.hpp"

int main() {
  //CS1C* ptr = new CS1C;
  std::string st = "Jose";
  CoolPtr<CS1C> defptr;
  CoolPtr<CS1C> cptr = new CS1C(st);
  //CoolPtr<CS1C> notsocool = cptr;
  defptr = cptr;
  return 0;
}
