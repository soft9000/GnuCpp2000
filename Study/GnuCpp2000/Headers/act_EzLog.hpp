#include <string>

using namespace std;

class EzLog {
 protected:
  string sFQName;

 public:
  EzLog(string file);
  int count();
  bool exists();
  bool append(string messsage);
};
