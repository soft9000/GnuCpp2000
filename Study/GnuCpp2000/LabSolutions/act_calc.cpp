#include "unify.hpp"

typedef float value;

static value calc = 0;

value add(value a, value b) {
  return (a + b);
}

value multi(value a, value b, value** result) {
  calc = (a * b);
  *result = &calc;
  return calc;
}

int main(int argc, char* argv[]) {
  value* result = NULL;
  value newresult = multi((value)10, (value)12, &result);
  printf("\n\nResults are %.2f and %.4f\n\n", *result, newresult);
}
