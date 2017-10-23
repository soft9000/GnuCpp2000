#include <stdio.h>
#include <string.h>

#include "act_filelog.hpp"

int main(int argc, char* argv[]) {
  if (log("Greetings from act_log_file_test!") == false) {
    puts("Error.");
  } else {
    puts("Wild Success.");
  }
}
