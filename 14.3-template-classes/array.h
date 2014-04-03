#ifndef ARRAY_H
#define ARRAY_H

#include <cassert>

template <typename T>
class Array {
  int _length;
  T *_data;

public:
  Array(int length = 0) : _length(length) {
    _data = length ? new T[length] : 0;
  }

  ~Array() {
    delete _data;
  }

  void erase() {
    delete _data;
    _data = 0;
    _length = 0;
  }

  int length();

  T& operator[] (int index) {
    assert(0 <= index && index < _length && "out of bounds");
    return _data[index];
  }
};

template <typename T>
int Array<T>::length() { return _length; }

#endif
