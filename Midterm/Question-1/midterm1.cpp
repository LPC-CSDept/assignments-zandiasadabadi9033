#include <iostream>
#include "Numbers.hpp"

using namespace std;

int main() {

  Numbers n1;
  Numbers n2;

  cout << "Content of 'n1' is: ";
  printNumbers(n1);

  cout << "Content of 'n2' is: ";
  printNumbers(n2);

  if (n1 > n2) {
    cout << "The content of 'n1' are greater than the content of 'n2'";
  }
  else {
    cout << "The content of 'n1' are NOT greater than the content of 'n2'";
  }

  return 0;

}