/* 
   Date: 2th of December 2019
   version 1.0
*/

#include <iostream>
#include <cstdlib>
#include "powergenerator.h"

int main() {
  powergenerator p(2,3);

  p.print();
  cout << endl;

  cout << p.next() << endl;
  cout << p.next() << endl;
  cout << p.next() << endl;

  p.print();
  cout << endl;

  p.reset(1000);
  p.print();
  cout << endl;

  cout << p.prev() << endl;


  return EXIT_SUCCESS;
}

