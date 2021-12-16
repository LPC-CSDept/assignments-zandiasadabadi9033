#include <iostream>
#include "Course.h"

using namespace std;

Course::Course() {
  
  ID = 0;
  name = "";
  credit = 0;
  
}

void Course::setCourse(int id, string cname, int creditNum) {
  
  ID = id;
  name = cname;
  credit = creditNum;
  
}

int Course::getID() {
  
  return ID;
  
}

string Course::getName() {
  
  return name;
  
}

int Course::getCredit() {
  
  return credit;
  
}

void Course::printCourse() {

  cout << ID << " " << name << " " << credit << endl;
  
}
