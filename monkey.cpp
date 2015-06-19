#include<iostream>
#include<string>
using namespace std;
  
int main()
{
  double  monkeyinfo[3][7], avg;
  double sum = 0;
 for ( int i=0; i<3; i++)
 {  for (int j=0; j<7; j++)
     {
       cout<<"how much monkey"<<i+1<<" has eaten on day"<<j+1<<"? ";
       cin >> monkeyinfo[i][j];
       sum += monkeyinfo[i][j];
     }
 }
 avg = sum/21;
 cout<< avg;
return 0;
}
  
