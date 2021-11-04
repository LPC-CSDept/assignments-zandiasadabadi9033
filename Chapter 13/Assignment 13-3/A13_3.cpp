#include "student.hpp"
#include <iostream>
#include <fstream>

using namespace std;

void sortStudent(Student *s);
void printStudent(Student &s);

int main() {
  
  ifstream ifs;
  const int SIZE = 10;
  string sname;
  int ID, month, day;
  DOB date;
  Student arr[SIZE];
  
  ifs.open("students.txt");
  if (ifs.fail()) {
    cerr << "File could not be opened\n";
    exit(0);
	}

	int i = 0;
	while (ifs >> sname >> ID >> month >> day) {
    date.setDOB(month, day);
    arr[i].setSname(sname);
    arr[i].setID(ID);
    arr[i].setDOB(date);
    i++;
	}
  
  sortStudent(arr);
  
  for (int i = 0; i < SIZE; i++) {
    printStudent(arr[i]);
	}

  return 0;

}

void sortStudent(Student *s) {
  
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10 - 1; j++) {
      if(s[j].getDOB().getMonth() > s[j + 1].getDOB().getMonth()) {
        swap(*(s + j), *(s + j + 1));
      }
      else if (s[j].getDOB().getMonth() == s[j + 1].getDOB().getMonth() && s[j].getDOB().getDay() > s[j + 1].getDOB().getDay()) {
        swap(*(s + j), *(s + j + 1));
      }
    }
  }

}

void printStudent(Student &s) {
  
  DOB date;
  cout  << "**********************" << endl;
  cout << "Student Name: " << s.getSname() << endl;
  cout << "Student ID: " << s.getID() << endl;
  date = s.getDOB();
  date.printDate();
  
}