#include <iostream>
using namespace std;

/*
 * - assignment operator is used to copy the values from one object to another already existing object
 * - copy constructor is a special constructor that initializes a new object from an existing object
 *
 * - C++ provides a default assignment operator if none is provided
 *
 * There are three general cases where the copy constructor is called instead of the assignment operator:
 *
 * 1. When instantiating one object and initializing it with values from another object
 * 2. When passing an object by value.
 * 3. When an object is returned from a function by value.
 *
 */

class Cents {
  int _cents;

  void _copy(const Cents &src) {
    _cents = src._cents;
  }

public:
  Cents(int cents = 0) {
    _cents = cents;
  }

  // copy constructor
  Cents(const Cents &src) {
    _copy(src);
    cout << "copied " << &src << endl;
  }

  // assignment operator
  Cents& operator= (const Cents &src) {
    if (this != &src) _copy(src);
    cout << "assigned " << &src << endl;
    return *this;
  }

  friend ostream& operator<< (ostream &out, Cents &cents);
};

ostream& operator<< (ostream &out, Cents &cents) {
  out << cents._cents;
  return out;
}

int main(void) {
  Cents mark(5);        // constructor
  Cents nancy;          // default constructor;

  nancy = mark;         // assignment operator

  Cents bob = mark;     // copy constructor

  cout << "mark " << mark << " nancy " << nancy << " bob " << bob << endl;
  return 0;
}
