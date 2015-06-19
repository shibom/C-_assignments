//this program shows the use of cin.get and cin.ignore..

#include <iostream>
using namespace std;

int main()
{  
   double number;
   char ch;
   cout << "enter the number ";
   cin >> number;    /// read a number...
   cin.ignore();     ///skip the newline character..
   cout << " enter the Enter key ";
   cin.get(ch);     /// read a character including space/enter keys
   cout << " thanks" << endl;
return 0;
}

