class Date {
  int _month;
  int _day;
  int _year;

  std::string _date_str;

public:
  Date(int month, int day, int year = 2014);
  ~Date();

  int month() const;
  int day() const;
  int year() const;

  std::string to_string() const;
};
