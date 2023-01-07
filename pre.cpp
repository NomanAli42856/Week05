#include<iostream>
#include<windows.h>
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
  result = max(number1,number2);
  cout << "Greater is  " << result << endl;
  result = min(number1,number2);
  cout << "Minimum number is  : " << result << endl;
  result = sqrt(number1);
  cout << "Square root is  : " << result << endl;
  result = cbrt(number1);
  cout << "Cube root is  : " << result << endl;
  result = ceil(number1);
  cout << "Number is  : " << result << endl;
  result = floor(number1);
  cout << " number is  : " << result << endl;
}
