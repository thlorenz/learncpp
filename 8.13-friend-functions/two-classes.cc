#include <iostream>

class Humidity;

class Temperature {

private:
  int _temp;

public:
  Temperature(int temp) { _temp = temp; }
  friend void print_weather(Temperature &temperatur, Humidity &humidity);
};

class Humidity {

private:
  int _humidity;

public:
  Humidity(int humidity) { _humidity = humidity; }
  friend void print_weather(Temperature &temperatur, Humidity &humidity);
};

void print_weather(Temperature &temperature, Humidity &humidity) {
  using namespace std;
  cout << "Temperature: " << temperature._temp << " Degrees Celsius. Humidity: " << humidity._humidity << "%" << endl;
}

int main(void) {

  Temperature temp(28);
  Humidity humidity(40);

  print_weather(temp, humidity);
  return 0;
}
