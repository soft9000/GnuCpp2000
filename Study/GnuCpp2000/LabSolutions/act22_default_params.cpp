#include <cstdio>

void say(const char* name, int age, float balance) {
  printf("Name: %s, Age: %d, Balance:%.02f\n", name, age, balance);
}

void say1(const char* name, int age, float balance = 10.00f) {
  printf("Name: %s, Age: %d, Balance:%.02f\n", name, age, balance);
}

void say2(const char* name, int age = 21, float balance = 100.00f) {
  printf("Name: %s, Age: %d, Balance:%.02f\n", name, age, balance);
}

void say3(const char* name = "unknown",
          int age = 41,
          float balance = 1000.00f) {
  printf("Name: %s, Age: %d, Balance:%.02f\n", name, age, balance);
}

int main(int argc, char* argv[]) {
  say("say()", 10, 0.0F);
  say1("say1()", 20);
  say2("say2()");
  say3();
}
