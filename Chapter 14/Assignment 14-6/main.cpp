#include "Numbers.hpp"

using namespace std;

int main() {
  
  Numbers n1(5);
  cout << "The numbers are: " << n1 << endl;
  cout << "Please insert new numbers: " << endl;
  cin >> n1;
  cout << "The new numbers are: " << n1;
  
  return 0;
  
}