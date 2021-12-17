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
  
  cout << getName() << " " << getHireDate() << " " << getNumber() << " " << shift << " " << pay << endl;
  
}