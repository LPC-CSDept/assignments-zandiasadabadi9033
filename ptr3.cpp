#include <iostream>

using namespace std;

int main() {

int num;

int *ptr = &num;
cout << ptr << endl;
cout << *ptr << endl;

ptr = &num;
cout << *ptr << endl;

cout << ptr << endl;


  return 0;
}