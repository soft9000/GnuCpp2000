#include <iostream>

using namespace std;

namespace MyNouns {

enum Types { typeThing, typePlace, typePerson };

// Simplified

class Thing {
 public:
  virtual void speak() { puts("Ima Thing"); }

  static Thing& Create(Types which);
};

class Place : public Thing {
 public:
  virtual void speak() { puts("Ima Place"); }
};

class Person : public Place {
 public:
  virtual void speak() { puts("Ima Person"); }
};

Thing& Thing::Create(Types which) {
  switch (which) {
    case typeThing:
      return *(new Thing);
    case typePerson:
      return *(new Person);
    case typePlace:
      return *(new Place);
  }
}
}

using namespace MyNouns;

int main(int argc, char** argv) {
  puts("MyNouns");
  Thing& person = Thing::Create(Types::typePerson);
  person.speak();
  delete &person;

  Thing& place = Thing::Create(Types::typePlace);
  place.speak();
  delete &place;

  Thing& thing = Thing::Create(Types::typeThing);
  thing.speak();
  delete &thing;

  return 0;
}
