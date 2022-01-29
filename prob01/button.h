// Name: Joseph Eggers
// CWID: 885939488
// Email: joseph.eggers@csu.fullerton.edu

#ifndef BUTTON_H
#define BUTTON_H

#include <vector>

#include "button.h"
#include "cpputils/graphics/image.h"

using graphics::Color, std::vector;

class Button {
 private:
  // Private Variables
  Color textColor;
  Color background;
  double contrastRatio;
  bool accessiblity;
  // Internal function
  double Lumos(Color& color);

 public:
  // Constructor
  Button(Color i, Color j);

  // Getters
  Color GetTextColor() const { return textColor; };
  Color GetBackgroundColor() const { return background; };
  double GetContrastRatio() const { return contrastRatio; };
  bool IsAccessible() const { return accessiblity; };
};

int ButtonWithMostContrast(vector<Button>& buttons);

#endif  // BUTTON_H
