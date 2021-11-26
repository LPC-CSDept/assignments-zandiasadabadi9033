#ifndef COURSE_HPP
#define COURSE_HPP
#include <iostream>
#include "Student.hpp"
#include <vector>

using namespace std;

class Course {

private:
  string cname;
  int credits;
  string semester;
  vector<Student> student;
  static int NUM_COURSES = 0;
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
  static int getNumCourses() {

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
  
  ofstream &operator<< (ofstream& os, const Course &course) {

    os << course.getCName() << " " << course.getCredits() << " ";

    for (int i = 0; i < course.getStudent().size(); i++) {
      os << course.getStudent()[i].getID() << " ";
      os << course.getStudent()[i].getSname() << " ";
      os << course.getStudent()[i].getGrade() << " ";
      os << course.getStudent()[i].getScores() << " ";
    }

    os << endl;

    
  }

  ifstream &operator>> (ifstream& is, const Course &course) {

    string name;
    int credit;
    string sem;
    ifs >> name >> credits >> sem;

    int num;
    ifs >> num;

    vector<Student> studentsVect;

    for (int i = 0; i < num; i++) {
      int id;
      string name2;
      char graded;
      double scored;
      
      ifs >> id >> name2 >> graded >> scored;

      student stu = Student(id, name2, graded, scored);
      studentsVect.push_back(stu);
    }

    course.setCourse(name, credit, studentsVect);
    
  }

};