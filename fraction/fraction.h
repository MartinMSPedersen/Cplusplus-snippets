#ifndef __FRACTION_H__
#define __FRACTION_H__

#include <iostream>

using namespace std;

class Fraction {
 public:
  
  Fraction();                               // constructor.
  Fraction(int numerator);                  // constructor
  Fraction(int numerator, int denominator); // constructor
  ~Fraction();                              // destructor

  // overloaded operators
  Fraction operator+ (const Fraction &);
  Fraction operator+ (const int &);
  Fraction operator- (const Fraction &);
  Fraction operator- (const int &);
  Fraction operator/ (const Fraction &);
  Fraction operator/ (const int &);
  Fraction operator* (const Fraction &);
  Fraction operator* (const int &);

  // friend function
  friend ostream& operator<< (ostream& o, const Fraction& frac);
  
  // define the exception class
  class IllegalDenominator{};

  // public instance-methods
  int getNumerator();
  int getDenominator();
  

 private:
  int numerator;
  int denominator;
  void simplify();
};

#endif
