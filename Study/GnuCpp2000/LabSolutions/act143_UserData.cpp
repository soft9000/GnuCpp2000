/* Case Study: Avoiding
"warning: non-static data member initializers 
only available with -std=c++11 or -std=gnu++11"

   float fBalance = 0.0F;
*/

#include <iostream>
#include <string>

// c++ -std=c++98 ... (199711)
// c++ -std=c++11 ... (201103)
// c++ -std=c++14 ... (201402)

namespace act143 {

using namespace std;

using std::__cxx11::string;

class UserData {
 private:
  string sName;
#if __cplusplus > 201103
  float fBalance;
#else
  float fBalance = 0.0F;
#endif
  string sEmail;

 public:
  UserData() {
   fBalance = 0.0f;
  }
  void setName(string name)  { this->sName = name; }
  void setEmail(string email)  { this->sEmail = email; }
  void setBalance(float bal) { this->fBalance = bal; }
  void gprint();
};

inline void UserData::gprint() {
  std::cout << sName << std::endl;
  std::cout << sEmail << std::endl;
  std::cout << fBalance << std::endl;
  }


}

using namespace act143;

int main(void) {
  cout << __cplusplus << endl;
  act143::UserData zData;
  zData.setName("John Seagull");
  zData.setEmail("birdz@flight.us");
  zData.setBalance(123.456);

  zData.gprint();
  return 0;
}
