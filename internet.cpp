#include<iostream>
using namespace std;

int main()
{
 const double A_PER_MONTH = 9.95;
 const double B_PER_MONTH = 14.95;
 const double C_PER_MONTH = 19.95;
 const double A_ADDHOUR = 2.00;
 const double B_ADDHOUR = 1.00;
 char package;
 int hours;
 double tot_billA, tot_billB, tot_billC, save_B, save_C;

 cout << "Package A: For $9.95 per month 10 hours of access are provided. Additional hours are $2.00/hour \n"
      << "Package B: For $14.95 per month 20 hours of access are provided. Additional hours are $1.00/hour \n"
      << "Package C: For $19.95 per month unlimited access is provided..\n";


 cout << "which package you have choosen? ";
 cin >> package;

 if (!(package == 'A'|| package == 'B' || package == 'C'))
  {  cout << "Input is not valid" << endl; 
   return 1;
  }
 cout << "how many hours have you used: ";
 cin >> hours;
 
// check the inputs...

 if (hours > 744)
  {  cout << "Input is not valid" << endl;
   return 1;
  }
// calculate the cost....
   tot_billB = B_PER_MONTH + B_ADDHOUR * (hours - 20);
   tot_billC = C_PER_MONTH;
  switch(package)
{
  case 'A': tot_billA = A_PER_MONTH + A_ADDHOUR * (hours -10);
            save_B = tot_billA - tot_billB; 
            save_C = tot_billA - tot_billC;
            cout << " your bill is $ "<<tot_billA<<"\n"
                 << "you could have saved $ "<<save_B <<" & $ "<<save_C<< " in plan B and C respectively"<<endl;
            break;
  case 'B': save_C = tot_billB - tot_billC;
            cout << "your total bill is $ "<< tot_billB<<"\n"
                 <<"you could have saved $ "<<save_C<<" in plan C. "<<endl; 
            break;
  case 'C': cout << "your total bill is $ "<< tot_billC<<endl;
}
// display the total internet bill....

//  cout << " OK, I got your total internet bill.\n Total charge is $ "<< tot_bill<<endl;

 return 0;
} 

