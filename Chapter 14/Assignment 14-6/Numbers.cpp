#include "Numbers.hpp"
#include <ctime>

Numbers::Numbers() {
  
  size = 0;
  numbers = nullptr;
  
}

Numbers::Numbers(int N) {
  
  size = N;
  numbers = new int [N];
  srand(time(0));
  for (int i = 0; i < N; i++) {
    int num = rand() % 100;
    numbers[i] = num;
  }
  
}

Numbers::Numbers(const Numbers &obj) {
  
  size = obj.size;
  numbers = new int[size];
  for (int i = 0; i < size; i++) {
    numbers[i] = obj.numbers[i];
  }
  
}

Numbers::~Numbers() {
  
  delete[] numbers;
  
}

int Numbers::operator>(const Numbers &obj) {
  
  int n1 = 0, n2 = 0;
  
  for (int i = 0; i < size; i++) {
    n1 += numbers[i]; 
  }
  
  for (int i = 0; i < obj.size; i++) {
    n2 += numbers[i]; 
  }
  
  if (n1 > n2) {
    return 1;
  }
  else {
    return 0;
  }

}

Numbers Numbers::operator=(const Numbers &obj) {
  
  size = obj.size;
  numbers = new int[size]; 
  for (int i = 0; i < size; i++) {
    numbers[i] = obj.numbers[i];
  }
  
  return *this;
  
}

Numbers Numbers::operator+(const Numbers &obj) {
  
  Numbers n1;
  n1.size = size;
  n1.numbers = new int[n1.size];
  
  for (int i = 0; i < size; i++) {
    n1.numbers[i] = this->numbers[i] + obj.numbers[i];
  }
  
  return n1;
  
}

void printNumbers(Numbers obj) {
  
  for (int i = 0; i < obj.size; i++) {
    cout << obj.numbers[i] << endl;
  }

  cout << endl;
  
}

ostream &operator<<(ostream & os, const Numbers &obj) {
  
  for (int i = 0; i < obj.size; i++) {
    os << obj.numbers[i] << " ";
  }
  
  return os;
  
}

istream &operator>>(istream & is, const Numbers &obj) {
  
  for (int i = 0; i < obj.size; i++) {
    is >> obj.numbers[i];
  }
  
  return is;
  
}