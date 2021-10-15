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

Students *makeStudents(int);
void printStudents(Students * const, int);
void sortStudents(Students * const, int);

int main() {
  
  const int SIZE = 10;
  Students *ptr = nullptr;
  ptr = makeStudents(SIZE);
  cout << "The original file:" << endl;
  printStudents(ptr, SIZE);
  sortStudents(ptr, SIZE);
  cout << "The sorted file by ascending order of score summation:" << endl;
  printStudents(ptr, SIZE);

  return 0;

}

Students *makeStudents(int N) {

  Students *ptr = new Students[10];

  ifstream ifs;
  ifs.open("students.txt");
  if (ifs.fail()) {
    cerr << "File could not be opened..." << endl;
    exit(0);
  }

  for (int i = 0; i < N; i++) {
    ifs >> (ptr + i)->ID >> (ptr + i)->name;
    for (int j = 0; j < scoreSIZE; j++) {
      ifs >> (ptr + i)->scores[j];
    }
  }

  return ptr;

}

void printStudents(Students * const ptr, int N) {

  for (int i = 0; i < N; i++) {
    cout << (ptr + i)->ID << "\t" << (ptr + i)->name << "\t";
    for (int j = 0; j < scoreSIZE; j++) {
      cout << (ptr + i)->scores[j] << "\t";
    }
    cout << endl;
  }
  cout << endl;
}

void sortStudents(Students * const ptr, int N) {

  int total1, total2;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N - 1; j++) {
      //int total1, total2;
      total1 = (ptr + j)->scores[0] + (ptr + j)->scores[1] + (ptr + j)->scores[2];
      total2 = (ptr + j + 1)->scores[0] + (ptr + j + 1)->scores[1] + (ptr + j + 1)->scores[2];

      if (total1 > total2) {
        swap(*(ptr + j), *(ptr + j + 1));
      }
    }
  }
}
