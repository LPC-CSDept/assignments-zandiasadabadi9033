#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

double *makeNumbers(int);
void printNumbers(double * const, int);
void sortNumbers(double * const, int);
void deleteNumbers(double *);

int main() {

  const int SIZE = 10;
  double *ptr = nullptr;
  
  cout << "The initial double values are:\n";
  ptr = makeNumbers(SIZE);
  printNumbers(ptr, SIZE);

  cout << "The sorted double values are:\n";
  sortNumbers(ptr, SIZE);
  printNumbers(ptr, SIZE);

  deleteNumbers(ptr);

  return 0;

}

double *makeNumbers(int N) {

  srand(time(NULL));
  double *temp = new double[N];
  for (int i = 0; i < N; i++) {
    temp[i] = rand() % 100 + 1;
  }
  return temp;

}

void printNumbers(double * const ptr, int N) {

  for (int i = 0; i < N; i++) {
    cout << *(ptr + i) << " ";
  }
  
  cout << endl;

}

void sortNumbers(double * const ptr, int N) {
  
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N - i - 1; j++) {
      if (ptr[j] > ptr[j + 1]) {
        swap(ptr[j], ptr[j + 1]);
      }
    }
  }

}

void deleteNumbers(double * ptr) {
  
  delete ptr;
  
}