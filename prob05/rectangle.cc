// Name: Joseph Eggers
// CWID: 885939488
// Email: joseph.eggers@csu.fullerton.edu

#include "rectangle.h"
Rectangle::Rectangle() {
  this->length_ = 0;
  this->width_ = 0;
  this->SetArea();
}
Rectangle::Rectangle(int length, int width) {
  this->length_ = length;
  this->width_ = width;
  this->SetArea();
}

void Rectangle::SetArea() {
  int tempArea = length_ * width_;
  this->area_ = tempArea;
}

void Rectangle::SetLength(int length) {
  this->length_ = length;
  this->SetArea();
}

void Rectangle::SetWidth(int width) {
  this->width_ = width;
  this->SetArea();
}

Rectangle LongestRectangle(const Rectangle& x, const Rectangle& y) {
  int LongestLength;
  int LongestWidth;
  int tempx = x.length();
  int tempy = y.length();
  // Longest Length
  if (tempx > tempy) {
    LongestLength = tempx;
    LongestWidth = x.width();
  } else {
    LongestLength = tempy;
    LongestWidth = y.width();
  }

  Rectangle longest(LongestLength, LongestWidth);
  return longest;
}
