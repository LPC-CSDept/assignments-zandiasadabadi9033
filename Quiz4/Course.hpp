#ifndef COURSE_HPP
#define COURSE_HPP
#include <iostream>
#include "Student.hpp"

using namespace std;

class Course {

private:
  string cname;
  int credits;
  string semester;
  vector<Student> student;

};