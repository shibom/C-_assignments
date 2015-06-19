#include<iostream>
using namespace std;

int main()
{
 int floor, occupancy;
 for( floor = 10; floor <= 16; floor++)
 {
   if (floor == 13)
   continue;
  cout<< "how many are occupied in " << floor<< " floor?"<<endl;
  cin >> occupancy;
  if ((occupancy < 0 || occupancy > 20))
  {cout << "ERROR: invalid no. of suites..\n";
  continue;
 }
  cout << occupancy <<" no of suites are occupied in "<<floor<<" floor? \n";
 }
return 0;
}
