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
  
  /*friend ostream &operator << (ostream& os, const Course &course) {
    
    os << "Name: " << course.cname << endl << "Credits: " << course.credits << endl  << "Semester: " <<  course.semester << "\n";
    os << course.student.size() << endl;
    
    for (int i = 0; i < course.student.size(); i++) {
      os << course.student[i].getID() << " " << course.student[i].getName() 
      << " " << course.student[i].getGrade() << " " << course.student[i].getScores() << endl;
    }
    
    os << endl;
    
    return os;
    
  }

  friend istream &operator >> (istream& is, const Course & course) {
    
    is >> course.cname >> course.credits >> course.semester;
    int num;
    is >> num;

    for (int i = 0; i < num; i++) {
      int id;
      string name;
      char graded;
      doubled scored;
      is >> id >> name >> graded >> scored;

      Student stu(id, name, graded, scored);
      course.student.push_back(stu);
    }

    return is;
        
    /*for (int i = 0; i < course.size; i++) {
      is >> 
    }*/
  
  }*/

};