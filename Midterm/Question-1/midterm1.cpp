#include <iostream>
#include "Numbers.hpp"

using namespace std;

int main() {

  srand(time(0));
  Numbers n1(100, 3);
  Numbers n2(100, 3);

  cout << "Content of 'n1' is: ";
  printNumbers(n1);

  cout << "Content of 'n2' is: ";
  printNumbers(n2);

  if (n1 > n2) {
    cout << "The content of 'n1' is greater than the content of 'n2'";
  }
  /*else {
    cout << "The content of 'n1' are NOT greater than the content of 'n2'";
  }*/
  else if (n2 > n1) {
    cout << "The content of 'n2' is greater than the content of 'n1'";
  }
  else {
    cout << "The content are the same...";
  }

  return 0;

}