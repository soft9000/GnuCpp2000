// Adding Accessors

#include <iostream>
#include <string>

namespace act149 {

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
  void name(const char *name)  
    { sName.assign(name); }
  void email(const char *email)  
    { sEmail.assign(email); }
  void balance(float bal) { this->fBalance = bal; }
  // Accessors
  const char * name()  
    { return this->sName.c_str();}
  const char * email()  
    { return this->sEmail.c_str(); }
  float balance(float bal) 
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

using namespace act149;

int main(void) {
  cout << __cplusplus << endl;
  act149::UserData zData;
  zData.name("John Seagull");
  zData.email("birdz@flight.us");
  zData.balance(123.456);

  zData.gprint();
  return 0;
}

