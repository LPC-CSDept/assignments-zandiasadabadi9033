#include <iostream>
#include <fstream>
#include "ProductWorker.h"

using namespace std;

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

  return 0;
  
}