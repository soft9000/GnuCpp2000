#include <iostream>

using namespace std;

int main(int argc, char** argv) {
  char buffer[1024];
  cout << "Enter your name: ";
  cin >> buffer;
  cout << "You entered \"" << buffer << "\"" << endl;
  cout << "Enter your email: ";
  cin >> buffer;
  cout << "You entered \"" << buffer << "\"" << endl;
}
