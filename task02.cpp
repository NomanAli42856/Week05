#include<iostream>
#include<windows.h>
#include<cmath>
using namespace std;

float solquadpos(float a, float b, float c);
float solquadneg(float a, float b, float c);
main()
{
  system("cls");

  float a,b,c,result;
  cout << "Enter a: ";
  cin >> a;
  cout << "Enter b: ";
  cin >> b;
  cout << "Enter c: ";
  cin >> c;
  
  result = solquadpos(a,b,c);
  cout << "First root : " << result << endl ;
  result = solquadneg(a,b,c);
  cout << "Second root : " << result ;
}


float solquadpos(float a, float b, float c)
{

  float sqb,ac4,undrval,under,nume,val;
  sqb=pow(b,2);
  ac4=4*a*c;
  undrval = sqb-ac4;
  under = sqrt(undrval);
  nume=(-b+under);
  val=nume/(2*a);
  return val;

}

float solquadneg(float a, float b, float c)
{

  float sqtr4ac,nume,val;
  sqtr4ac = sqrt(pow(b,2)-4*a*c);
  nume=-b-sqtr4ac;
  val=nume/(2*a);
  return val;

}