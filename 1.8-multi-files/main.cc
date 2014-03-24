#include <iostream>

// forward declaration (defined in add.cc)
int add(int x, int y);

int main(void) {
  using namespace std;
  cout << "The sum of 3 and 4 is: " << add(3, 4) << endl;
  return 0;
}
