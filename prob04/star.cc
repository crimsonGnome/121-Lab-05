// Name: Joseph Eggers
// CWID: 885939488
// Email: joseph.eggers@csu.fullerton.edu

#include "star.h"

#include <iomanip>
#include <iostream>
#include <string>

using std::cin, std::cout, std::fixed, std::setprecision, std::string;

Star::Star(string x, double y) {
  this->name = x;
  this->radius = y;
  cout << "\nThe star " << x << " was born.";
}

Star::~Star() {
  double ratio = radius * radius;
  cout << "\nThe star " << name << " has gone supernova. it was " << fixed
       << setprecision(2) << ratio << " times the volume of the sun.";
}
