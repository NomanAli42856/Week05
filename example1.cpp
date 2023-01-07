#include<iostream>
#include<windows.h>
using namespace std;

int isGreater(int , int);
int isMinimum(int , int);

main()
{
  system("cls");

  float result;
  int number1,number2;
  cout << "Enter first number : ";
  cin >> number1;
  cout << "Enter second number : ";
  cin >> number2;
  result = isGreater(number1,number2);
  cout << "Greater number = " << result << endl;
  result = isMinimum(number1,number2);
  cout << "Minimum number = " << result << endl;

}


int isGreater(int num1 , int num2)
{

  if(num1>num2)
  {
    return num1;
  }
  
  if(num1<num2)
  {
    return num2;
  }  

}


int isMinimum(int num1 , int num2)
{

  if(num1<num2)
  {
    return num1;
  }
  
  if(num1>num2)
  {
    return num2;
  }  

}