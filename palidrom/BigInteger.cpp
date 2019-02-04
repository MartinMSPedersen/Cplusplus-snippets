#include <iostream>
#include <string>
#include "BigInteger.h"



BigInteger::BigInteger()
{
  int i;
  
  for (i=0; i<BIntMax; i++) digits[i]=0;
  size=0;
}

BigInteger::BigInteger(signed int value)
{
  int i;
        
  for (i=0; i<BIntMax; i++) digits[i]=0;
        
  i=0;
  while (value!=0) {
    digits[i]=value%10;
    i++;
    value=value/10;
  }
  size=i;
}

std::ostream& operator<< (std::ostream& o, const BigInteger& BInt)
{
  int i;
  std::string result;
  
  if (BInt.size==0) return o << "0";
  for (i=BInt.size-1; i>=0; i--)
    result+=(char)(BInt.digits[i]+'0');
  
  return o << result;
}

BigInteger BigInteger::operator+ (const BigInteger &rhs)
{
  int i;
  int reminder;
  
  reminder=0;
  for (i=0; i<BIntMax; i++) {
    digits[i]+=rhs.digits[i]+reminder;
    if (digits[i]>9) {
      digits[i]-=10;
      reminder=1;
    } else {
      reminder=0;
    }
  }
  if (reminder==1) {
    throw BigIntegerOverflowException();
  }
  computeSize();
  return *this;
} 

bool BigInteger::isPalindrom() 
{
  int i,j;
  
  if (size==0) return true;
  j=size-1;
  for (i=0; i<size/2; i++) {
    if (digits[i]!=digits[j]) return false;
    j--;
  }
  
  return true;
}

BigInteger BigInteger::reverse() 
{
  int i,j;
  BigInteger result;
  
  j=size-1;
  for (i=0; i<size; i++) {
    result.digits[j]=digits[i];
    j--;
  }
  
  result.size=size;
  return result;
}

void BigInteger::computeSize() 
{
  int i;
  
  i=BIntMax;
  do {
    i--;
  }
  while ((i>0) && (digits[i]==0));
  size=i+1;
}
                                        

BigInteger::~BigInteger()
{
  // no action
}


