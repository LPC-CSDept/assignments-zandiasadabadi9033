#include <iostream>
#include <fstream>
#include "Course.hpp"
#include "Student.hpp"

using namespace std;

int main() {
  
  ifstream ifs;
  ifs.open("coursestudents.txt");

  int courseSize = 4;
  Course courses[courseSize];
  
  for (int i = 0; i < courseSize; i++) {
    ifs >> courses[i];
    cout << courses[i] << endl;
  }
  
  ifs.close();
  
  ifs.open("addstudents.txt");
  for (int i = 0; i < 2; i++) {
    string cname;
    int count;
    
    ifs >> cname;
    ifs >> count;
    int course_ID;
    for (int j = 0; j < Course::getNumCourses(); j++) {
      if(cname == courses[j].getCName()) {
        course_ID = j;
        for (int ij = 0; ij < count; ij++) {
          int id;
          string name;
          char graded;
          double scored;
          ifs >> id >> name >> graded >> scored;
          Student stu(id, name, graded, scored);
          courses[course_ID].addStudent(stu);
        }
        cout << "Updated Students list for the Course " << cname << endl;
        cout << courses[course_ID] << endl;
      }
    }
  }

  for (int i = 0; i < Course::getNumCourses(); i++) {
    cout << courses[i];
  } 
  
  return 0;
  
}