#include <iostream>
#include "Numbers.hpp"
#include <ctime>

using namespace std;

int main() {
  
  const int SIZE = 10;
  srand(time(0));
  
  Numbers n1(SIZE);
  cout << "The values in 'n1' are: ";
  printNumbers(n1);
  
  Numbers n2(n1);
  cout << "The values in 'n2' are: ";
  printNumbers(n2);
  
  cout << endl;
  cout << "Maximum value in 'n1' is: " << n1.getMax() << endl;
  cout << "Maximum value in 'n2' is: " << n2.getMax() << endl;
  
  return 0;
  
}