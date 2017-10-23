#include "unify.hpp"

// Saved as "act_dumper.cpp"

// "Passing By Value"

void dump(char zChar) {
  printf("VAL(%c)\n", zChar);
  printf("HEX(%x)\n", zChar);
  printf("OCT(%o)\n", zChar);
  printf("DEC(%d)\n\n", zChar);
}

// "ASCIIZ" Convention

void dump_while(const char* psz) {
  while (*psz != 0x00)
    dump(*psz++);
}

int main(int argc, char* argv[]) {
  char zCH = 'A';
  dump(zCH);
  zCH = 0x42;  // Hexadecimal
  dump(zCH);
  zCH = 67;  // Decimal
  dump(zCH);
  zCH = 0104;  // Octal
  dump(zCH);

  dump_while("AsciiZ");
}
