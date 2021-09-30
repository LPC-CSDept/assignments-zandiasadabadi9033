#include <iostream>
#include <fstream>

using namespace std;

const int lengthSIZE = 20;
const int scoreSIZE = 3;

struct Students {

  int ID;
  char name[lengthSIZE];
  double scores[scoreSIZE];

};

void makeStudents(Students [], int);
void bubbleSortbyID(Students [], int);
int binarySearch(Students [], int, int);
void printStudents(Students [], int);

int main() {

  const int SIZE = 10;
  Students students[SIZE];
  int target, index;
  
  makeStudents(students, SIZE);
  cout << "The initial Student's struct array is: \n";
  printStudents(students, SIZE);
  bubbleSortbyID(students, SIZE);
  cout << "After sorting the array by ID is: \n";
  printStudents(students, SIZE);
  
  cout << "Enter the student ID you want to retrieve: ";
  cin >> target;

  index = binarySearch(students, SIZE, target);
  if (index == -1) {
    cout << "The student ID " << target << " is not found... \n";
  }
  
  else {
    cout << "The student's name is: " << students[index].name << endl << "Scores are: ";
    for (int i=0; i< scoreSIZE; i++) {
      cout << students[index].scores[i] << "\t";
    }
    cout << endl;
    
  }

  return 0;

}

void makeStudents(Students arr[], int N) {

  ifstream ifs;
  ifs.open("students.txt");

  if (ifs.fail()) {
    cerr << "File could not be opened...\n";
    exit(0);
  }

  for (int i = 0; i < N; i++) {
    ifs >> arr[i].ID >> arr[i].name;

    for (int j = 0; j < scoreSIZE; j++) {
      ifs >> arr[i].scores[j];
    }

    if (ifs.fail()) {
      cerr << "File could not be read...\n";
      exit(0);
    }
  }

}

void bubbleSortbyID(Students arr[], int N) {
  
  for (int i = 0; i < N - 1; i++) {
    for (int j = 0; j < N - i - 1; j++) {
      if (arr[j].ID > arr[j + 1].ID) {
        swap(arr[j], arr[j + 1]);
      }
    }
  }
  
}

int binarySearch(Students arr[], int N, int target) {
  int first = 0, last = N - 1, mid;

  while (first <= last) {
    mid = (first + last) / 2;

    if (arr[mid].ID == target) {
      return mid;
    }

    else if (arr[mid].ID < target) {
      first = mid + 1;
    }

    else if (arr[mid].ID > target) {
      last = mid - 1;
    }
  }

  return -1;

}
void printStudents(Students arr[], int N) {

  for (int i = 0; i < N; i++) {
    cout << arr[i].ID << "\t" << arr[i].name << "\t";

    for (int j = 0; j < scoreSIZE; j++) {
      cout << arr[i].scores[j] << "\t";
    }

    cout << endl;
  }

  cout << endl;

}