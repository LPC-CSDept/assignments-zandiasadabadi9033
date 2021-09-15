#include <iostream>
#include <algorithm> 
using namespace std;


int binarySearch(int [], int, int);
// 1st parameter : Integer Array
// 2nd Parameter : Size of the array N
// 3rd Parameter : Taget Value
// Return value and type : the index of the array if the target is in the array. -1 if not found.


int main()
{
  const int SIZE = 10;
  int arr[SIZE] = {10, 25, 30, 35, 40, 45, 55, 60, 65, 70 };
  int target = 35;
  
  binarySearch(arr, SIZE, target);
  
  // a little tweak.
  // The function binarySearch returns a integer value for the index
  // But, you do not save or use in your main function.
  // I think the return value should be used to check whether the target value was found in the array or not.
  

  return 0;
}

int binarySearch(int arr[], int N, int target)
{
  int first = 0, last = N - 1, mid;
  
  while (first <= last) {
    mid = (first + last) / 2;
    if (arr[mid] == target) {
      cout << "The target was found at index #" << mid << endl;
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
