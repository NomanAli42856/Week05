#include<iostream>
#include<windows.h>
#include<cmath>
using namespace std;

string symmetry(int num);
main()
{
  system("cls");

  float number;
  string result;
  cout << "Enter  the number : ";
  cin >> number;
  
  result = symmetry(number);
  if (result == "true")
     {
        cout << "True";
     }
  if (result == "false")
     {
        cout << "False";
     }
}


string symmetry(int num)
{
   int a,b,c;
   a = num%10;
   b = (num/10)%10;
   c = (num/100)%10;
   if (a==c)
   {

      return "true";
   }
   if (a!=c)
   {

      return "false";
   }
}