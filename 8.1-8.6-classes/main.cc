#include <iostream>

class Date {
  int _month;
  int _day;
  int _year;

  std::string _date_str;

public:
  Date(int month, int day, int year = 2014) {

    _month = month;
    _day   = day;
    _year  = year;

    _date_str = std::to_string(month) + "/" + std::to_string(day) + "/" + std::to_string(year);
  }

  ~Date() {
    using namespace std;
    cerr << "destructing date" << endl;
  }

  int month() { return _month; }
  int day() { return _day; }
  int year() { return _year; }

  std::string to_string() {
    return _date_str;
  }
};

void print_today() {
  using namespace std;

  Date today(3, 23);

  cout << today.to_string() << endl;
}


int main(void) {
  print_today();
  return 0;
}
