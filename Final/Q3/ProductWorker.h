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