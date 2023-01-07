#include<iostream>
#include<windows.h>
using namespace std;
float firstpipeper(int vol,int firstflow,int secflow,int time);
float secpipeper(int vol,int firstflow,int secflow,int time);
float overflow(int vol,int firstflow,int secflow,int time);

main()
{
  system("cls");

  float volume,firstflow,secflow,time,result_tot,result_first,result_second;
  
  cout << "Enter the volume of the pound : " ;
  cin >> volume;
  cout << "Enter the flowrate of first pipe : " ;
  cin >> firstflow;
  cout << "Enter the flowrate of second pipe : " ;
  cin >> secflow;
  cout << "Enter the time for which worker is absent : " ;
  cin >> time;

  result_tot = overflow(volume,firstflow,secflow,time);
  result_first = firstpipeper(volume,firstflow,secflow,time);
  result_second = secpipeper(volume,firstflow,secflow,time);
  if (result_tot <= volume)
  {
      cout << "The pound is " << result_tot << "% full. Pipe1 : " << result_first << "% Pipe2 : " << result_second <<"%";
  }
  if (result_tot > volume)
  {
      cout << "The pound overflows " << result_tot << " litres";
  }

}


float firstpipeper(int vol,int firstflow,int secflow,int time)
{
    float full1,per1;
    full1 = firstflow*time;
    per1 = (full1/vol)*100;
    return per1;

}

float secpipeper(int vol,int firstflow,int secflow,int time)
{
    float full2,per2;
    full2 = secflow*time;
    per2 = (full2/vol)*100;
    return per2;

}

float overflow(int vol,int firstflow,int secflow,int time)
{
    float full,sparevolume,per;
    full = (firstflow*time)+(secflow*time);
    if (full>vol)
    {
        sparevolume = full - vol;
        return sparevolume;
    }
    if (full<=vol)
    {
        full = (firstflow*time)+(secflow*time);
        per = (full / vol)*100;
        return per;
    }

}    