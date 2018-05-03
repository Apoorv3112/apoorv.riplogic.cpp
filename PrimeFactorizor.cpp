//  PrimeFactorizorv0.1 by Apoorv
#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;

int main()
{
  int a;
  cout<<"PrimeFactorizorv0.1 by Apoorv"<< endl;
  cout<<"________________"<< endl;
  cout<<"enter the no:";
  cin>>a;
  cout<<"the prime factorization of "<<a <<" is:";
  for (int i=2; i<=a; i++)
  {
      while(a%i == 0)
      {
        a /= i;
        cout<<i <<"x";
      }
  }
  cout<<"1"<< endl;
  cout<<"________________"<< endl;
  getch();
  return 0;
}
