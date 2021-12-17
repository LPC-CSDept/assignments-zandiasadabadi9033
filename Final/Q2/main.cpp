#include <iostream>
#include <fstream>
#include "Course.h"

using namespace std;

int partition(Course [], int, int);
void quick_sort(Course [], int, int);
void recursive_quick_sort(Course[], int, int);
void bubbleSort(Course [], int);
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
  
  cout << "The sorted courses are: " << endl;
  bubbleSort(courses, SIZE);
  print(courses, SIZE);
  
  int ans1, ans2;
  cout << "\nPlease enter an ID value to search: ";
  cin >> ans1;
  
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
void quick_sort(Course [], int, int);
void recursive_quick_sort(Course[], int, int);

void bubbleSort(Course arr[], int N) {
  
  for (int i = 0; i < N - 1; i++) {
    for (int j = 0; j < N - i - 1; j++) {
      if (arr[j].getID() > arr[j + 1].getID()) {
        swap(arr[j], arr[j + 1]);
      }
    }
  }
  
}

void print(Course arr[], int N) {
  
  for (int i = 0; i < N; i++) {
    arr[i].printCourse();
  }
  
}