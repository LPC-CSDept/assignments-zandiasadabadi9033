#ifndef STUDENT_HPP
#define STUDENT_HPP
#include <iostream>
#include <vector>

using namespace std;

class Student {

private:
  int ID;
  string sname;
  char grade;
  double scores;
public:
  Student() {

  }

  Student(int id, string name, char graded, double scored) {

    this->ID = id;
    this->sname = name;
    this->grade = graded;
    this->scores = scored;

  }

  int getID() const {

    return ID;

  }

  string getSname() const {

    return sname;

  }

  char getGrade() const {

    return grade;

  }

  double getScores() const {

    return scores;

  }

  void setID(int id) {

    this->ID = id;

  }

  void setName(string name) {

    this->sname = name;

  }

  void setGrade(char graded) {

    this->grade = graded;

  }

  void setScores(double scored) {

    this->scores = scored;

  }
  
};

#endif