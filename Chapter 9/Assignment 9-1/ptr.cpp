#include <iostream>

using namespace std;

int main()
{
  
  double 	num1, num2, num3, num4, num5;
  num1 = 10.0;
  num2 = 20.0;
  num3 = 30.0;
  num4 = 40.0;
  num5 = 50.0;
  
  double * ptr;
  ptr = &num1;
  
  cout << *ptr << "\t"; // print value? 10
  cout << *(ptr + 1) << "\t"; // print value? 20
  cout << *(ptr + 2) << "\t"; // print value? 30
  cout << *(ptr + 3) << "\t"; // print value? 40
  cout << *(ptr + 4) << "\t"; // print value? 50 

  return 0;
}