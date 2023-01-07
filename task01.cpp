#include<iostream>
#include<windows.h>
#include<cmath>
using namespace std;

float calHeight(float angle, float distance);

main()
{
  system("cls");

  float distance,angle,degrees,result;
  cout << "Enter the angle of elevation : ";
  cin >> angle;
  cout << "Enter the distance from tree : ";
  cin >> distance;  
  
  result = calHeight(angle,distance);
  cout << "Height of the tree : " << result << "feets";
}


float calHeight(float angle, float distance)
{

  float radians,height;
  radians = 30/57.2958;
  height = 43*tan(radians);
  return height;

}