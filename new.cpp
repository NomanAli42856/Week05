#include<iostream>
#include<windows.h>
using namespace std;

int add(int , int);
float divide(float num1, float num2);

main()
{
  system("cls");

  float result;
  int number1,number2;
  cout << "Enter first number : ";
  cin >> number1;
  cout << "Enter second number : ";
  cin >> number2;
  result = add(number1,number2);
  cout << "Result of addition = " << result << endl;
  result = divide(number1,number2);
  cout << "Result of division = " << result << endl;
}


int add(int num1, int num2)
{

  int sum=num1+num2;
  return sum;
}

float divide(float num1, float num2)
{

  float divid=num1/num2;
  return divid;
  
}