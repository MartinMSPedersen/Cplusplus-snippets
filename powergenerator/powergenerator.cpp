/* 
Date: 2th of December 2019
version 1.0
*/

#include <cmath>
#include "powergenerator.h"

powergenerator::powergenerator(const unsigned int base, const unsigned int exponent) 
{
  this->base=base;
  this->start_exponent=exponent;
  this->current_exponent=exponent; 
}

ostream& operator<< (ostream& o, powergenerator& pg)
{
  return o << pow(pg.base, pg.current_exponent);
}   

unsigned int powergenerator::next() {
  current_exponent++;
  return (int)pow(base,current_exponent);
}

unsigned int powergenerator::prev() {
  if (current_exponent > start_exponent) current_exponent--;
  return (int)pow(base,current_exponent);
}

void powergenerator::reset(unsigned int value) {
  current_exponent=0;
  while (next() <= value) ;
  current_exponent--;
}

void powergenerator::print() const {
  cout << pow(base, current_exponent);
}
