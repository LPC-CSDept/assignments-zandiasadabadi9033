#ifndef PRODUCTWORKER_H
#define PRODUCTWORKER_H
#include <iostream>

using namespace std;

class Employee {

private:
  string name;
  int number;
  string hireDate;
public:
  Employee();
  Employee(string, int, string);
  void setName(string);
  string getName();
  void setNumber(int);
  int getNumber();
  void setHireDate(string);
  string getHireDate();

};

class ProductWorker : public Employee {

private:
  int shift;
  double pay;
public:
  ProductWorker();
  ProductWorker(string, int, string, int, double);
  void setShift(int);
  int getShift();
  void setPay(double);
  double getPay();
  void setWorker(string, int, string, int, double);
  void printProductWorker();
  friend int mostPaid(ProductWorker [], int);
  
};

#endif