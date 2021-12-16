#include <iostream>
#include <fstream>
#include "Course.h"

using namespace std;

int main() {

  int SIZE = 10;
  Course courses[SIZE];

  fstream ifs;
  ifs.open("textFile.txt");

  for (int i = 0; i < SIZE; i++) {
    int ID;
    string name;
    int credit;
    ifs >> ID >> name >> credit;
    courses[i].setCourse(ID, name, credit);
  }

  ifs.close();

  return 0;

}