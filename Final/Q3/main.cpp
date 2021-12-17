#include <iostream>
#include <fstream>
#include "ProductWorker.h"

using namespace std;

int mostPaid(ProductWorker [], int);

int main() {

  int SIZE = 10;
  ProductWorker employee[SIZE];

  fstream ifs;
  ifs.open("textFile.txt");

  cout << "The employees are:\n";
  for (int i = 0; i < SIZE; i++) {
    string name;
    int number;
    string hireDate;
    int shift;
    double pay;
    
    ifs >> name >> number >> hireDate >> shift >> pay;
    employee[i].setWorker(name, number, hireDate, shift, pay);
    employee[i].printProductWorker();
  }

  int most = mostPaid(employee, SIZE);
  cout << "\nThe employee with the highest pay is:\n";
  employee[most].printProductWorker();

  return 0;
  
}

int mostPaid(ProductWorker arr[], int N) {

  int most = 0;
  for (int i = 0; i < N; i++) {
    if (arr[most].getPay() < arr[i].getPay()) {
      most = i;
    }
  }

  return most;
  
}