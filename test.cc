#include "./xrflc.h"
#include "iostream"

struct Test {
  int a;
};
XRFLC_RGST(Test)

int main() {
  Test t;
  xrflc::Instance testInstance = xrflc::Load(t);
  std::printf("%s\n", testInstance.TypeName);
  return 0;
}