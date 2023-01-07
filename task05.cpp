#include<iostream>
#include<windows.h>
using namespace std;
float Hrs(int hours,int minutes);
float Mns(int hours,int minutes);


main()
{
  system("cls");

  float hurs , mintes, result_hr,result_min;
  
  cout << "Enter the hours : " ;
  cin >> hurs;
  cout << "Enter the minutes : " ;
  cin >> mintes;
  result_hr = Hrs(hurs,mintes);
  result_min = Mns(hurs,mintes);
  if (result_hr < 23)
  {
      cout << result_hr <<" : " << result_min;
  }
  if (result_hr > 23)
  {
      result_hr = result_hr-24;
      cout << result_hr <<" : " << result_min<< endl;
  }




}

float Hrs(int hours,int minutes)
{
    minutes = minutes + 15;
    if (minutes >= 60)
    {
        hours = hours + 1;
        return hours;
    }
    return hours;
}

float Mns(int hours,int minutes)
{
    minutes = minutes + 15;
    if (minutes >= 60)
    {
        minutes = minutes - 60;
        return minutes;
    }
    return minutes;
}
