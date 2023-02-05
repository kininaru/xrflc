#include "./xrflc.h"
#include "iostream"

struct Test {
  int a;
};
XRFLC_RGST(Test)

int main() {
  Test t;
  auto result = xrflc::Load(t);
  std::printf("%s\n", result.TypeName);
  return 0;
}