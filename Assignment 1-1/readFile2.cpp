#include <iostream>
#include <fstream>
using namespace std;

struct Student {
  int ID;
  char name[20];
  double score[2];
  double sum;
  double avg;
};

int main()
{
	ifstream ifs;
	Student s;

	ifs.open("students.bin");

	ifs.read( (char *)&s, sizeof(s) );

	cout << "ID: " << s.ID << "\t";
	cout << "Name: " << s.name << "\t";
	cout << "First Score: " << s.score[0] << "\t";
	cout << "Second Score: " << s.score[1] << "\t";
	cout << "Sum: " << s.sum << "\t";
	cout << "Avg: " << s.avg << "\n";

}