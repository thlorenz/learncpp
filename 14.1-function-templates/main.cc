#include <iostream>
using namespace std;

template <typename T>
T max_(T x, T y) {
  return x > y ? x : y;
}

class Cents {
  int _cents;
public:
  Cents(int cents = 0) : _cents(cents) {}

  friend bool operator > (Cents &c1, Cents &c2) {
    return c1._cents > c2._cents ? true : false;
  }

  friend ostream& operator<< (ostream &out, Cents &cents) {
    out << cents._cents << " cents";
    return out;
  }
};

int main(void) {

  cout << "max(1, 2): " << max_(1, 2) << endl;
  cout << "max(1.3, 1.2): " << max_(1.3, 1.2) << endl;

  // inlining max_cents breaks << operator
  Cents max_cents = max_(Cents(2), Cents(1));
  cout << "max(2 cents, 1 cents): " << max_cents  << endl;
  return 0;
}
