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
	Student s[10];

	ifs.open("students.bin");

  // Reads the text from the binary file "students.bin"
	ifs.read( (char *)&s, sizeof(s) );

  // Reads the content stored in the Student struct 's'
  for (int i = 0; i < 10; i++) {
	  cout << "ID: " << s[i].ID << "\t";
	  cout << "Name: " << s[i].name << "\t";
	  cout << "Score #1: " << s[i].score[0] << "\t";
	  cout << "Score #2: " << s[i].score[1] << "\t";
	  cout << "Sum: " << s[i].sum << "\t";
	  cout << "Avg: " << s[i].avg << "\n";
  }

  
  return 0;
}