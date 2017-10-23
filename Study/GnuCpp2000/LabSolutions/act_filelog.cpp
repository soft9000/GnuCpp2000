#include <stdio.h>
#include <string.h>

const char* FILE_NAME = "MyLog.txt";

bool log(const char* psz) {
  bool br = false;
  FILE* fh = fopen(FILE_NAME, "a");
  if (fh == NULL)
    return br;
  int count = fputs(psz, fh);
  if (count > 0) {
    br = true;
    fflush(fh);
  }
  fclose(fh);
  return br;
}
