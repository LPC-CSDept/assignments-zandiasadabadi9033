#ifndef NUMBERS_HPP
#define NUMBERS_HPP

class Numbers {

private:
  int size;
  int *numbers;
public:
  Numbers();
  Numbers(int s);
  Numbers(const Numbers &);
  ~Numbers();
  int getMax() const;
  friend void printNumbers(Numbers n);
  
};

#endif