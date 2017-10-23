#include "unify.hpp"

inline void yello(const char* psz) {
  puts(psz);
}

#define YELLO(psz) puts(psz)

int main(int argc, char* argv[]) {
  yello("Howdie");
  YELLO("Hiya!");
}
