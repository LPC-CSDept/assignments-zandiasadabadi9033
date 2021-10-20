#include <iostream>
#include <fstream>

using namespace std;

struct Student {
  
  int ID;
  char name[20];
  double score[3];
  double memorySpace;

};

int main() {
  
  ifstream ifs;
  Student *student = new Student;
  double total, average;
  
  ifs.open("students.bin");
  ifs.read((char *)&(*student), sizeof(*student));
  
  student->memorySpace = sizeof(*student);
  
  total = student->score[0] + student->score[1] + student->score[2];
  
  average = total / 3;
  
  if (average > 85) {
    cout << "Student Name: " << student->name << endl;
    cout << "Student ID: " << student->ID << endl;
    cout << "First score: " << student->score[0] << endl;
    cout << "Second score: " << student->score[1] << endl;
    cout << "Third score: " << student->score[2] << endl;
    cout << "Total of scores: " << total << endl;
    cout << "Average score: " << average << endl; 
    cout << "This student's information weighs " << student->memorySpace << " bytes!" << endl;
    }
    
  else {
    cout << "Sorry... we can't show the record..." << endl;
    cout << "The reasoning: the average score for this student is lower than 85" << endl;
  }

  return 0;
  
}