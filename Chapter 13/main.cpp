#include <iostream>
#include "Students.h"

using namespace std;

int main() {
  
  Student student;

  student.setID(10001);
  student.setName("John");
  for(int i = 0; i < 3; i++) {
    student.setScores(i, 90);
  }
  
  cout << "Student's Information\n";
  cout << "ID : " << student.getID() << endl;
  cout << "Name : " << student.getName() << endl;
  cout << "score 1: " << student.getScores(0) << endl;
  cout << "score 2: " << student.getScores(1) << endl;
  cout << "score 3: " << student.getScores(2) << endl;
  cout << "sum: " << student.getSum() << endl;
  cout << "average: " << student.getAvg() << endl;

  return 0;
	
}