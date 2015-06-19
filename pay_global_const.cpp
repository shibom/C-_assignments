//This program illustrates the use of global and local variables...

#include<iostream>
#include<iomanip>

using namespace std;

// Global constant declare..

const double PAY_RATE = 22.55;
const double BASE_HOURS = 40.00;
const double OT_SCALE = 1.5;

//function prototypes...

double get_basepay(double hours_worked);
double get_overtime(double hours_worked);

int main()
{
  double hours, basepay, ot_pay, tot_pay;
  ot_pay = 0.0;
// get info from the users..  
  cout<<"how many hours did you work? ";
  cin >> hours;
//call the base pay function...
  basepay = get_basepay(hours);
// call overtime pay function if required..

  if ( hours > BASE_HOURS )
    ot_pay = get_overtime(hours);
// calculate the total...
  tot_pay = basepay + ot_pay;
// display the results...

  cout<< fixed<<setprecision(2);
  cout<< "your base pay   $ "<< basepay<<endl;
  cout<< "overtime pay    $ "<< ot_pay<<endl;
  cout<< "your total pay  $ "<< tot_pay<< endl;
return 0;
}

//defining get_basepay function...

double get_basepay(double hours_wroked)
{  double basepay;
   double hours_worked;
   if ( hours_worked == BASE_HOURS )
    basepay = hours_worked * PAY_RATE;
   else basepay = BASE_HOURS * PAY_RATE;
 return basepay;
}

//defining get_overtime function...


double get_overtime(double hours_worked)
{
  double ot_pay;
  ot_pay = (hours_worked - BASE_HOURS) * PAY_RATE * OT_SCALE;
return ot_pay;
}


