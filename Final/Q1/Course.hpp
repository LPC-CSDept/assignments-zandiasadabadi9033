#ifndef COURSE_H
#define COURSE_H
#include <iostream>

using namespace std;

class Course {

private:
  int ID;
  string name;
  int credit;
public:
  Course();
  void setCourse(int, string, int);
  int getID();
  string getName();
  int getCredit;

};

#endif