/*
Troubleshooting for all parts of the exam are 
included in the Canvas submission page for the
Final Exam.
*/




#include <iostream>
#include <fstream>
#include "Course.h"

using namespace std;

int binary_search(Course [], int, int);
int recursive_binary_search(Course [], int, int, int);
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

  cout << "\n\nUsing iterative binarySearch: " << endl;
  int bin = binary_search(courses, SIZE, ans1);
  if (bin != -1) {
    cout << "Found at index #" << bin << endl;
    courses[bin].printCourse();
  } 
  else {
    cout << "Invalid input..." << endl;
  }
  
  cout << "\nPlease enter another ID value to search: ";
  cin >> ans2;
  
  cout << "\n\nUsing recursive binarySearch: " << endl;
  bin = recursive_binary_search(courses, 0, SIZE, ans2);
  if (bin != -1) {
    cout << "Found at index #" << bin << endl;
    courses[bin].printCourse();
  } 
  else {
    cout << "Invalid input..." << endl;
  }

  ifs.close();

  return 0;

}

int binary_search(Course arr[], int N, int num) {

  int first = 0, last = N - 1;

  while (first <= last) {

    int middle = (first + last) / 2;
    if (arr[middle].getID() == num) {
      return middle;
    }
    if (arr[middle].getID() < num) {
      first = middle + 1;
    }
    if (arr[middle].getID() > num){
      last = middle - 1;
    }

  }

  return -1;

}

int recursive_binary_search(Course arr[], int left, int right, int num) {

  if (right >= left) {
    int middle = 1 + (right - left) / 2;

    if (arr[middle].getID() == num) {
      return middle;
    }
    if (arr[middle].getID() > num) {
      return recursive_binary_search(arr, 1, middle - 1, num);
    }

    return recursive_binary_search(arr, middle + 1, right, num);
  
  }

  return -1;

}

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