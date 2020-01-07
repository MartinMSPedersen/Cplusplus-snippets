 # The assignment
 * Create a C ++ class where all fields are private, based on the code shown and the comments on its operation (realization use only integer actions).  
  * At least one method must be realized outside the class heads.  
```
  powergenerator p(2,3); // base = 2, exponent = 3
  p.print(); // prints 2^3 = 8
  cout << p.next() << endl; // moves to next and prints 16
  cout << p.next() << endl; // prints 32
  cout << p.next() << endl; // prints 64
  p.print(); // prints 2^6 = 64
  p.reset(1000); // set the biggest power <= 1000 (?)
  p.print(); // print 2^9 = 512
  cout << p.prev() << endl; // moves to prev. if poss. prints 256
```

# Output
```
8
16
32
64
64
512
256
```
