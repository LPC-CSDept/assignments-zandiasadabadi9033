#include <iostream>
#include "stack.hpp"
#include <ctime>

using namespace std;

int main() {
  
  int SIZE = 20;
  int arr[SIZE];

  srand(time(0));
  for (int i = 0; i < SIZE; i++) {
    arr[i] = rand() % 100 + 1;
  }
  
  Stack stackArr(SIZE);
  
  for (int i = 0; i < SIZE; i++) {
    stackArr.push(arr[i]);
  }

  stackArr.isEmpty();

  cout << "The stack array is:\n";
  stackArr.printAll();
  cout << endl;
  
  cout << "The reversed values are:\n";
  for (int i = 0; i < SIZE; i++) {
    arr[i] = stackArr.pop();
  }
  for (int i = 0; i < SIZE; i++) {
    cout << arr[i] << " ";
  }

  cout << "\n\nNow... clearing the stack!\n";
  stackArr.clear();
  stackArr.isEmpty();

  return 0;
  
}