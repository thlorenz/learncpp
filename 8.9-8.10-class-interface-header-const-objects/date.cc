#include <iostream>
#include "date.h"

Date::Date(int month, int day, int year) {
  _month = month;
  _day   = day;
  _year  = year;

  _date_str = std::to_string(month) + "/" + std::to_string(day) + "/" + std::to_string(year);
}

Date::~Date() {
  using namespace std;
  cerr << "destructing date" << endl;
}

int Date::month() const { return _month; }
int Date::day() const { return _day; }
int Date::year() const { return _year; }

std::string Date::to_string() const {
  return _date_str;
}
