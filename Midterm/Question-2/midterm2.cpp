#include <iostream>
#include "Student.hpp"
#include <fstream>
#include <vector>

using namespace std;

/*

*Had to include these functions inside the hpp file
* this makes me believe that the reason why my 'quiz4'
* assignment didn't compile is because I had my functions *in the wrong file. I'm not quite sure why they need to * *be in a certain file to compile, when the syntaxes being
* used are correct, but that is how it works I believe

** If my assumptions are correct, then all I would have to 
** do for 'quiz4' is to separate the function definitions 
** from the original file that I wrote them in

*/

/*void makeStudents(Student arr[], int N);
void printStudents(Student arr[], int N);
void descSort(Student arr[], int N);
Student *binarySearch(Student arr[], int N, int val);*/

int main() {

  const int SIZE = 10;
  Student students[SIZE];
  int value;

  makeStudents(students, SIZE);
  // sort by descending scores
  descSort(students, SIZE);
  printStudents(students, SIZE);

  cout << "Please enter the ID of the student that you are looking for: ";
  cin >> value;

  // binarySearch to find the value
  Student *result = binarySearch(students, SIZE, value);

  if (result != 0) {
    cout << "The student's information is: " << endl;
    result->printStudent();
  }

  else {
    cout << "Invalid ID number...";
  }
  
  return 0;

}
