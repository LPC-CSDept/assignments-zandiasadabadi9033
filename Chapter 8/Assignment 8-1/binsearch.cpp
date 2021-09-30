#include <iostream>
#include <algorithm> 

using namespace std;

int binarySearch(int [], int, int);

int main() {
  const int SIZE = 10;
  int arr[SIZE] = {10, 25, 30, 35, 40, 45, 55, 60, 65, 70};
  int target = 40;
  int index = binarySearch(arr, SIZE, target);

  if (index == -1) {
    cout << "Target was not found..." << endl;
    cout << "The target (" << target << ") does not exist in this array." << endl;

  }
  else {
    cout << "Target found!" << endl;
    cout << "The target (" << target << ") exists in index #" << index << endl;
  }

  return 0;
}

int binarySearch(int arr[], int N, int target) {
  int first = 0, last = N - 1, mid;
  
  while (first <= last) {
    mid = (first + last) / 2;
    if (arr[mid] == target) {
      return mid;
    }
    else if (arr[mid] < target) {
      first = mid + 1;
    } 
    else if (arr[mid] > target){
      last = mid - 1;
    }
  }

  return -1;
}

