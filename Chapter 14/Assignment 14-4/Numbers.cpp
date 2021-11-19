#include <iostream>
#include "Numbers.hpp"
#include <ctime>

using namespace std;

Numbers::Numbers() {
  
  size = 0;
  numbers = nullptr;
  
}

Numbers::Numbers(int s) {
  
  size = s;
  numbers = new int[size];
  for (int i = 0; i < size; i++) {
    numbers[i] = rand() % 100 - 1;
  }
  
}

Numbers::Numbers(const Numbers &next) {
  
  size = next.size;
  numbers = new int[size];
  for (int i = 0; i < size; i++) {
    numbers[i] = next.numbers[i];
  }
  
} 

Numbers::~Numbers() {
  
  delete[] numbers;
  
}

int Numbers::getMax() const {
  
  int MAX = numbers[0];
  
  for (int i = 0; i < size; i++) {
    if (numbers[i] > MAX) {
      MAX = numbers[i];
    }
  }
  
  return MAX;
  
}

void printNumbers(Numbers n) {
  
  for (int i = 0; i < n.size; i++) {
    cout << n.numbers[i] << " ";
  }

  cout << endl;
  
}
