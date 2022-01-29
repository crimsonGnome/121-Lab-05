// Name: Joseph Eggers
// CWID: 885939488
// Email: joseph.eggers@csu.fullerton.edu
#include <iostream>

#include "rectangle.h"

int main() {
  unsigned int length1, width1, length2, width2;
  std::cout << "Rectangle 1\nPlease enter the length: ";
  std::cin >> length1;
  std::cout << "Please enter the width: ";
  std::cin >> width1;

  // Create a Rectangle object named rect1. Assign it's length and width
  // according to the user's input
  Rectangle rect1(length1, width1);

  std::cout << "Rectangle 1 created with length ";
  // Display rect1's length (don't add a next line character)
  std::cout << rect1.Length();
  std::cout << " and width ";
  // Display rect1's width (don't add a next line character)
  std::cout << rect1.Width();
  std::cout << "\nThe area of Rectangle 1 is: ";
  // Display rect1's area (don't add a next line character)
  std::cout << rect1.Area();
  std::cout << "\n\nRectangle 2\n";
  std::cout << "Please enter the length: ";
  std::cin >> length2;
  std::cout << "Please enter the width: ";
  std::cin >> width2;

  // Create a rectangle object named rect2. Assign it's length and width
  // according to the user's input
  Rectangle rect2(length2, width2);
  std::cout << "Rectangle 2 created with length ";
  // Display rect2's length (don't add a next line character)
  std::cout << rect2.Length();
  std::cout << " and width ";
  // Display rect2's width (don't add a next line character)
  std::cout << rect2.Width();
  std::cout << "\nThe area of Rectangle 2 is: ";
  // Display rect1's area (don't add a next line character)
  std::cout << rect2.Area();
  std::cout << "\n\n";
  std::cout << rect1.Area();
  // Create a rectangle object called longest.

  // Call the LongestRectangle function and assign the longest Rectangle
  // object it returns into the variable, longest.
  Rectangle longest = LongestRectangle(rect1, rect2);
  std::cout << "The longest rectangle has a length of " << longest.length()
            << ", a width of " << longest.width() << ", and an area of "
            << longest.area() << ".\n";
  return 0;
}
