#include "fraction.h"
#include <iostream>

int main()
{
  try {
    int a;
    Fraction b;
    Fraction c;

    int num,den; // help variables
    
    std::cout << "Enter a value for A: ";
    std::cin >> a;

    std::cout << "Enter a value for B's numerator: ";
    std::cin >> num;

    std::cout << "Enter a value for B's denominator: ";
    std::cin >> den;
    b=Fraction(num,den);

    c=(Fraction(1)+(Fraction(2,3))*a)/(Fraction(a)-(Fraction(2,3))*b);
    
    std::cout << "C = " << c << "\n";
  }
  
  catch (Fraction::IllegalDenominator) {
    std::cout << "ERROR: A zero denominator was detected\n";
  }
    
  return EXIT_SUCCESS;
}
