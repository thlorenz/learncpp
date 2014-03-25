#include <iostream>

class Storage {

private:
  int _value;
  double _fraction;

public:
  Storage(int value, double fraction) {
    _value = value;
    _fraction = fraction;
  }

  friend class Display;
};

class Display {

private:
  bool _value_first;

public:
  Display(bool value_first) { _value_first = value_first; }

  void display_item(Storage &storage) {
    using namespace std;
    if (_value_first) cout << storage._value << " " << storage._fraction << endl;
    else              cout << storage._fraction << " " << storage._value << endl;
  }
};

int main(void) {
  Storage storage(2, 3.14);
  Display display(true);

  display.display_item(storage);
  return 0;
}
