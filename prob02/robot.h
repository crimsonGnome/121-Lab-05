// Name: Joseph Eggers
// CWID: 885939488
// Email: joseph.eggers@csu.fullerton.edu

#ifndef ROBOT_H
#define ROBOT_H

#include <iostream>

#include "cpputils/graphics/image.h"

using graphics::Image, std::string;

class Robot {
 private:
  // Varirables
  int x;
  int y;
  string file1;
  string file2;
  bool imageFlip;
  bool coordsUpdatedFlag;
  string savedImage1;
  string savedImage2;

  // Setter
  void AlternateImage() { this->imageFlip = !imageFlip; };
  void DrawHelperFunc(Image& image, const string& file);

 public:
  // Constructor
  Robot(string filename1, string filename2);

  // Getters
  int GetY() { return y; };
  int GetX() { return x; };

  // Setters
  void SetPosition(int i, int j);

  // Methods Attached
  void Draw(Image& image);
};

#endif  // ROBOT_H
