//developed by Apoorv
#include<iostream>
#include<math.h>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

int quad(long double &ra,long double &rb,long double &rc)
{
	int d,e,i;
  
  cout<<"___________________________________________________" << endl;
  d=sqrt(rb*rb-4*ra*rc);
  e=-(-rb+d)/2*ra;
  i=-(-rb-d)/2*ra;
  cout<<"the roots are x="<<e<<"x="<<i << endl;
  cout<<"___________________________________________________";
}
int ellipse()
{
	int a,b,c,h,f,g,delta,abh,e;
	long double C,A,B,H,sma,smi,tan1,tan2,tana,tanb,tanc,d1,e1,i1,ra,rb,rc,r1,r2,d2,e2,i2,a1,b1,m1,m2;
	cout<<".########.##.......##.......####.########...######..######## \n"
          ".##.......##.......##........##..##.....##.##....##.##...... \n"
          ".##.......##.......##........##..##.....##.##.......##...... \n"
          ".######...##.......##........##..########...######..######.. \n"
          ".##.......##.......##........##..##..............##.##...... \n"
          ".##.......##.......##........##..##........##....##.##...... \n"
          ".########.########.########.####.##.........######..######## \n";                                               
	cout<<"__________________________________________________________________________________________"<<'\n';
	cout<<"Finds out all the information about the given ellipse. Currently in alpha stage."<<'\n';
	cout<<"__________________________________________________________________________________________"<<'\n';
	cout<<"Enter the  coefficients of the equation of ellipse (a,h,b,g,f & c respectively)"<<'\n';
	cin>>a>>h>>b>>g>>f>>c;
	delta= a*b*c -2*f*g*h -a*pow(f,2) -b*pow(g,2) -c*pow(h,2);
	cout<<"___________________________________________________"<<'\n';
	cout<<"delta is:"<<delta<<'\n';
	cout<<"___________________________________________________"<<'\n';
    abh=a*b-pow(h,2);
    cout<<"ab-h^2="<<abh<<'\n';
    C=delta/abh;
    A=-a/C;
    B=-b/C;
    H=-h/C;
    cout<<"C'="<<C<<'\n';
    cout<<"A="<<A<<'\n';
    cout<<"B="<<B<<'\n';
    cout<<"H="<<H<<'\n';
    e=pow((2*pow(pow(A-B,2)+4*pow(H,2),1/2))/((A-B)+(pow(A-B,2)+4*pow(H,2),1/2)),1/2);
    cout<<"eccentricity is:"<<e<<'\n'; 
	tana=2*H;
	tanb=2*(A+B);
	tanc=-2*H; 
    d1=sqrt(tanb*tanb-4*tana*tanc);
    e1=-(tanb+d1)/2*tana;
    i1=-(-tanb-d1)/2*tana;
    cout<<"The two values of tan(theta) are:"<<e1<<"&"<<i1<<'\n';
    ra=1;
    rb=-(A+B);
    rc=A*B -pow(H,2);
    d2=sqrt(rb*rb-4*ra*rc);
    e2=-(rb+d2)/2*ra;
    i2=-(-rb-d2)/2*ra;
    a1=1/(pow(e2,2));
    b1=1/(pow(i2,2));
    m1=pow((1+pow(e1,2))/(A+2*H*e1+B*pow(e1,2)),1/2);
    m2=pow((1+pow(i1,2))/(A+2*H*i1+B*pow(i1,2)),1/2);
    if(e2==m1)
	{
	cout<<"The major/minor axis with its tan(theta)are:"<<'\n'<<"a="<<e2<<"& m1="<<e1<<'\n'<<"b="<<i2<<"& ="<<i2<<'\n';
	}
	else{cout<<"The major/minor axis with its tan(theta)are:"<<'\n'<<"a="<<e2<<"& m1="<<i1<<'\n'<<"b="<<i2<<"& ="<<e1<<'\n';}
}

int main()
{

	ellipse();
}
