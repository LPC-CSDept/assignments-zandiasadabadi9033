#include "Numbers.hpp"

using namespace std;

int main() {
  
  Numbers n1(10);
  Numbers n2;
  Numbers n3;
  
  n2 = n1;
  cout << "Numbers in n1 are: " << endl;
  printNumbers(n1);
  
  cout << "Numbers in n2 are: " << endl;
  printNumbers(n2);
  
  cout << endl << "Checking to see if 'n1 > n2' =  ";
  if (n1 > n2) { 
    cout << "True" << endl;
  }
  else {
    cout << "False" << endl;
  }
  
  n3 = n1 + n2; 
  cout << endl << "Numbers in n3 are: " << endl;
  printNumbers(n3);
  
  return 0;
  
}