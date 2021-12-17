#include <iostream>
#include "ProductWorker.h"

Employee::Employee() {
  
  name = "";
  number = 0;
  hireDate = "";
  
}

Employee::Employee(string cname, int date, string num) {
  
  name = cname;
  number = date;
  hireDate = num;
  
}

void Employee::setName(string cname) {
  
  name = cname;
  
}

string Employee::getName() {
  
  return name;
  
}

void Employee::setHireDate(string date) {
  
  hireDate = date;
  
}

string Employee::getHireDate() {
  
  return hireDate;
  
}

void Employee::setNumber(int num) {
  
  number = num;
  
}

int Employee::getNumber() {
  
  return number;
  
}

ProductWorker::ProductWorker() : Employee() {

  shift = 0;
  pay = 0;
  
}

ProductWorker::ProductWorker(string cname, int num, string date, int SHIFT, double PAY): Employee(cname, num, date) {
  
  shift = SHIFT;
  pay = PAY;
  
}

void ProductWorker::setShift(int SHIFT) {
  
  shift = SHIFT;
  
}

int ProductWorker::getShift() {
  
  return shift;
  
}

void ProductWorker::setPay(double PAY) {
  
  pay = PAY;
  
}

double ProductWorker::getPay() {
  
  return pay;
  
}

void ProductWorker::setWorker(string cname, int num, string date, int SHIFT, double PAY) {
  
  shift = SHIFT;
  pay = PAY;
  setName(cname);
  setHireDate(date);
  setNumber(num);
  
}

void ProductWorker::printProductWorker() {
  
  cout << getName() << "\t" << getNumber() << "\t" << getHireDate() << "\t" << shift << "\t" << pay << endl;
  
}

/*
I did not need the operator < for this assignment. I even almost forgot about 
it until I rechecked the document and saw that it was a requirement.

I did not want to lose points, so I implemented it here. However, the program runs perfectly fine without the use of this function.
*/

bool ProductWorker::operator <(ProductWorker PAY) {

  int p1 = pay;
  int p2 = PAY.pay;

  if (p1 > p2) {
    return false;
  }
  else {
    return true;
  }
 
}