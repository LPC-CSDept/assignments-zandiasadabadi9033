#ifndef NUMBERS_HPP
#define NUMBERS_HPP
#include <iostream>
#include <vector>
#include <ctime>

using namespace std;

class Numbers {

private:
  int ID;
  vector<int> nums;
  static int NumofObjects;
public:
  Numbers() {

    ID = 0;
    NumofObjects++;

  }

  Numbers(int i, int n) {

    ID = i;
    for (int j = 0; j < n; j++) {
      nums.push_back(rand() % 100);
    }
    NumofObjects++;

  }

  int getID() {

    return ID;

  }

  static int getNumObjects() {

    return NumofObjects;

  }

  friend void printNumbers(Numbers n);
  
  int operator>(Numbers &n) {

    int n1 = 0, n2 = 0;

    for (int i = 0; i < nums.size(); i++) {
      n1 += nums[i];
    }
    for (int j = 0; j < n.nums.size(); j++) {
      n2 += n.nums[j];
    }

    return n1 > n2;

  }

};

int Numbers::NumofObjects = 0;

void printNumbers(Numbers n) {
  
  for (int i = 0; i < n.nums.size(); i++) {
    cout << n.nums[i] << " ";
  }
  
  cout << endl;
  
}


#endif