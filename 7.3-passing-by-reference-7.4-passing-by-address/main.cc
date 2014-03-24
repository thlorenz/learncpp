#include <iostream>

using namespace std;

void by_ref(int &y) {
  cout << "y = " << y << endl;
  y = 6;
  cout << "y = " << y << endl;
}

void by_addr(int *y) {
  cout << "y = " << *y << endl;
  *y = 7;
  cout << "y = " << *y << endl;
}

// pass by reference and pass by address are essentially identical in terms of efficiency
// address passed to function is passed by value
int main(void) {

  int x = 5;
  cout << "x = " << x << endl;

  cout << "by_ref(x)" << endl;
  by_ref(x);
  cout << "x = " << x << endl;

  cout << "by_addr(&x)" << endl;
  by_addr(&x);
  cout << "x = " << x << endl;

  return 0;
}
