#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

const int lengthSIZE = 20;
const int scoreSIZE = 3;

struct Students {

  int ID;
  char name[lengthSIZE];
  double scores[scoreSIZE];

};

void readFile(Students [], int);
void bubbleSortbyID(Students [], int);
void bubbleSortbyName(Students[], int);
void bubbleSortbyScores(Students[], int);
void printArray(Students [], int);

int main() {
  
  const int SIZE = 10;
  Students student[SIZE];

  readFile(student, SIZE);
  cout << "The Student struct array is:" << endl;
  printArray(student, SIZE);
  
  cout << "\nThe sorted Student struct array by ID is:" << endl;
  bubbleSortbyID(student, SIZE);
  printArray(student, SIZE);
  
  cout << "\nThe sorted Student struct array by Name is:" << endl;
  bubbleSortbyName(student, SIZE);
  printArray(student, SIZE);
  
  cout << "\nThe sorted Student struct array by Scores are:" << endl;
  bubbleSortbyScores(student, SIZE);
  printArray(student, SIZE);

  return 0;
}

void readFile(Students arr[], int N) {
  
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
  
  int counter = 0;
  bool sorted = false;
  while (!sorted) {
    sorted = true;
    for (int i = N - 1; i > counter; i--) {
      if (arr[i].ID < arr[i - 1].ID) {
        swap(arr[i], arr[i - 1]);
        sorted = false;
      }
    }
    counter++;
  }

}

void bubbleSortbyName(Students arr[], int N) {

  int outcome;
  for (int i = 0; i < N - 1; i++) {
    for (int j = 0; j < N - i - 1; j++) {
      outcome = strcmp (arr[j].name, arr[j + 1].name);
      if (outcome > 0) {
        swap(arr[j], arr[j + 1]);
      }
    }
  }

}


// NEEDS TO BE DEBUGGED
void bubbleSortbyScores(Students arr[], int N) {
  
  for (int i = 0; i < N - 1; i++) {
    for (int j = 0; j < N - i - 1; j++) {
      if (arr[i].scores[j] > arr[i + 1].scores[j]) {
            swap(arr[i], arr[i + 1]); 
        }
    }
  }     

}

void printArray(Students arr[], int N) {
  
  for(int i = 0; i < N; i++) {
    cout << arr[i].ID << "\t" << arr[i].name << "\t";
    for (int j = 0; j < scoreSIZE; j++) {
      cout << arr[i].scores[j] << "\t";
    }
  cout << endl;
  }
      
  cout << endl;
}