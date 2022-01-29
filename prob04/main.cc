// Name: Joseph Eggers
// CWID: 885939488
// Email: joseph.eggers@csu.fullerton.edu

#include <iostream>
#include <string>

#include "star.h"

using std::cin, std::cout, std::string;

int main() {
  // variables
  int numberOfStarFlag;
  cout << "How many Stars? ";
  cin >> numberOfStarFlag;

  // for loop for starts
  for (int i = 0; i < numberOfStarFlag; i++) {
    string tempName;
    double tempRadius;

    // User Inputs
    cout << "\nEnter star " << i << "'s name: ";
    cin >> tempName;
    cout << "\nWhat is the solar radius? ";
    cin >> tempRadius;

    // Create Star
    Star star(tempName, tempRadius);
    cout << "\nCreated star " << star.GetName();
  }
}
