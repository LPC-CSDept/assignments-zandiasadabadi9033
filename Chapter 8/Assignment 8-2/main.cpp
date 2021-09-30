/*

I could make it so that after each iteration of the Linear/Binary Search, we would see the target and the index. 

However, for the sake of readability, I commented them out so that the output won't be hundreds of line long and you can easily...
see the average comparison numbers.

If you wanted to see each iteration, the single-commented out lines within the Linear & Binary Search would do just that.

*/
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
  int array[SIZE];
  int target;
  int total_linear = 0, total_binary = 0;
  
  srand(time(0));
  makeArray(array, SIZE);
  printArray(array, SIZE);
  
  for(int i = 0; i < 100; i++) {
    target = array[rand() % SIZE];
    total_linear += linearSearch(array, SIZE, target) ;
  }
  
  cout << "The average comparision numbers of Linear Search is " << total_linear / 100.0 << endl;
  
  bubbleSort(array, SIZE);
  printArray(array, SIZE);
  
  for(int i = 0; i < 100; i++) {
    target = array[rand() % SIZE];
    total_binary += binarySearch(array, SIZE, target) ;
  }
  
  cout << "The average comparision numbers of Binary Search is " << total_binary / 100.0 << endl;
  
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

   for (int i = 0; i < N; i++) {
     if (target == arr[i]) {
       //cout << "Linear Search has found the value (" << target << ") at index #" << i << endl;
       return i + 1;
     }
   }
   return N;
   
}

int binarySearch(int arr[], int N, int target) {
 
 int first = 0, last = N - 1, mid;
 
 while (first <= last) {
   mid = (first + last) / 2;

   if (arr[mid] == target) {
     //cout << "Binary Search has found the value (" << target << ") at index #" << mid << endl;
     return mid;
   }

   else if (arr[mid] < target) {
     first = mid + 1;
   }

   else if (arr[mid] > target) {
     last = mid - 1;
   }
   
  }

 return -1;

}
