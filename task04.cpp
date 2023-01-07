#include<iostream>
#include<windows.h>
#include<cmath>
using namespace std;

string CheckOddEven(int num);
main()
{
  system("cls");

  float number;
  string result;
  cout << "Enter  the number : ";
  cin >> number;
  
  result = CheckOddEven(number);
  if (result == "true")
     {
        cout << "Evenish";
     }
  if (result == "false")
     {
        cout << "Oddish";
     }
}


string CheckOddEven(int num)
{
   int a,b,c,d,e,tot;
   a = num%10;
   b = (num/10)%10;
   c = (num/100)%10;
   d = (num/1000)%10;
   e = (num/10000)%10;
   tot = a+b+c+d+e;
   if (tot%2==0)
   {

      return "true";
   }
   if (tot%2==1)
   {

      return "false";
   }
}