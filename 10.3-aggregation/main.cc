#include <iostream>
#include <string>
using namespace std;

class Teacher {
  string _name;

public:
  Teacher (string name) : _name(name) {}
  string getName() { return _name; }
};

class Department {
  Teacher *_teacher;
public:
  Department (Teacher *teacher=NULL) : _teacher(teacher) {}
  Teacher getTeacher() { return *_teacher; }
};

// teacher stays around even if the department is (auto)deleted
void teacher_reference() {
  Teacher teacher("bob");
  {
    Department department(&teacher);
    cout << "teacher name " << teacher.getName() << endl;
    cout << "department teacher name " << department.getTeacher().getName() << endl;
  }

  cout << "department unknown" << endl;
  cout << "teacher name " << teacher.getName() << endl;
}

void teacher_pointer() {
  Teacher *pteacher = new Teacher("bob");
  {
    Department department(pteacher);
    cout << "teacher name " << pteacher->getName() << endl;
    cout << "department teacher name " << department.getTeacher().getName() << endl;
  }

  cout << "department unknown" << endl;
  cout << "teacher name " << pteacher->getName() << endl;

  delete pteacher;
}

int main(void) {
  cout << "\n+++ reference +++" << endl;
  teacher_reference();

  cout << "\n+++ pointer +++" << endl;
  teacher_pointer();

  return 0;
}
