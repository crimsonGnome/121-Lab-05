// Name: Joseph Eggers
// CWID: 885939488
// Email: joseph.eggers@csu.fullerton.edu

#include "button.h"
// cmath is used for GetScaledChannel.
#include <cmath>

#include "cpputils/graphics/image.h"

using graphics::Color;

// Don't forget to include button.h and cpputils/graphics/image.h.

// Use this to scale a color channel from the range (0, 255)
// to the range (0, 1).
double GetScaledChannel(int channel) {
  double scaled = channel / 255.;
  const double min = 0.03928;
  if (scaled <= min) {
    return scaled / 12.92;
  } else {
    return pow((scaled + .055) / 1.055, 2.4);
  }
}

// Implement the functions from button.h here.

Button::Button(Color i, Color j) {
  double contrastRatioCheck = 4.5;
  // Set Color
  this->textColor = i;
  this->background = j;

  // Get the luminance for text and backgrond;
  double l1 = Lumos(textColor);
  double l2 = Lumos(background);
  // Then set the ratio to the contrastRatio
  // brighter color should be on top
  if (l1 > l2) {
    this->contrastRatio = (l1 + .05) / (l2 + .05);
  } else {
    this->contrastRatio = (l2 + .05) / (l1 + .05);
  }

  // Finally set accesiblity
  if (contrastRatio >= contrastRatioCheck) {
    this->accessiblity = true;
  } else {
    this->accessiblity = false;
  }
}

double Button::Lumos(Color& color) {
  // set the accessibilty
  int red = color.Red();
  int green = color.Green();
  int blue = color.Blue();
  double redScaled = GetScaledChannel(red);
  double greenScaled = GetScaledChannel(green);
  double blueScaled = GetScaledChannel(blue);
  // Plug into formula
  double result = .2126 * redScaled + .7152 * greenScaled + .0722 * blueScaled;
  return result;
}

int ButtonWithMostContrast(vector<Button>& buttons) {
  int maxIndex = 0;
  int maxValue = buttons[0].GetContrastRatio();
  for (size_t i = 1; i < buttons.size(); i++) {
    if (buttons[i].GetContrastRatio() > maxValue) {
      maxIndex = i;
      maxValue = buttons[i].GetContrastRatio();
    }
  }
  return maxIndex;
}
