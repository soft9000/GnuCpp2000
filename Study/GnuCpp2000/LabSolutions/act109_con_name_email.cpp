#include <iostream>

using namespace std;

int main(int argc, char** argv) {
  char buffer[1024];
  cout << "Enter your name: ";
  cin.get(buffer, 1024);
  cout << "You entered \"" << buffer << "\"" << endl;
  cout << "Enter your email: ";
  cin.clear();
  cin.ignore(1024, '\n');
  cin.get(buffer, 1024);
  cout << "You entered \"" << buffer << "\"" << endl;
}
