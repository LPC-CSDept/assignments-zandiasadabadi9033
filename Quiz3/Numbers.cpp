#include <iostream>
#include "Numbers.hpp"
#include <vector>

using namespace std;

Numbers::Numbers() {

  ID = -1;
  numbers = 0;

}

Numbers::Numbers(int id, int N) {

  ID = id;
  for (int i = 0; i < N; i++) {
    numbers.push_back(rand() % 99);
  }

}

int Numbers::getID() const {

  return ID;

}

int Numbers::getSize() const {

  return numbers.size();

}

int Numbers::getElm(int num) const {

  return numbers[num];

}

int Numbers::getMax() const {

  int MAX = numbers[0];
  for (int i = 0; i < numbers.size(); i++) {
    if (MAX < numbers[i]) {
      MAX = numbers[i];
    }
  }

  return MAX;

}

int Numbers::getMin() const {

  int MIN = numbers[0];
  for (int i = 0; i < numbers.size(); i++) {
    if (MIN > numbers[i]) {
      MIN = numbers[i];
    }
  }

  return MIN;

}

int Numbers::getSum() const {

  int sum = 0;
  for (int i = 0; i < numbers.size(); i++) {
    sum = numbers[i];
    sum += sum;
  }

  return sum;

}

void Numbers::deleteElm(int num) {

  vector<int>::iterator it;
  for (it = numbers.begin(); it < numbers.end(); it++) {
    if (*it == num) {
      numbers.erase(it);
    }
  }

}

void Numbers::addElm(int num) {

  numbers.push_back(num);

}

void Numbers::printAll() const {

  cout << ID << " ";
  for (int i = 0; i < numbers.size(); i++) {
    cout << numbers[i] << " ";
  }

}
