#include <iostream>
#include "array.h"

int main(void) {
  using namespace std;

  Array<int> items(12);
  Array<double> factors(12);

  for (int i = 0; i < items.length(); i++) {
    items[i] = i;
    factors[i] = i * 0.3;
  }

  for (int i = (items.length() - 1); i >= 0; i--)
    cout << items[i] << "\t" << factors[i] << endl;

  // out of bounds
  // cout << items[items.length()];
  return 0;
}
