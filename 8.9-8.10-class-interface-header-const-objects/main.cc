#include <iostream>
#include "date.h"

void print_today() {
  using namespace std;

  const Date today(3, 24);

  cout << today.to_string() << endl;
}


int main(void) {
  print_today();
  return 0;
}
