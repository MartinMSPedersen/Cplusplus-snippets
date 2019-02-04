#include "fraction.h"
#include <iostream>

Fraction::Fraction()
{
  numerator=1;
  denominator=1;
}

Fraction::Fraction(int numerator)
{
  this->numerator=numerator;
  denominator=1;
}

Fraction::Fraction(int numerator, int denominator)
{
  if (denominator==0) throw IllegalDenominator();
  this->numerator=numerator;
  this->denominator=denominator;
  this->simplify();
}

ostream& operator<< (ostream& o, const Fraction& frac)
{
  if (frac.denominator==1) {
    return o << frac.numerator;
  }
  return o << frac.numerator << "/" << frac.denominator;

}

Fraction Fraction::operator+ (const Fraction &rhs)
{
  /*
      a   c   a*d+b*c
      - + - = -------
      b   d     b*d
  */

  numerator=numerator*rhs.denominator+denominator*rhs.numerator;
  denominator=denominator*rhs.denominator;
  simplify();
  return *this;
} 

Fraction Fraction::operator+ (const int &rhs)
{
  /*
      a      a+b*c
      - + c = -----
      b        b
  */
  numerator=numerator+rhs*denominator;
  simplify();
  return *this;
}

Fraction Fraction::operator-(const Fraction &rhs)
{
  /*
      a   c   a*d-b*c
      - - - = -------
      b   d     b*d
  */
  numerator=numerator*rhs.denominator-denominator*rhs.numerator;
  denominator=denominator*rhs.denominator;
  simplify();
  return *this;
}

Fraction Fraction::operator-(const int &rhs)
{
  /*
      a      a-b*c
      - - c = -----
      b        b
  */
  numerator=numerator-rhs*denominator;
  simplify();
  return *this;
} 

Fraction Fraction::operator*(const Fraction &rhs)
{
  /*
      a   c   a*c
      - * - = ---
      b   d   b*d
  */
  numerator=numerator*rhs.numerator;
  denominator=denominator*rhs.denominator;
  simplify();
  return *this;
} 


Fraction Fraction::operator*(const int &rhs)
{
  /*
      a       a*c
      - * c = ---
      b        b
  */
  numerator=numerator*rhs;
  simplify();
  return *this;
} 

Fraction Fraction::operator/(const Fraction &rhs)
{
  /*
      a   c   a*d
      - / - = ---
      b   d   b*c
  */
  numerator=numerator*rhs.denominator;
  denominator=denominator*rhs.numerator;
  simplify();
  return *this;
} 

Fraction Fraction::operator/(const int &rhs)
{
  /*
      a         a
      - / c  = ---
      b        b*c
  */
  denominator=denominator*rhs;
  simplify();
  return *this;
} 

int Fraction::getNumerator()
{
  return numerator;     
}

int Fraction::getDenominator()
{
  return denominator;
}

void Fraction::simplify()
{
  if (denominator==0) {
    return; // should throw an exception
  }

  if (numerator==0) {
    denominator=1;
    return;
  }

  /* Find the Greatest-Common-Divider using Eclid's method  
     and divide the numerator and denominator with this number.
  */
  
  int num=(numerator>0)?numerator:-numerator;
  int den=(denominator>0)?denominator:-denominator;
  
  while (num!=den) {
    if (num>den) 
      num=num-den;
    else
      den=den-num;
  }
  
  // num and den now holds Greatest-Common-Divider
  numerator=numerator/num;
  denominator=denominator/num;
}

Fraction::~Fraction()
{
  // no action
}

