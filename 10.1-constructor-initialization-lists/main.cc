#include <iostream>
using namespace std;

class Numbers {

  const int _number;
  const double _fraction;
  const int *_pnumber;

public:
  Numbers(int number = 0, double fraction = 0.0, int* pnumber = 0) :
    _number(number), _fraction(fraction), _pnumber(pnumber) {}

  friend ostream& operator<< (ostream &out, Numbers numbers);
};

ostream& operator<< (ostream &out, Numbers numbers) {
  out << numbers._number << ", " << numbers._fraction << ", " << numbers._pnumber;
  return out;
};


int main(void) {
  Numbers numbers(1, 2.0);

  cout << numbers << endl;

  return 0;
}

