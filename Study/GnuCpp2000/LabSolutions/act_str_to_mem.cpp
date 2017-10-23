#include <cstdio>
#include <cstring>

int main(int argc, char* argv[]) {
  char buffer[10];
  memset(buffer, 0, 10);
  memcpy(buffer, "Hello", 5);
  printf("%s = %zd bytes\n", buffer, strlen(buffer));
  memcpy(&buffer[5], "!", 1);
  printf("%s = %zd bytes\n", buffer, strlen(buffer));
}
