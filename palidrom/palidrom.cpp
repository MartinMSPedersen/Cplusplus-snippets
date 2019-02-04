#include "BigInteger.h"
#include <iostream>

using namespace std;

int main()
{
  try {
    int a;
    int steps;
    BigInteger b;
    char cont;
    
    do {
      do {
        cout << "\n";
        cout << "Ievadiet skaitli: ";
        cin >> a;
      } while (a<0);
      b=BigInteger(a);
      
      steps=0;
      while (!b.isPalindrom()) {
        steps++;
        b=b+b.reverse();
      }
      
      cout << "Palindromu " << b << " var iegut ";
      cout << steps << " solos.\n\n";
      
      cout << "Vai turpinat? (J/N)\n";
      cin >> cont;
    } while ( (cont == 'j') || (cont == 'J'));
  }
  
  catch (BigInteger::BigIntegerOverflowException) {
    cout << "ERROR: apre'k'in'a'to skait'l'u summa pa'rsniedz 50 ciparus. \n";
  }
    
  return EXIT_SUCCESS;
}


