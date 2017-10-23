#include <cstdio>  // for puts(...)

// lab_30_char_array
int char_main(int argc, char* argv[]) {
  for (int ss = 0; ss < argc; ss++) {
    puts((const char*)argv[ss]);
  }
}

int char2_main(int argc, char** argv) {
  for (int ss = 0; ss < argc; ss++) {
    puts((const char*)argv[ss]);
  }
}

int main(int argc, char* argv[]) {
  puts("*** char_main ***");
  char_main(argc, argv);
  puts("*** char2_main ***");
  char2_main(argc, argv);
}
