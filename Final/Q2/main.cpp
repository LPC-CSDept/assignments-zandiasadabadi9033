#include <iostream>
#include <fstream>
#include "Course.h"

using namespace std;

int partition(Course [], int, int);
void quick_sort(Course [], int, int);
void recursive_quick_sort(Course[], int, int);
void print(Course [], int);

int main() {
  
  int SIZE = 10;
  Course courses[SIZE];
  
  fstream ifs;
  ifs.open("textFile.txt");
  
  for (int i = 0; i < SIZE; i++) {
    int ID;
    string name;
    int credit;
    ifs >> ID >> name >> credit;
    courses[i].setCourse(ID, name, credit);
  }
  
  cout << "The unsorted courses are:" << endl;
  print(courses, SIZE);

  cout << "\n\nThe sorted courses using iterative quickSort are:\n";
  quick_sort(courses, 0, SIZE - 1);
  print(courses, SIZE);
  
  cout << "\n\nThe sorted courses using recursive quickSort are:\n";
  recursive_quick_sort(courses, 0, SIZE - 1);
  print(courses, SIZE);
  
  ifs.close();
  
  return 0;
  
}

int partition(Course arr[], int low, int high) {

  int pivot = arr[high].getID();
  int i = (low - 1);

  for (int j = low; j <= high - 1; j++) {
    if (arr[j].getID() <= pivot) {
      i++;
      swap(arr[i], arr[j]);
    }
  }
  swap(arr[i + 1], arr[high]);

  return (i + 1);

}
void quick_sort(Course arr[], int low, int high) {

  // creating a stack
  int stack[high - low + 1];
  int top = -1;

  // initializing the stack values
  stack[++top] = low;
  stack[++top] = high;

  // removing the unnecessary data
  while (top >= 0) {
    high = stack[top--];
    low = stack[top--];

    int pivot = partition(arr, low, high);

    // if on the left side of pivot, push the left side to stack
    if (pivot - 1 > low) {
      stack[++top] = low;
      stack[++top] = pivot - 1;
    }

    // if on the right side of pivot, push the right side to stack
    if (pivot + 1 < high) {
      stack[++top] = pivot + 1;
      stack[++top] = high;
    } 
  }
  
}

void recursive_quick_sort(Course arr[], int low, int high) {

  if (low < high) {
    int pivot = partition(arr, low, high);
    recursive_quick_sort(arr, low, pivot - 1);
    recursive_quick_sort(arr, pivot + 1, high);
  }

}

void print(Course arr[], int N) {
  
  for (int i = 0; i < N; i++) {
    arr[i].printCourse();
  }
  
}