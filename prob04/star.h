// Name: Joseph Eggers
// CWID: 885939488
// Email: joseph.eggers@csu.fullerton.edu

#ifndef STAR_H
#define STAR_H

#include <string>

using std::string;

class Star {
 private:
  // Private variables
  string name;
  double radius;

 public:
  // Constructor
  Star(string x, double y);
  ~Star();

  // Getters
  string GetName() const { return name; };
};

#endif  // STAR_H
