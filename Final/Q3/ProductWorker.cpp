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

string Employee::getName() {
  
  return name;
  
}

string Employee::getHireDate() {
  
  return hireDate;
  
}

int Employee::getNumber() {
  
  return number;
  
}

void Employee::setName(string cname) {
  
  name = cname;
  
}

void Employee::setHireDate(string date) {
  
  hireDate = date;
  
}

void Employee::setNumber(int num) {
  
  number = num;
  
}

ProductWorker::ProductWorker(string cname, int num, string date, int SHIFT, double PAY): Employee(cname, num, date) {
  
  shift = SHIFT;
  pay = PAY;
  
}

int ProductWorker::getShift() {
  
  return shift;
  
}

double ProductWorker::getPay() {
  
  return pay;
  
}

void ProductWorker::setShift(int SHIFT) {
  
  shift = SHIFT;
  
}

void ProductWorker::setPay(double PAY) {
  
  pay = PAY;
  
}

void ProductWorker::setWorker(string cname, int num, string date, int SHIFT, double PAY) {
  
  shift = SHIFT;
  pay = PAY;
  setName(cname);
  setHireDate(date);
  setNumber(num);
  
}

void ProductWorker::printProductWorker() {
  
  cout << getName() << " " << getHireDate() << " " << getNumber() << " " << shift << " " << pay << endl;
  
}