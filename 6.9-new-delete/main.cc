#include <iostream>

void int_ptr() {
  using namespace std;

  int *pval = new int;
  *pval = 7;
  cout << "pointer " << pval << endl;
  cout << "value " << *pval << endl;

  // delete memory that pval points to
  delete pval;
  pval = 0;
}

void arr_ptr() {
  using namespace std;
  const int len = 12;
  int *vals = new int[len];
  vals[4] = 7;

  cout << "pointer " << vals << endl;
  cout << "vals[0] " << *vals << endl;
  cout << "vals[4] " << *(vals + 4)  << endl;

  delete[] vals;
  vals = 0;
}

int main(void) {
  using namespace std;

  cout << "int_ptr" << endl;
  int_ptr();

  cout << endl << "arr_ptr" << endl;
  arr_ptr();


  return 0;
}
