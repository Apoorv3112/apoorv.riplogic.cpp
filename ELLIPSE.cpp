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
int delt()
{
	int a,b,c,h,f,g,delta,abh,e;
	long double C,A,B,H,sma,smi;
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
    cout<<"eccentricity is:"<<e;    
}

int main()
{

	delt();
}
