#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

void makeArray(int [], int);
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

void printArray(int arr[], int N) {

  for(int i = 0; i < N; i++){
    cout << arr[i] << "\t";
    }
    cout << endl;

}


void selectionSort(int arr[], int N) {

  int minidx;
  for (int i = 0; i < N - 1; i++) {
    minidx = i;
    for (int j = i + 1; j < N; j++) {
      if (arr[j] < arr[minidx]) {
        minidx = j;
      }
     
    }
    swap(arr[minidx], arr[i]);
  }
}
