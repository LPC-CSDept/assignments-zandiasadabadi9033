#include <iostream>
#include "Student.hpp"
#include <fstream>
#include <vector>

using namespace std;

void makeStudents(Student arr[], int N);
void printStudents(Student arr[], int N);
void descSort(Student arr[], int N);
Student *binarySearch(Student arr[], int N, int val);

int main() {

  const int SIZE = 10;
  Student students[SIZE];
  int value;

  // makeStudents(students, SIZE);
  // sort by descending scores
  // printStudents(students, SIZE);

  cout << "Please enter the ID of the student that you are looking for: ";
  cin >> value;

  // binarySearch to find the value
  // print out




  return 0;

}

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
      sum1 = arr[j].totalScores();
      sum2 = arr[j + 1].totalScores();
      if (sum1 < sum2) {
        swap(arr[j], arr[j + 1]);
      }
    }
  }
  
}

Student *binarySearch(Student arr[], int N, int val) {

  int first = 0, middle, last = N - 1;

  while (first <= last) {
    middle = (first + last) / 2;

    if (val == arr[middle].getID()) {
      return arr[middle];
    }

    else if (val < arr[mid.getID()]) {
      last = middle - 1;
    }

    else {
      first = middle + 1;
    }

  }

  return 0;
  
}