// your marks calculator lmaooo xD
#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int initialise()
{
  cout<<"YourCGPACalculatorByApoorvv0.1" << endl;
  cout<<"_________________________________"<< endl;
  float a,b,c,d,e,f,g,h,i,j,k;
  cout<<"Enter your total marks:"<< endl;
  cin>>d;
  cout<<"Enter your marks obtained in each subject:";
  cin>>e>>f>>g;
  cout<<"_________________________________"<< endl;
}
int Percent()
{
  float a,b,c,d,e,f,g,h,i,j,k;
  cout<<"Calculating percentage marks..."<< endl;
  a=(d/300)*100; //calculates the total percent marks at this point
  cout<<"Your percent marks is:"<<a << endl;
  cout<<"_________________________________"<< endl;
}
int GPA()
{
  float a,b,c,d,e,f,g,h,i,j,k;
  cout<<"Calculating your GPA..."<< endl;
  b=(a*5)/100; //calculates the total gpa at this point
  cout<<"Your GPA is:"<<b <<endl;
  cout<<"_________________________________"<< endl;
}
int CGPA()
{
  float a,b,c,d,e,f,g,h,i,j,k;
  cout<<"Calculating your CGPA..."<< endl;
  h=(e*5)/100;
  i=(f*5)/100;
  j=(g*5)/100; //calculates the gpa of each subject at this point
  k=(h+i+j)/3; //calculates the total cgpa at this point
  cout<<"Your CGPA is:"<<k <<endl;
  cout<<"_________________________________"<< endl;
}
int main()
{
  system("cls");
  initialise();
  Percent();
  GPA();
  CGPA();
}
