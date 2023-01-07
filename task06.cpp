#include<iostream>
#include<windows.h>
#include<cmath>
using namespace std;

string Unit(int num);
string Ten(int num);

main()
{
  system("cls");

  float number;
  string unit,ten;
  cout << "Enter  the number : ";
  cin >> number;
  
  unit = Unit(number);
  ten = Ten(number);
  cout << ten << " " << unit;
}


string Unit(int num)
{
   int a;
   a = num%10;
   if (a==1)
   {

      return "One";
   }
   if (a==2)
   {

      return "Two";
   }
   if (a==3)
   {

      return "Three";
   }
   if (a==4)
   {

      return "Four";
   }
   if (a==5)
   {

      return "Five";
   }
   if (a==6)
   {

      return "Six";
   }
   if (a==7)
   {

      return "Seven";
   }
   if (a==8)
   {

      return "Eight";
   }
   if (a==9)
   {

      return "Nine";
   }
}



string Ten(int num)
{
   int a;
   a = (num/10)%10;
   if (a==0)
   {

      return "";
   }
   if (a==2)
   {

      return "Twenty";
   }
   if (a==3)
   {

      return "Thirty";
   }
   if (a==4)
   {

      return "Fourty";
   }
   if (a==5)
   {

      return "Fifty";
   }
   if (a==6)
   {

      return "Sixty";
   }
   if (a==7)
   {

      return "Seventy";
   }
   if (a==8)
   {

      return "Eighty";
   }
   if (a==9)
   {

      return "Ninty";
   }
}