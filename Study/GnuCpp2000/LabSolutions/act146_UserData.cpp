// Adding Accessors

#include <iostream>
#include <string>

namespace act146 {

using namespace std;

using std::__cxx11::string;

class UserData {
 private:
  string sName;
  float fBalance;
  string sEmail;

 public:
  UserData() {
   fBalance = 0.0f; // universal!
  }
  // Mutators
  void setName(const char *name)  
    { sName.assign(name); }
  void setEmail(const char *email)  
    { sEmail.assign(email); }
  void setBalance(float bal) { this->fBalance = bal; }
  // Accessors
  const char * getName()  
    { return this->sName.c_str();}
  const char * getEmail()  
    { return this->sEmail.c_str(); }
  float getBalance(float bal) 
    { return this->fBalance; }

  void gprint();
};

// Typical!
void UserData::gprint() {
  std::cout << sName << std::endl;
  std::cout << sEmail << std::endl;
  std::cout << fBalance << std::endl;
  }


}

using namespace act146;

// Same test case!
int main(void) {
  cout << __cplusplus << endl;
  act146::UserData zData;
  zData.setName("John Seagull");
  zData.setEmail("birdz@flight.us");
  zData.setBalance(123.456);

  zData.gprint();
  return 0;
}
