#include <iostream>

class Cents {
private:
  int _cents;
public:
  Cents(int cents) { _cents = cents; }

  int cents() { return _cents; }

  Cents operator-() {
    return Cents(-_cents);
  }
};


int main(void) {
  using namespace std;

  Cents cents(20);
  cout << cents.cents() << endl;
  cout << (-cents).cents() << endl;

  return 0;
}
