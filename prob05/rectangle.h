// Name: Joseph Eggers
// CWID: 885939488
// Email: joseph.eggers@csu.fullerton.edu

#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
 private:
  int length_;
  int width_;
  int area_;

 public:
  // Constructor
  Rectangle();
  Rectangle(int length, int width);

  // Getters
  int area() const { return area_; };
  int Area() const { return area_; };
  int length() const { return length_; };
  int Length() const { return length_; };
  int width() const { return width_; };
  int Width() const { return width_; };

  // Setter
  void SetArea();
  void SetLength(int length);
  void SetWidth(int width);
};

Rectangle LongestRectangle(const Rectangle& x, const Rectangle& y);

#endif  // RECTANGLE_H
