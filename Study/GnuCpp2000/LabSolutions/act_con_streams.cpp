#include <iostream>

using namespace std;

int main(int argc, char** argv) {
  for (int ss = 0; ss < argc; ss++)
    cout << "Got: " << argv[ss] << endl;
  cout << endl;
  char buffer[1024];
  cout << "Enter your name: ";
  cin >> buffer;
  cerr << "You entered \"" << buffer << "\"" << endl;
}
