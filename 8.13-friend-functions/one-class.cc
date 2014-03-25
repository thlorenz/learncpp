#include <iostream>

class Accumulator {

private:
  int _value;

public:
  Accumulator() { _value = 0; }

  Accumulator add(int value) {
    _value += value;
    return *this;
  }

  int value() { return _value; }

  friend Accumulator reset(Accumulator &accumulator);
};

Accumulator reset(Accumulator &accumulator) {
  accumulator._value = 0;
  return accumulator;
}

int main(void) {
  using namespace std;

  Accumulator acc;

  cout << acc.add(2).value() << endl;

  cout << reset(acc).add(1).value() << endl;

  return 0;
}
