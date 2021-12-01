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

  int getID() {

    return ID;

  }

  void setID(int ID) {

    this->ID = ID;

  }

  string getName() {

    return name;

  }

  void setName(string name) {

    this->name = name;

  }

  vector<int> getScores() {

    return scores;

  }

  void setScores(vector<int> scores) {

    this->scores = scores;

  }

  void printStudent() {

    cout << ID << "\t" << name << "\t";
    for (int i = 0; i < scores.size(); i++) {
      cout << scores[i] << "\t";
    }

    cout << endl;

  }

};

#endif