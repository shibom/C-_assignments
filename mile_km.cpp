#include<iostream>
using namespace std;

int main()
{
 int kph = 60;
 double mph;
 do
 {
   mph = kph * 0.6214;
   cout << "KPH = "<<kph << " km/h gives miles = "<<mph<<" miles/h"<<endl; 
   kph += 5;
  }while(kph <= 130);
return 0;
}
