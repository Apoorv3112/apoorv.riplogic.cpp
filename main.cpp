#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;

int Quad()
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

 int Trig()
 {
     cout << "TrigCalv0.1 by Apoorv" << endl;
  cout <<"________________________________________"<< endl;
  double g, h, i, j, k, l, m;
  j=3.1415926;
  h=j/180;
  cout << "what trigonometric function do you want?"<<endl<<"1 for sin"<<endl<<"2 for cos"<<endl<<"3 for tan"<< endl
  <<"4 for cosec"<<endl<<"5 for sec"<<endl<<"6 for cot"<< endl;
  cout << "input:";
  cin>>k;
  if (k==1)
  {
    cout<< "you've chosen sine. now enter the desired angle:";
    cin>>g;
    i=sin(g*h);
    cout <<"in decimals=>"<<i << endl;
  }
  else if (k==2)
  {
    cout<<"you've chosen cosine. now enter the desired angle:";
    cin>>g;
    i=cos(g*h);
    cout <<"in decimals=>"<<i << endl;
  }
  else if (k==3)
  {
    cout<<"you've chosen tangent. now enter the desired angle:";
    cin>>g;
    i=sin(g*h);
    k=cos(g*h);
    l=i/k;
    cout <<"in decimals=>"<<l << endl;
  }
  else if (k==4)
  {
    cout<<"you've chosen cosecant. now enter the desired angle:";
    cin>>g;
    i=sin(g*h);
    k=1/i;
    cout <<"in decimals=>"<<k << endl;
  }
  else if (k==5)
  {
    cout<<"you've chosen secant. now enter the desired angle:";
    cin>>g;
    i=cos(g*h);
    k=1/i;
    cout <<"in decimals=>"<<k << endl;
  }
  else if (k==6)
  {
    cout<<"you've chosen cotangent. now enter the desired angle:";
    cin>>g;
    i=sin(g*h);
    k=cos(g*h);
    l=i/k;
    m=1/l;
    cout <<"in decimals=>"<<m << endl;
  }
 }
int Prime()
{
    int n;
  cout<<"PrimeFactorizorv0.1 by Apoorv"<< endl;
  cout<<"________________"<< endl;
  cout<<"enter the no:";
  cin>>n;
  cout<<"the prime factorization of "<<n <<" is:";
  for (int z=2; z<=n; z++)
  {
      while(n%z == 0)
      {
        n /= z;
        cout<<z <<"x";
      }
  }
  cout<<"1"<< endl;
  cout<<"________________"<< endl;
  getch();
  return 0;
}


int main()
{
  int x;
  cout<<"Choose your poison" << endl;
  cout<<"press 1 for quadratic equation calculator" << endl;
  cout<<"press 2 for trigonometry ratio calculator" << endl;
  cout<<"press 3 for Prime Factorizor" << endl;
  cin>>x;
  if (x==1)
  {
    Quad();
  }
  else if (x==2)
  {
     Trig();
  }
  else if (x==3)
  {
     Prime();

  }
}






