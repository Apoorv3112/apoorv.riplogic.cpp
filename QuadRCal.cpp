#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;

int main ()
{
  double a,b,c,d,e,f;
  cout<<"QuadRCalv0.2 by Apoorv" << endl;
  cout<<"___________________________________________________" << endl;
  cout<<"enter the values of a, b & c" << endl;
  cin>>a;
  cin>>b;
  cin>>c;
  cout<<"your equation is :"<<a<<"x^2+"<<b<<"x+"<<c<<"=0"<< endl;
  d=sqrt(b*b-4*a*c);
  if (d==0)
  {
    cout<<"the roots of this equation are equal" << endl;
    cout<<"D="<<d<< endl;
  }
  else if (d>0)
  {
    cout<<"this equation has real and distinct roots" << endl;
    cout<<"D="<<d<< endl;
  }
  else if (d<0)
  {
    cout<<"this equation has no real roots" << endl;
    cout<<"D=null"<< endl;
  }
  e=-(-b+d)/2*a;
  f=-(-b-d)/2*a;
  cout<<"the roots are x="<<e<<"x="<<f << endl;
  cout<<"___________________________________________________";
  getch();
  return 0;
}
