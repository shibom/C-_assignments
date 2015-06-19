#include<iostream>
#include<cctype>
using namespace std;

int main()
{
  int num;
  char ans;
  
  do 
  {
   cout <<" wanna test me? ";
   cin.get(ans);
   while (!(ans == 'y' || ans == 'Y'))
   { 
     cout << " okay, i will stop now..\n";
   return 1;
   }
   cout <<" then give me number: \n";
   cin >> num;
   if ( num % 2 == 0)
   {
     cout << num << " is an even number. \n";
   }
   else cout << num << " is odd. \n";
  } while ( ans == 'y');
return 0;
}
