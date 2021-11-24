#ifndef STUDENT_HPP
#define STUDENT_HPP
#include <iostream>

using namespace std;

class Student {

private:
  int ID;
  string sname;
  char grade;
  double scores;
public:
  Student() {

    ID = 0;
    sname = "";
    grade = "";
    scores = 0;

  }

  Student(int id, string name, char graded, double scored) {

    ID = id;
    sname = name;
    grade = graded;
    scores = scored;

  }

  int getID() const {

    return ID;

  }

  string getName() const {

    return sname;

  }

  char getGrade() const {

    return grade;

  }

  double getScores() const {

    return scores;

  }

  void setID(int id) {

    ID = id;

  }

  void setName(string name) {

    sname = name;

  }

  void setGrade(char graded) {

    grade = graded;

  }

  void setScores(double scored) {

    scores = scored;

  }

  // void setStudent(int id, string, char, double);
  
};