#include <iostream>
#include <ctime>

using namespace std;


int recursive_binary_search(int arr[], int left, int right, int num) {

  if (right >= left) {
    int middle = 1 + (right - left) / 2;

    if (arr[middle] == num) {
      return middle;
    }
    if (arr[middle] > num) {
      return recursive_binary_search(arr, 1, middle - 1, num);
    }

    return recursive_binary_search(arr, middle + 1, right, num);
  
  }

  return -1;

}

int main() {

  int SIZE = 10;
  int myArr[SIZE];

  int num;
  srand(time(0));
  for (int i = 0; i < SIZE; i++) {
    num = rand() % 100 - 1;
    myArr[i] = num;
  }

  for (int i = 0; i < SIZE; i++) {
    cout << myArr[i] << " ";
  }

  int ans;
  cout << endl;
  cout << "Please enter a number in the array that you want to search for: ";
  cin >> ans;

  int bin = recursive_binary_search(myArr, 0, SIZE, ans);
  if (bin != -1) {
    cout << "The value was found at index #" << bin; 
  } 

  return 0;

}