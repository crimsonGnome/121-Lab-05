// Name: Joseph Eggers
// CWID: 885939488
// Email: joseph.eggers@csu.fullerton.edu

#include "cup.h"

#include <iostream>
#include <string>

using std::string;
// ------------------- Start of Constuctors -----------
Cup::Cup() {
  // Pass defulat variables into new Drink
  this->NewDrink("Water", 16.0);
}

Cup::Cup(string drinkType, double fluids) { this->NewDrink(drinkType, fluids); }
// ------------------- End of Constuctors -------------
// ------------------- Start of Methods ---------------
// New Drink
void Cup::NewDrink(string drinkType, double fluids) {
  this->drink_type_ = drinkType;
  this->fluid_oz_ = fluids;
}

// Drink
void Cup::Drink(double fluids) {
  // Subtract the current from the fludis
  double temp = fluid_oz_ - fluids;
  // If greater then 0 set value
  if (temp > 0) {
    this->fluid_oz_ = temp;
  } else {
    this->fluid_oz_ = 0;
  }
}

// Refill Cup
void Cup::Refill(double refill) {
  // Bottomless - add current to refill
  double temp = fluid_oz_ + refill;
  this->fluid_oz_ = temp;
}

// Empty Cup
void Cup::Empty() { this->NewDrink("nothing", 0); }
