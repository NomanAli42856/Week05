#include<iostream>
#include<cmath>
using namespace std;


main()
{
  system("cls");

  float result;
  float number;
  cout << "Enter the number : ";
  cin >> number;
  result = cbrt(number);
  cout << "Cube root of number is  : " << result << endl;
}
