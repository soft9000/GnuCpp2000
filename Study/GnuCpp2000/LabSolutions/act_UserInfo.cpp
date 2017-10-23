#include <iostream>
#include <string>

using namespace std;

namespace act_user_info {

using std::__cxx11::string;

class UserInfo {
 private:
  int age = 0;
  float balance = 0.0f;
  string email;

 public:
  UserInfo() {}

  UserInfo(const UserInfo& ref) : UserInfo(ref.age, ref.balance, ref.email) {}

  UserInfo(int age, float balance, string email) {
    this->age = age;
    this->balance = balance;
    this->email.assign(email);
  }

  int getAge() { return this->age; }

  float getBalance() { return this->balance; }

  const char* getEmail() { return this->email.c_str(); }

  void setAge(int age) { this->age = age; }

  void setBalance(float bal) { this->balance = bal; }

  void setEmail(const char* psz) {
    if (psz != NULL)
      email.assign(psz);
  }
};
}

using namespace act_user_info;

int main(int argc, char** argv) {
  // "on the stack"
  UserInfo obj1(21, 123.45, "john@bar.net");
  UserInfo obj2(43, 1235.34, "mrjohn@ipc.xyz");
  UserInfo obj3(obj2);
  printf("Copy: %s: age %d, balance %.02f\n", obj3.getEmail(), obj3.getAge(),
         obj3.getBalance());
  return 0;
}
