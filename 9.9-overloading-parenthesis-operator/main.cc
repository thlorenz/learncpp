#include <iostream>
#include<cassert>

class Matrix {
  double _data[4][4];

  void _init() {
    for (int row = 0; row < 4; row++)
      for (int col = 0; col < 4; col++)
        _data[row][col] = 0.0;
  }
public:
  Matrix() {
    _init();
  }

  Matrix& set(const int row, const int col, const double val) {
    _data[row][col] = val;
    return *this;
  }

  double& operator() (const int row, const int col) {
    assert(row >= 0 && row < 4);
    assert(col >= 0 && col < 4);
    return _data[row][col];
  }

  void operator() () { _init(); }
};

int main(void) {
  using namespace std;

  Matrix matrix;
  matrix
    .set(0, 0, 0.0)
    .set(0, 1, 0.1)
    .set(1, 0, 1.0)
    .set(1, 1, 1.1)
    .set(2, 3, 2.3);

  cout << matrix(2, 3) << endl;

  matrix();

  cout << matrix(2, 3) << endl;
  return 0;
}
