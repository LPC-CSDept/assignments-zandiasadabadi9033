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

  // Shows the student ID's so that the user can pick one
  char sentinel;
  do {
    cout << "\nEnter 'A' to see all of the students' data\n";
    cout << "Enter 'B' to see all the IDs and then pick one student ID to visit the data\n";
    cout << "Enter 'Q' to quit\n";
    cout << "Enter your command here: ";
    cin >> sentinel;

    if (toupper(sentinel) == 'A') {
      for (int i = 0; i < 10; i++) {
        cout << s[i].ID << "\t" ;
        cout << s[i].name << "\t";
        cout << s[i].score[0] << " " << s[i].score[1] << "\t";
        cout << s[i].sum << " " << s[i].avg << endl;
      }

      cout << "\nLet's choose again :)\n";
    }

    else if (toupper(sentinel) == 'B') {
      cout << "The Student ID's are:\n";
      for (int i = 0; i < SIZE; i++) {
        cout << s[i].ID << endl;
      }

      // Asks the user to pick an ID that would allow them to see the student's data
      do {
        cout << "\nEnter the ID of the student that you would like to get to know more about: ";
        cin >> numID;

        if (numID > 10000 && numID < 10011) {
          // Calls the function that would check to see if the entered value matches one of the student ID's, and if so, returns the data for that particular student
          linearSearch(s, SIZE, numID);
          cout << "\nLet's choose again :)\n";
        }
        else {
          cout << "\nInvalid input... Try again...\n";
        }
      } while(!(numID > 10000 && numID < 10011));

    }
    else if (toupper(sentinel) == 'Q') {
      cout << "\nProgram is terminated\n";
    }

    else {
      cout << "\nInvalid input... Try again...\n";
    }
  } while (toupper(sentinel) != 'Q');

  return 0;
}

// Function that searches inside the Student array and looks for the 'target' value that should match an ID in the Student array
void linearSearch(Student s[], int n, int target) {
  for (int i = 0; i < n; i++) {
    if (s[i].ID == target) {
      cout << "\nID: " << s[i].ID << "\t";
      cout << "Name: " << s[i].name << "\t";
      cout << "Score #1: " << s[i].score[0] << "\t";
      cout << "Score #2: " << s[i].score[1] << "\t";
      cout << "Sum: " << s[i].sum << "\t";
      cout << "Avg: " << s[i].avg << "\n";
    }
  }
}