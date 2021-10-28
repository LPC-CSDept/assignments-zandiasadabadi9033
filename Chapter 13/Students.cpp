#include<iostream>
#include "Students.h"

using namespace std; 

int Student::getID() const {

  return ID; 

}

string Student::getName() const {
  
  return name;

}

double Student::getScores(int num) const {

  return score[num];

}

double Student::getSum() const {
  
  return (score[0] + score[1] + score[2]);

}

double Student::getAvg() const {
  
  return (score[0] + score[1] + score[2]) / 3;

}

void Student::setID (int num) {
  
  ID = num;

}

void Student::setName (string str) {

	name = str;

}

void Student::setScores (int pos, int num) {
	
  score[pos] = num; 
  
}