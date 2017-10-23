#include <cstdlib>  // atoi()
#include <iostream>

using namespace std;
int main(int argc, char* argv[]) {
  if (argc != 4) {
    cerr << "Usage: " << argv[0] << " #start #end #step" << endl;
    return -1;
  }
  int start = atoi(argv[1]);
  int end = atoi(argv[2]);
  int step = atoi(argv[3]);
  if (end < start) {
    cerr << "Please make #start smaller than #end." << endl;
    return -1;
  }
  for (int ss = start; ss <= end; ss++) {
    cout << ss;
    if (ss % step == 0)
      cout << " *";
    cout << endl;
  }
}
