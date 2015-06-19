// This program calculates the area of the circle

#include <iostream>
#include <cmath>
using namespace std;

int main ()
{ 
   const double PI = 3.14159;
   double area, radius, tot_area;
   int rings;
// get the radius of each circle..
   cout << "what's the radius of the ring? ";
   cin >> radius;
// calculate the area..
  area = PI * pow(radius, 2);
// display the area of each ring..
  cout << " area of each ring = " << area << endl;

//get the total area..
   cout << "what's the total area of the plate?";
   cin >> tot_area; 

// calculate no. of rings required..
   rings = static_cast<int>(tot_area/area);

// display the no. of rings required..
  cout << "no. of rings required to fill up the plate = " << rings << endl;
return 0;
}
