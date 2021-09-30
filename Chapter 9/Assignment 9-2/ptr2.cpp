#include <iostream>

using namespace std;

void printArray(double *const , int);

int main() {
  
  const int SIZE = 5;
  double num[SIZE] = {10.0, 20.0, 30.0, 40.0, 50.0};
  int * ptr;
  
  // array name can use used as a pointer
    // 1) did not initialize with the address 
    // 2) This pointer ( array nanme) can not be assigned with other address values

  // int i;  num = &i; // error
  // Array name points to the address of the first element.
	
  printArray(num, SIZE);

  return 0;

}

void printArray(double *const ptr, int N) {
  
  for(int i = 0; i < 5; i++) {
    cout << *(ptr + i) << "\t";
  }
  
  cout << endl;

}

// What is the differance between the *(num + i) and num[i]?

// *(num + i) iterates through an array of pointers
// num[i] iterates through a regular array 