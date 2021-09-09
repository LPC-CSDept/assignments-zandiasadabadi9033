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

int SIZE = 10;

int main()
{
  ifstream ifs;
	ofstream ofs;
	
	Student s[SIZE];
	ifs.open("students.txt");
  ofs.open("students.bin" );

  // To read text from file "students.txt" and assign to the Student struct 's'
	for (int i = 0; i < SIZE; i++) {
		ifs >> s[i].ID;
		ifs >> s[i].name;
		ifs >> s[i].score[0];
		ifs >> s[i].score[1];
		s[i].sum = s[i].score[0] + s[i].score[1];
		s[i].avg = s[i].sum / 2;
	}

  // To output the content stored in the Student struct 's' variables
	for (int i = 0; i < 10; i++) {
		cout << s[i].ID << "\t" ;
		cout << s[i].name << "\t";
		cout << s[i].score[0] << " " << s[i].score[1] << "\t";
		cout << s[i].sum << " " << s[i].avg << endl;
	}

  // Writes the content stored in the Student struct 's' to the binary file "students.bin"
  for (int i = 0; i < 10; i++) {
		ofs.write((char *)&s, sizeof(s));
  }
	
  return 0;
}