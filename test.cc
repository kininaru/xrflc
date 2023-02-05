#include "./xrflc.h"
#include "iostream"

struct Test {
  int a;
};
XRFLC_RGST(Test)

int main() {
  std::printf("%s\n", RTest.StructName);
  return 0;
}