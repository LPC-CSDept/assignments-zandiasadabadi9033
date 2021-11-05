#ifndef NUMBERS_HPP
#define NUMBERS_HPP
#include <vector>

using namespace std;

class Numbers {

  private:
  int ID;
  vector<int> numbers;
  public:
  Numbers();
  Numbers(int ID, int N);
  int getID() const;
  int getSize() const;
  int getElm(int num) const;
  int getMax() const;
  int getMin() const;
  int getSum() const;
  void deleteElm(int num);
  void addElm(int num);
  void printAll() const;

};

#endif