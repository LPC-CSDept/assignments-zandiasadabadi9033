#ifndef SQUARE_HPP
#define SQUARE_HPP

using namespace std;

class Square {

private:
  double width;
public:
  Square();
  void setWidth(double);
  double getWidth() const;
  double getArea() const;
  friend class Rect;

};

class Rect {

private:
  double width;
  double height;
public:
  Rect();
  void setWidth(double);
  void setHeight(double);
  double getWidth() const;
  double getHeight() const;
  double getArea() const;
  Rect makeRectanglewithSquare(Square s);

};

#endif