#include<iostream>
#include<cmath>
#include<iomanip>
#include<fstream>
using namespace std;

int main()
{
 double loan, rate, mo_int_rate, mo_int, years, balance, term, payment;
 int n_pay;
// Get the loan info...

 cout<<"what's the amount of loan? ";
 cin >> loan;
 cout<<"Annual interest rate: ";
 cin >> rate;
 cout<<"for how many years? ";
 cin >> years;

// calculate the monthly payment...

 n_pay = static_cast<int>(12 * years);
 mo_int_rate = rate/12;
 term = pow((1+mo_int_rate), n_pay);
 payment = (loan * mo_int_rate * term)/(term - 1);

// dispaly monthly payment...

 cout<< fixed << showpoint << setprecision(2);
 cout<< "Monthly payment: $" << payment << endl;

// dispaly the report in an output file....


 ofstream f;
 f.open ("datasheet.dat");

 f<<endl;
 f<< setw(5)  << "Month"     << setw(10)  << "Interest";
 f<< setw(10) << "Principal" << setw(9)   << "Balance" << endl;
 f<< "===================================\n";


 balance = loan;

 for (int month = 1; month <= n_pay; month++)
 {
  double principal;
// calculate monthly interest and amt of principal paid...

 mo_int = mo_int_rate * balance;
 if( month != n_pay )
 {
  principal = payment - mo_int;
 }
 else
 {
   principal = balance;
   payment = balance + mo_int;

 }
   balance -= principal;
 f<< setw(4)  << month     << setw(10) << mo_int;
 f<< setw(10) << principal << setw(10) << balance<<endl;
}
f.close();
return 0;
}

