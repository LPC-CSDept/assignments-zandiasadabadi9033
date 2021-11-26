#include <iostream>
#include <fstream>
#include "Course.hpp"
#include "Student.hpp"
#include <cstring>
#include <iomanip>

using namespace std;

int main() {
  
  ifstream ifs;
  ifs.open("coursestudents.txt");
  if (ifs.fail()) {
    cerr << "File could not be read\n";
    exit(0);
  }

  int courseSize = 4;
  Course courses[courseSize];
  
  for (int i = 0; i < courseSize; i++) {
    ifs >> courses[i];
    cout << courses[i] << endl;
  }
  
  ifs.close();
  
  ifs.open("addstudents.txt");
  if (ifs.fail()) {
    cerr << "File could not be read\n";
    exit(0);
  }

  string courseID;

  while (ifs >> courseID) {
    cout << "Course ID: " << courseID << endl;
    int index;
    for (int i = 0; Course::getNumCourses(); i++) {
      if (courses[i].getCName() == courseID) {
        index = i;
      }
    }

    int num;
    ifs >> num;

    for (int i = 0; i < num; i++) {
      int id;
      string name;
      char graded;
      double scored;
      ifs >> id >> name >> graded >> scored;
      Student stu(id, name, graded, scored);
      courses[index].addStudent(stu);
    }

    cout << "The updated list is: " << endl;
    cout << courses[index] << endl;

  }

  ifs.close();

  for (int i = 0; i < Course::getNumCourses(); i++) {
    cout << courses[i] << endl;
  }
  
  return 0;
  
}