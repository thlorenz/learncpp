#include <iostream>

template<typename T, int size>
class Buffer {
  T _buffer[size];

public:
  T* buffer() { return _buffer; }
  T& operator[] (int idx) { return _buffer[idx]; }
};

int main(void) {
  Buffer <int, 12> buffer;
  for (int i=0; i < 12; i++) buffer[i] = i;

  for (int i=11; i >= 0; i--) std::cout << buffer[i] << " ";

  std::cout << std::endl;

  Buffer<char, 31> chars;
  strcpy(chars.buffer(), "Hello there!");
  std::cout << chars.buffer() << std::endl;

  return 0;
}
