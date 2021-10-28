#include <iostream>
#include <fstream>

using namespace std;

struct Student {

  int ID;
  char name[20];
  double score[3];

};

int main() {
  
  ifstream ifs;
  ofstream ofs;

  Student *student = new Student;
  
  ifs.open("students.txt");
  ofs.open("students.bin");
  
  ifs >> student->ID;
  ifs >> student->name;
  ifs >> student->score[0];
  ifs >> student->score[1];
  ifs >> student->score[2];

	ofs.write((char *)&(*student), sizeof(*student));

  return 0;
  
}