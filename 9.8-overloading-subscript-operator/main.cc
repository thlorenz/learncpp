#include <iostream>

class IntList {

  int _items[10];

public:
  int& operator[] (const int idx) {
    return _items[idx];
  }
};

int main(void) {
  using namespace std;

  IntList items;
  items[2] = 3;
  cout << items[2] << endl;

  return 0;
}
