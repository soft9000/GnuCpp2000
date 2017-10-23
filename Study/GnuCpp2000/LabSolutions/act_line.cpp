#include "unify.hpp"

int whats_my_line() {
#line 177
  return __LINE__;
}

// Rename to "main" for stand-alone usage
int main(int argc, char* argv[]) {
  printf("Line: %d, return %d", __LINE__, whats_my_line());
  return __LINE__;
}
