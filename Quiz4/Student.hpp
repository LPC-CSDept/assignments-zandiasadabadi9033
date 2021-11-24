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
  Student();
  Student(int, string, char, double);
  int getID() const;
  string getName() const;
  char getGrade() const;
  double getScores() const;
  void setID(int);
  void setName(string);
  void setGrade(char);
  void setScores(double);
  void setStudent(int, string, char, double);
  
};