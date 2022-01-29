// Name: Joseph Eggers
// CWID: 885939488
// Email: joseph.eggers@csu.fullerton.edu

#include <string>

using std::string;

#ifndef CUP_H
#define CUP_H

class Cup {
 private:
  // memeber variables
  string drink_type_;
  double fluid_oz_;

 public:
  // Constructors
  Cup();
  Cup(string drinkType, double fluids);

  // Getters
  double fluid_oz() const { return fluid_oz_; };
  string drink_type() const { return drink_type_; };
  double GetFluidOz() const { return fluid_oz_; };
  string GetDrinkType() const { return drink_type_; };

  // Setters
  void Drink(double drink);
  void Refill(double refill);
  void NewDrink(string drinkType, double fluids);
  void Empty();
};

#endif  // CUP_H
