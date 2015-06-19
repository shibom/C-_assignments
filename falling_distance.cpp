#include<iostream>
#include<cmath>
using namespace std;

const double g = 9.8;
double get_distance(double);

int main()
{
  double time, distance;
// get the time of free falling from the user..

// cout <<" How long did you fall? ";
// cin >> time;
// calulate distance for 10 times..
 for ( int i = 1; i <= 10; i++)
{ cout << "give times for "<<i <<"times: ";
  cin >> time;
  distance = get_distance(time);
 cout << "you fall "<< distance<<" metre"<<" in "<<time<<" at "<<i<<"th times. \n";
}
return 0;
}

// defining get_distance function..

 double get_distance(double time)
 { double distance;
   distance = 0.5 * g * pow(time, 2);
  return distance;
  }
  
