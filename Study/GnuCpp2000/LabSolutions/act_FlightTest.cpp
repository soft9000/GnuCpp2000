#include "unify.hpp"

typedef float value;
typedef value (*func)(value, value);

static value run(value a, value b) {
  puts("running ...\n");
}

static value eat(value a, value b) {
  puts("eating ...\n");
}

static value fly(value a, value b) {
  puts("flying ...\n");
}

static value fly_fast(value a, value b) {
  puts("Zoooooom to location!");
}

static value none(value a, value b) {
  puts("nada!\n");
}

#define RUN 0
#define EAT 1
#define FLY 2
#define SLEEP 3

// Rename to "main" for stand-alone usage
int main(int argc, char* argv[]) {
  func array[4];
  array[RUN] = run;
  array[EAT] = eat;
  array[FLY] = fly;
  array[SLEEP] = none;

  array[FLY](123, 456);
  array[FLY] = fly_fast;
  array[FLY](123, 456);
}
