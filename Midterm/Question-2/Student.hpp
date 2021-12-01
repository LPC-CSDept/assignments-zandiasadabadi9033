#ifndef STUDENT_HPP
#define STUDENT_HPP
#include <iostream>

using namespace std;

class Student {

private:
  int ID;
  string name;
  vector<int> scores;
public:
  Student {

  }

  int getID();
  void setID(int);
  string getName();
  void setName(string);
  vector<int> getScores();
  void setScores(vector<int>);
  void printStudent();

};

#endif