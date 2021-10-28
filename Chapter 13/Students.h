#ifndef STUDENTS_H
#define STUDENTS_H
#include <string>

using namespace std;

class Student {

private:
  int ID;
  string name;
  double score[3];
public:
  int getID() const;
  void setID(int);
  string getName() const;
  void setName(string);
  double getScores(int) const;
  void setScores(int, int);
  double getSum() const;
  double getAvg() const;
  
};

#endif