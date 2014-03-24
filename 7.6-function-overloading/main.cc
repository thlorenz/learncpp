#include <iostream>

int add(int x, int y) {
  return x + y;
}

double add(double x, double y) {
  return x + y;
}

int main(void) {
  using namespace std;
  cout << add(1, 2) << endl;
  cout << add(1.2, 2.3) << endl;

  // cout << add(static_cast<int>(1.2), 2.3) << endl; -- ambiguous

  cout << add((double)1, 2.3) << endl;
  cout << add(static_cast<double>(1), 2.3) << endl;

  // cout << add(static_cast<unsigned int>(1.2), static_cast<unsigned int>(2.3)) << endl;

  cout << add(static_cast<int>(1.2), static_cast<int>(2.3)) << endl;
  return 0;
}
