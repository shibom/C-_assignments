#include <iostream>
using namespace std;

int main ()
{  
   int months;  
   double weeks, days;
   cout << "monthss left for Christmas= "<< endl;
   cin >> months;
 // calculate the days left..
   weeks = 4.0 * months;
   days = 7.0 * weeks;
// display the days left..

  cout << " the days left= " << days << endl;

  return 0;
}
