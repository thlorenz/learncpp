#include <iostream>

void print_vals(int v1, int v2=10) {
  using namespace std;
  cout << "1st " << v1 << endl;
  cout << "2nd " << v2 << endl;
}

int main(void) {
  print_vals(1, 2);
  print_vals(1);

  return 0;
}
