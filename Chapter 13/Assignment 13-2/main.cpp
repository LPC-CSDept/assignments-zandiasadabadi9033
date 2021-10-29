#include <iostream>
#include "Numbers.h"
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
  
  Numbers number(5);
  
  number.setElement();
  number.setElement(5, 1);
  number.printNumbers(0);
  
  cout << "Size: " << number.getSize() << endl;
  cout << "2nd index is: " << number.getElement(1) << endl;
  cout << "Sum: " << number.getSum() << endl;
  cout << "Average: " << number.getAvg() << endl << endl;
  
  number.bubbleSort(0);
  number.printNumbers(0);
  cout << "2nd index is: " << number.getElement(1) << endl;
  cout << endl;
  
  number.bubbleSort(1);
  number.printNumbers(0);
  cout << "2nd index is: " << number.getElement(1) << endl;
  cout << endl;
  
  number.clear();

  return 0;
  
}