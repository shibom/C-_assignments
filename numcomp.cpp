#include <iostream>
using namespace std;

int main()
{
   double amt1, amt2;

// get the numbers for comparision...
 
   cout << "give me numbers: ";
   cin >> amt1 >> amt2;

// compare them...

   if (( amt1 > 10) && (amt2 < 100))
   { 
        if (amt1 > amt2)
        {
          cout << amt1 << " is greater than " << amt2 << endl;
         }
         else
         {
           cout << amt2 << " is greater than "<< amt1<< endl;
         }
       
      return 0;
    }   
 } 
