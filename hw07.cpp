#include "coolptr.h"
#include "CS1C.h"

int main() {
  CoolPtr<CS1C> nullcool;
  std::cout << "nullcool is constructed with default ctor so it holds nullptr\n";

  CoolPtr<CS1C> jptr(new CS1C("Jose"));
  std::cout << "jptr is holding: " << jptr->getName() << '\n';

  CoolPtr<CS1C> cptr(new CS1C("Laika"));
  std::cout << "cptr is holding: " << cptr->getName() << "\n\n";

  nullcool = std::move(jptr);
  std::cout << "Moving jptr to nullcool\n";

  std::cout << "nullcool is holding: " << nullcool->getName() << '\n';
  
  jptr = std::move(cptr);
  std::cout << "Moving cptr to jptr\n";

  std::cout << "jptr is now holding: " << jptr->getName() << '\n';
}
