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
    for (int i = 0; courses[i].getNumCourses(); i++) {
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
      cout << endl;
    }

    cout << "The updated list is: " << endl;
    cout << courses[index] << endl;

  }

  ifs.close();

  for (int i = 0; i < courses[i].getNumCourses(); i++) {
    cout << courses[i] << endl;
  }
  
  return 0;
  
}

ifstream &operator>> (ifstream &ifs, Course &course) {
  
  string name;
  int credit;
  string sem;
  ifs >> name >> credit >> sem;
  
  int num;
  ifs >> num;
  
  vector<Student> studentsVect;
  for (int i = 0; i < num; i++) {
    int id;
    string name2;
    char graded;
    double scored;
    
    ifs >> id >> name2 >> graded >> scored;
    
    Student stu = Student(id, name2, graded, scored);
    studentsVect.push_back(stu);
  }
  
  course.setCourse(name, credit, sem,  studentsVect);
  
}

ostream &operator<< (ostream &os, Course &course) {
  
  os << course.getCName() << " " << course.getCredits() << " ";
  
  for (int i = 0; i < course.getStudent().size(); i++) {
    os << course.getStudent()[i].getID() << " ";
    os << course.getStudent()[i].getSname() << " ";
    os << course.getStudent()[i].getGrade() << " ";
    os << course.getStudent()[i].getScores() << " ";
  }
  
  os << endl;
  
}