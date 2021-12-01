#ifndef NUMBERS_HPP
#define NUMBERS_HPP
#include <iostream>
#include <vector>
#include <ctime>

using namespace std;

class Numbers {

private:
  int ID;
  vector<int>nums;
  static int NumofObjects;
public:
  Numbers() {

    ID = 0;
    NumofObjects++;

  }

  Numbers(int i, int n) {

    ID = i;
    srand(time(0));
    for (int j = 0; j < n; j++) {
      nums.push_back(rand() % 100);
    }
    NumofObjects++;

  }

  int getID() {

    return ID;

  }

  static int getNumObjects();
  friend void printNumbers(Numbers n);
  int operator>(Numbers);

};