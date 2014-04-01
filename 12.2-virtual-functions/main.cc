#include <iostream>

class Base {
  public:
    virtual const char* getName() { return "base"; }
};

class Derived : public Base {
  public:
    virtual const char* getName() { return "derived"; }
};

void print(Base &base) {
  using namespace std;
  cout << "base is a " << base.getName() << endl;
}


void reference() {
  using namespace std;
  Derived derived;

  // non-const lvalue reference to type 'Base' cannot bind to a temporary of type 'Derived *'
  // Base &base = &derived;

  // passing derived as base reference works however
  print(derived);
}

void assignment() {
  using namespace std;
  Derived derived;

  // virtual functions seem to not be working with simple assignment
  Base base = derived;

  print(base);
}

int main(void) {
  reference();
  assignment();
  return 0;
}
