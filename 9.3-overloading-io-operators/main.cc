#include <iostream>
#include <sstream>

using namespace std;

class Point {
private:
  double _x, _y, _z;
public:
  Point(double x=0.0, double y=0.0, double z=0.0) {
    _x =x; _y = y; _z = z;
  }

  friend ostream& operator<< (ostream &out, Point &point);
  friend istream& operator>> (istream &in, Point &point);
};

ostream& operator<< (ostream &out, Point &point) {
  out << "(" << point._x << ", " << point._y << ", " << point._z << ")";
  return out;
}

istream& operator>> (istream &in, Point &point) {
  in >> point._x;
  in >> point._y;
  in >> point._z;
  return in;
}

int main(void) {
  Point point1(1.1, 2.2, 3.3);
  cout << point1 << endl;

  Point point2;
  istringstream iss("3.4 4.5 5.6");
  iss >> point2;

  cout << point2 << endl;
  return 0;
}
