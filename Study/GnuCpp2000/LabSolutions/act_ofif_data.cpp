#include <fstream>
#include <iostream>

using namespace std;

#define BUFMAX 1024

const char* FILE_NAME2 = "MyLog.txt";

int main(int argc, char** argv) {
  char buffer[BUFMAX];
  ofstream ofs(FILE_NAME2, ios::ate);

  cout << "Name: ";
  cin.get(buffer, '\n');
  ofs << "Name: " << buffer << "\t";

  cin.clear();
  cin.ignore(BUFMAX, '\n');
  cout << "Email: ";
  cin.get(buffer, '\n');
  ofs << "Email: " << buffer << "\t";

  cin.clear();
  cin.ignore(BUFMAX, '\n');
  float balance = 0.0;
  cout << "Balance: ";
  cin >> balance;
  ofs << "Balance: " << balance << endl;

  ifstream ifs(FILE_NAME2);

  ifs.getline(buffer, BUFMAX, '\n');
  cout << "Got \"" << buffer << "\"";
  return 0;
}
