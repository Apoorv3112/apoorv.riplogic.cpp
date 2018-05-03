// TrigCalv0.1 by Apoorv
#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main ()
{
  cout << "TrigCalv0.1 by Apoorv" << endl;
  cout <<"________________________________________"<< endl;
  double a, b, c, d, e, f, g;
  d=3.1415926;
  b=d/180;
  cout << "what trigonometric function do you want?"<<endl<<"1 for sin"<<endl<<"2 for cos"<<endl<<"3 for tan"<< endl
  <<"4 for cosec"<<endl<<"5 for sec"<<endl<<"6 for cot"<< endl;
  cout << "input:";
  cin>>e;
  if (e==1)
  {
    cout<< "you've chosen sine. now enter the desired angle:";
    cin>>a;
    c=sin(a*b);
    cout <<"in decimals=>"<<c << endl;
  }
  else if (e==2)
  {
    cout<<"you've chosen cosine. now enter the desired angle:";
    cin>>a;
    c=cos(a*b);
    cout <<"in decimals=>"<<c << endl;
  }
  else if (e==3)
  {
    cout<<"you've chosen tangent. now enter the desired angle:";
    cin>>a;
    c=sin(a*b);
    e=cos(a*b);
    f=c/e;
    cout <<"in decimals=>"<<f << endl;
  }
  else if (e==4)
  {
    cout<<"you've chosen cosecant. now enter the desired angle:";
    cin>>a;
    c=sin(a*b);
    e=1/c;
    cout <<"in decimals=>"<<e << endl;
  }
  else if (e==5)
  {
    cout<<"you've chosen secant. now enter the desired angle:";
    cin>>a;
    c=cos(a*b);
    e=1/c;
    cout <<"in decimals=>"<<e << endl;
  }
  else if (e==6)
  {
    cout<<"you've chosen cotangent. now enter the desired angle:";
    cin>>a;
    c=sin(a*b);
    e=cos(a*b);
    f=c/e;
    g=1/f;
    cout <<"in decimals=>"<<g << endl;
  }
  getch();
  return 0;
}
