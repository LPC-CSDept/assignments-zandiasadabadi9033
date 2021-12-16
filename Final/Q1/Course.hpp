#ifndef COURSE_H
#define COURSE_H
#include <iostream>

using namespace std;

class Course {

private:
  int ID;
  string name;
  int credit;
public:
  Course() {

    ID = 0;
    name = "";
    credit = 0;

  }

  void setCourse(int id, string cname, int creditNum) {

    ID = id;
    name = cname;
    credit = creditNum;

  }

  int getID() {

    return ID;

  }

  string getName() {

    return name;

  }

  int getCredit {

    return credit;
    
  }

};

#endif