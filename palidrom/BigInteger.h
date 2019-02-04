#ifndef __BIGINTEGER_H__
#define __BIGINTEGER_H__

#include <iostream>
#include <string>

class BigInteger {
 public:
  
  BigInteger();                             // constructor
  BigInteger(signed int value);             // constructor
  ~BigInteger();                            // destructor

  // overloaded operators
  BigInteger operator+ (const BigInteger &);

  // friend function
  friend std::ostream& operator<< (std::ostream& o, const BigInteger& BInt);
  
  // define the exception class
  class BigIntegerOverflowException{};

  // public instance-methods
  bool isPalindrom();
  BigInteger reverse();
  
  // public static-consts
  static const char BIntMax=50;
  
 private:
  void computeSize();
  char digits[BIntMax];
  int size;
};

#endif

