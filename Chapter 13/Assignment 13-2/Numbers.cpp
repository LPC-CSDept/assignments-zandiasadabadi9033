#include <iostream>
#include "Numbers.h"
#include <ctime>

using namespace std;

Numbers::Numbers() {
  
  SIZE = 10;
  head = new int[SIZE];

}

Numbers::Numbers(int num){
  
  SIZE = num;
  head = new int[SIZE];

}

int Numbers::getSize() const {
  
  return SIZE;

}

int Numbers::getElement(int num) const {
  
  return head[num];

}

double Numbers::getSum() const {
  
  double sum = 0;
  for(int i = 0; i < SIZE; i++){
    sum += head[i];
  }
  return sum;

}

double Numbers::getAvg() const{
  
  double avg = 0;
  for(int i = 0; i < SIZE; i++) {
    avg += head[i];
  }
  avg = avg / SIZE;
  return avg;

}

void Numbers::setElement() {
  
  srand(time(0));
  for(int i = 0; i < SIZE; i++) {
    head[i] = rand() % 100 + 1;
  }
  
}

void Numbers::setElement(int num, int pos){
  
  head[pos] = num;
  
}

void Numbers::bubbleSort (int target) {
  
  if (target == 0) {
    for(int i = 0; i < SIZE - 1; i++) {
      for (int j = 0; j < SIZE - i - 1; j++) {
        if (head[j] > head[j + 1]) {
          swap(head[j], head[j + 1]);
        }    
      }
    }
  }
  else {
    for(int i = 0; i < SIZE - 1; i++) {
      for (int j = 0; j < SIZE - i - 1; j++) {
        if (head[j] < head[j+1]) {
          swap(head[j], head[j+1]);
        }  
      }
    }
  }

 }
 
void Numbers::printNumbers (int num) {
  
  cout << "The numbers are:\n";
  
  if(num == 1) {
    if(head[0] > head[1]) {
      for(int i = 0; i < SIZE; i++) {
        cout << head[i] << " ";
      }
    }
    else {
      for(int i = SIZE - 1; i >= 0; i--) {
        cout << head[i] << " ";
      }
    }
  }
  else {
    for(int i = 0; i < SIZE; i++) {
      cout << head[i] << " ";
    }
  }

  cout << endl;

}

void Numbers::clear() {
  
  delete [] head;
  
}