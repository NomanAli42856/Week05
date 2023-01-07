#include<iostream>
#include<cmath>
using namespace std;


main()
{
  system("cls");

  float result;
  float number1,number2;
  cout << "Enter first number : ";
  cin >> number1;
  cout << "Enter second number : ";
  cin >> number2;
  result = min(number1,number2);
  cout << "Minimum number is  : " << result << endl;
}
