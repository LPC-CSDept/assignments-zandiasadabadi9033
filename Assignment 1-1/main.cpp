#include <iostream>
#include <fstream>

using namespace std;

struct Student {
  int ID;
  string name;
  double score[2];
  double sum;
  double avg;
};

int main()
{
  ifstream ifs;
	//ofstream ofs;
	
	Student s[10];
	ifs.open("students.txt");
  //ofs.open("students.bin" );

  // To read text from file "students.txt" and assign to the Student struct 
	for (int i = 0; i < 10; i++) {
		ifs >> s[i].ID;
		ifs >> s[i].name;
		ifs >> s[i].score[0];
		ifs >> s[i].score[1];
		s[i].sum = s[i].score[0] + s[i].score[1];
		s[i].avg = s[i].sum / 2;
	}

  // To output the content stored in the Student struct variables

	for (int i = 0; i < 10; i++) {
		cout << s[i].ID << "\t" ;
		cout << s[i].name << "\t";
		cout << s[i].score[0] << " " << s[i].score[1] << "\t";
		cout << s[i].sum << " " << s[i].avg << endl;
	}
	
  return 0;



}