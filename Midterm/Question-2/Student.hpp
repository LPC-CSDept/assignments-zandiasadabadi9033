#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <vector>
#include <fstream>
#include <cstring>
#include <iomanip>

using namespace std;

class Student {

private:
  int ID;
  string name;
  vector<int> scores;
public:
  Student() {

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

  int totalScore() {

    int totalScore = 0;
    for (int i = 0; i < scores.size(); i++) {
      totalScore += scores[i];
    }

    return totalScore;
    
  }

};

void makeStudents(Student arr[], int N) {
  
  ifstream ifs;
  ifs.open("Students.txt");
  if (ifs.fail()) {
    cerr << "File could not be opened...";
    exit(0);
  }
  
  for (int i = 0; i < N; i++) {
    int id;
    string name2;
    vector<int> scores2;
    ifs >> id >> name2;
    
    for (int j = 0; j < 3; j++) {
      int score;
      ifs >> score;
      scores2.push_back(score);
    }
    
    arr[i].setID(id);
    arr[i].setName(name2);
    arr[i].setScores(scores2);
    
  }
  
  ifs.close();
  
}

void printStudents(Student arr[], int N) {
  
  for (int i = 0; i < N; i++) {
    arr[i].printStudent();
  }
  
  cout << endl;
  
}

void descSort(Student arr[], int N) {
  
  int sum1 = 0, sum2 = 0;
  
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N - 1; j++) {
      sum1 = arr[j].totalScore();
      sum2 = arr[j + 1].totalScore();
      if (sum1 < sum2) {
        swap(arr[j], arr[j + 1]);
      }
    }
  }
  
}

Student *binarySearch(Student arr[], int N, int val) {
  
  int first, middle, last;
  first = 0;
  last = N - 1;
  
  while (first <= last) {
    middle = (first + last) / 2;
    
    if (val == arr[middle].getID()) {
      return &arr[middle];
    }
    
    if (val < arr[middle].getID()) {
      last = middle - 1;
    }
    
    else {
      first = middle + 1;
    }
    
  }
  
  return 0;
  
}

#endif