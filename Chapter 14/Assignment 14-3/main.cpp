#include <iostream>
#include "Square.hpp"

using namespace std;

int main() {
  
  Square square;
  Rect rectangle;
  double W;

  cout << "Please enter the width of your square: ";
  cin >> W;
  square.setWidth(W);

  cout << "The area of your square is: " << square.getArea() << endl << endl;

  cout << "Now turning your square into a rectangle..." << endl << endl;
  rectangle = rectangle.makeRectanglewithSquare(square);
  
  cout << "The height of your rectangle is: " << rectangle.getHeight() << endl;
  cout << "The width of your rectangle is: " << rectangle.getWidth() << endl;

  cout << "The area of the rectangle is: " << rectangle.getArea() << endl;
  
  return 0;

}