#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int linearSearch(int [],int ,int);
int binarySearch(int [], int, int);
void makeArray(int [], int);
void printArray(int [], int);
void bubbleSort(int [], int);

int main() {
  
  const int SIZE = 64;
  int myArray[SIZE];
  int target;
  int total_linear = 0, total_binary = 0;
  
  srand(time(0));
  makeArray(myArray, SIZE);
  printArray(myArray, SIZE);
  
  for(int i = 0; i < 100; i++) {
    target = myArray[rand() % SIZE];
    total_linear += linearSearch(myArray, SIZE, target) ;
  }
  
  cout << "The average comparision numbers of Linear Search is: " << total_linear / 100.0 << endl;
  
  bubbleSort(myArray, SIZE);
  printArray(myArray, SIZE);
  
  for(int i = 0; i < 100; i++) {
    target = myArray[rand() % SIZE];
    total_binary += binarySearch(myArray, SIZE, target) ;
  }
  
  cout << "The average comparision numbers of Binary Search is: " << total_binary / 100.0 << endl;
  
  return 0;

}

void makeArray(int arr[], int N) {

  for(int i = 0; i < N; i++) {
    arr[i] = rand() % 100 + 1;
  }

}

void printArray(int arr[], int N) {

  for(int i = 0; i < N; i++) {
        cout << arr[i]  << "\t" ; 
        if (i % 8 == 7 ) cout << endl;
    }
    
}

void bubbleSort(int arr[], int N) {

  int min, index;
  for(int i = 0; i < N - 1; i++) {
    for(int j = 0; j < N - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        swap(arr[j], arr[j + 1]);
      }
    }
  }
  
}

int linearSearch(int arr[], int N, int target) {
  
  int counter = 0;
  for (int i = 0; i < N; i++) {
    counter++;
    if (target == arr[i]) {
      //cout << "Linear Search has found the value (" << target << ") at index #" << i << endl;
      return counter;
    }
  }
  
  return counter;
   
}

int binarySearch(int arr[], int N, int target) {
  
  int first = 0, last = N - 1, mid, counter = 0;
  while (first <= last) {
    counter++;
    mid = (first + last) / 2;

    if (arr[mid] == target) {
      //cout << "Binary Search has found the value (" << target << ") at index #" << mid << endl;
      return counter;
    }

    else if (arr[mid] < target) {
      first = mid + 1;
    }

    else if (arr[mid] > target) {
      last = mid - 1;
    }
   
   }
   
   return counter;

}
