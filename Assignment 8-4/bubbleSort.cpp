#include <iostream>
using namespace std;

void printArray(int [], int);

int main() {
  
  const int SIZE = 10;
  int numbers[SIZE] = {25, 10, 15, 30, 35, 40, 45, 55, 20, 50};
  
  printArray(numbers, SIZE);
  
  for (int i = 0; i < SIZE - 1; i++){
    for(int j = 0; j < SIZE - 1; j++) {
      if(numbers[j] > numbers[j + 1])
      swap(numbers[j], numbers[j + 1]);
    }
  }
  
  printArray(numbers, SIZE);

  return 0;
}

void printArray(int a[], int N) {

  for(int i = 0; i < N; i++) {
    cout << a[i] << "\t";
    }

  cout << endl;
}