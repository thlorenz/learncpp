#include <iostream>
#include <sstream>

// Storage specializes some functions
template <typename T>
class Storage {

  T _value;

public:
  Storage(T value): _value(value) {}
  ~Storage() {}

  void print() {
    std::cout << _value << std::endl;
  }
};

template <>
Storage<char*>::Storage(char* value) {
  _value = new char[strlen(value) + 1];
  strcpy(_value, value);
}

template <>
Storage<char*>::~Storage() {
  delete _value;
}

template <>
void Storage<double>::print() {
  std::cout << std::scientific << _value << std::endl;
}

void storage() {
  Storage<int> value(5);
  Storage<double> fraction(4.5);

  value.print();
  fraction.print();

  char *name = new char[40];
  std::istringstream iss("bobifer");
  iss >> name;

  Storage<char*> info(name);

  delete name;
  info.print();
}


// Storage8 has a generic and a type specific implementation
template <typename T>
class Storage8 {

  T _values[8];

public:
  void set(int idx, const T &value) {
    _values[idx] = value;
  }

  T& get(int idx) {
    return _values[idx];
  }
};

template <>
class Storage8<bool> {

  unsigned char _values;

public:
  void set(int idx, const bool &value) {
    unsigned char mask = 1 << idx;
    _values = value ? _values | mask : _values & ~mask;
  }

  bool get(int idx) {
    unsigned char mask = 1 << idx;
    return _values & mask;
  }
};

void storage8() {
  Storage8<int> numbers;
  for (int i = 0; i < 8; i++) numbers.set(i, i);
  for (int i = 0; i < 8; i++) std::cout << numbers.get(i) << std::endl;

  // Note: result with special storage class is not the same as without, so there must be a bug lurking somewhere
  Storage8<bool> truths;
  for (int i = 0; i < 8; i++) numbers.set(i, i & 3);
  for (int i = 0; i < 8; i++) std::cout << (truths.get(i) ? "true" : "false") << std::endl;
}

int main(void) {
  storage();
  storage8();

  return 0;
}
