/* 
Date: 2th of December 2019
version 1.0
*/

#ifndef POWERGENERATOR_H
#define POWERGENERATOR_H

#include <iostream>

using namespace std;

class powergenerator {
 public:
  powergenerator(const unsigned int base, const unsigned int exponent);  
  friend ostream& operator<< (ostream& o, powergenerator& pg);
  unsigned int next();
  unsigned int prev(); 
  void reset(unsigned int value);
  void print() const;
  
private:
  unsigned int base;
  unsigned int start_exponent;
  unsigned int current_exponent;
};

#endif

	
	
