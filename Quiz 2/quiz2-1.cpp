#include <iostream>
#include <ctime>

using namespace std;

int fillupArray(int *, int);
void printArray(int * const, int);
void deleteArray(int *);

int main() {

  const int SIZE = 10;
  int *ptr = new int[SIZE];
  
  fillupArray(ptr, SIZE);
  cout << "The values are:\n";
  printArray(ptr, SIZE);
  deleteArray(ptr);

  return 0;

}

int fillupArray(int * ptr , int N) {
  
  srand(time(0));
  for (int i = 0; i < N; i++) {
    *(ptr + i) = rand() % 100 ;
  }
  
  return *ptr;
  
}

void printArray(int * ptr, int N) {
  
  for (int i = 0; i < N; i++) {
    cout << "Value number " << i + 1 << " is: " << *(ptr + i) << endl;
  }	 

}

void deleteArray(int * ptr) {
  
  delete ptr;

}