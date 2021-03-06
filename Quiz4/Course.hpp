#ifndef COURSE_HPP
#define COURSE_HPP
#include <iostream>
#include "Student.hpp"
#include <vector>

using namespace std;

class Course {

private:
	int cid;
  string cname;
  int credits;
  string semester;
  vector<Student> student;
  int NUM_COURSES = 0;
public:
  Course() {

    NUM_COURSES += 1;

  }

  Course(string name, int credit, string sem, vector<Student> stu) {

    this->cname = name;
    this->credits = credit;
    this->semester = sem;
    this->student = stu;
    NUM_COURSES++;

  }

  int getID() const {

    return cid;

  }

  string getCName() const {

    return cname;

  }

  int getCredits() const {

    return credits;

  }

  string getSemester() const {

    return semester;

  }

  vector<Student> getStudent() const {

    return student;

  }
  int getNumCourses() {

    return NUM_COURSES;

  }

  void setCName(string name) {

    this->cname = name;

  }

  void setCredits(int credit) {

    this->credits = credit;

  }

  void setSemester(string sem) {

    this->semester = sem;

  }

  void setStudent(vector<Student> stu) {

    this->student = stu;

  }

  void addStudent(Student& stu) {

    this->student.push_back(stu);

  }

  void setCourse(string name, int credit, string sem, vector<Student> stu) {

    this->cname = name;
    this->credits = credit;
    this->semester = sem;
    this->student = stu;
    
  }
  
  friend ostream &operator<< (ostream& os, Course &course);

  friend ifstream &operator>> (ifstream &is, Course &course);

};

#endif