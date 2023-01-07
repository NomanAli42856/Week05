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
  result = pow(number,2);
  cout << "Square of number is  : " << result << endl;
  result = pow(number,3);
  cout << "Cube of number is  : " << result;
}
