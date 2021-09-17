#include <iostream>
#include <ctime>

using namespace std;

void makeArray(int [], int);
// int findMin(int [], int, int);
void printArray(int [], int);
void selectionSort(int [], int);

int main() {
  
  const int SIZE = 10;
  int randArr[SIZE];

  srand(time(0));
  makeArray(randArr, SIZE);
  cout << "The random array is:" << endl;
  printArray(randArr, SIZE);
  
  selectionSort(randArr, SIZE);
  cout << "\nThe sorted random array using Selection Sort is:" << endl;
  printArray(randArr, SIZE);

  return 0;
}

void makeArray(int arr[], int N) {

  for (int i = 0; i < N; i++) {
    arr[i] = rand() % 55 + 1;
  }

}

/*int findMin(int arr[], int N, int iteration) {

  int min, minidx;
  min = arr[iteration];
  for (int j = iteration; j < N; j++) {
    if (min > arr[j]) {
      min = arr[j];
      minidx = j;
    }
  }
  return minidx;
}*/

void printArray(int arr[], int N) {

  for(int i = 0; i < N; i++){
    cout << arr[i] << "\t";
    }
    cout << endl;

}


void selectionSort(int arr[], int N) {

  int min, minidx;
  for (int i = 0; i < N - 1; i++) {
    for (int j = 0; j < N - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        swap(arr[j], arr[j + 1]);
      }
    }
  }
}
