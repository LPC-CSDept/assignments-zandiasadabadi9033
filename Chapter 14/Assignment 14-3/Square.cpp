#include <iostream>
#include "Square.hpp"

using namespace std;

Square::Square() {
  
  width = 0;
  
}

void Square::setWidth(double W) {
  
  width = W;
  
}

double Square::getWidth() const {
  
  return width;
  
}

double Square::getArea() const {

  return width * width;
  
}

Rect::Rect() {
  
  width = 0;
  height = 0;
  
}

void Rect::setWidth(double W) {
  
  width = W;
  
}

void Rect::setHeight(double H) {
  
  height = H;
  
}

double Rect::getWidth() const {
  
  return width;
  
}

double Rect::getHeight() const {
  
  return height;
  
}

double Rect::getArea() const {
  
  return width * height;
  
}

Rect Rect::makeRectanglewithSquare(Square s) {
  
  Rect r;
  r.setWidth(s.width);
  r.setHeight(s.width);
  
  return r;

}