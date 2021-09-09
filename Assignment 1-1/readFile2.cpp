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

void linearSearch(Student[], int, int);
int SIZE = 10;

int main() {
	ifstream ifs;
	Student s[SIZE];
    int numID;

	ifs.open("students.bin");

  // Reads the text from the binary file "students.bin"
	ifs.read( (char *)&s, sizeof(s) );

  cout << "The Student ID's are:\n";
  for (int i = 0; i < SIZE; i++) {
	  cout << s[i].ID << endl;
  }

  // Asks the user to pick an ID that would allow them to see the student's data
  cout << "\nEnter the ID of the student that you would like to get to know more about: ";
  cin >> numID;
  linearSearch(s, SIZE, numID);

  return 0;
}

// Function that searches inside the Student array and looks for the 'target' value that should match an ID in the Student array
void linearSearch(Student s[], int n, int target) {
  for (int i = 0; i < n; i++) {
    if (s[i].ID == target) {
      cout << "ID: " << s[i].ID << "\t";
	    cout << "Name: " << s[i].name << "\t";
	    cout << "Score #1: " << s[i].score[0] << "\t";
	    cout << "Score #2: " << s[i].score[1] << "\t";
	    cout << "Sum: " << s[i].sum << "\t";
	    cout << "Avg: " << s[i].avg << "\n";
    }
  }
}