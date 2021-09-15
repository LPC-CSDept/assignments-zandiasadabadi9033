#include <iostream>

using namespace std;

int findMin(int [], int, int);
void printArray(int [], int);



int main() {
  
  const int SIZE = 10;
  int numbers[SIZE] = {25, 10, 15, 30, 35, 40, 45, 55, 20, 50};
  printArray(numbers, SIZE);
  
  for(int i = 0; i < SIZE - 1; i++) {
    int minidx;
    minidx = findMin(numbers, SIZE, i); //Find the i_th smallest number
    swap(numbers[i], numbers[minidx]);
    }
    printArray(numbers, SIZE);

}

int findMin(int arr[], int N, int ith) {

  int min, minidx;
  min = arr[ith];
  for (int j = ith; j < N; j++) {
    if (min > arr[j]) {
      min = arr[j];
      minidx = j;
    }
  }
  return minidx;
}

void printArray(int arr[], int N) {

  for(int i = 0; i < N; i++){
    cout << arr[i] << "\t";
    }
    cout << endl;

}
