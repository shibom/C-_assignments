#include <iostream>
#include <cmath>
#include <fstream>
#include <iomanip>
using namespace std;

int main ()
{  
   const double annul_intr = 0.12;
   double rate, payment, amt_paid_back, tot_intr, loan, tmp;
   int np, mon_rate;
   rate = annul_intr/12;
// get monthly interest rate...
   mon_rate = static_cast<int>(rate * 100);
 // get the amount of loans..
  cout << "what's your amount of loan ? ";
  cin >> loan;
// get no. of payments..
  cout << " how many times did you pay ? ";
  cin >> np;
// calculate monthly payment...
  tmp = 1 + rate;
  payment = (rate * pow(tmp, np)/(pow(tmp, np) - 1)) * loan;
// calculate amount paid back in total..
  amt_paid_back = payment * np;
// calculate interest paid so far..
  tot_intr = loan * rate * np;
// putting everything in a file...

  ofstream outfile;
  outfile.open("pay_history.txt");
  
  cout << " now i'm writing... \n";
  outfile << "Loan Amount:              $" <<setw(2) << loan << "\n";
  outfile << fixed << showpoint << setprecision(2);
  outfile << "Monthly Interest Rate:    $" <<setw(7)<< mon_rate << "% \n";
  outfile << "Number of payments:       $" << setw(7) << np << "\n";
  outfile << "Monthly payments:         $" << setw(6) << payment<<"\n";
  outfile << "Amount paid back:         $" << amt_paid_back << "\n";
  outfile << "Interset paid:            $" << setw(6) << tot_intr << endl;
  outfile.close();  
  cout << "ok, done" << endl;
  return 0;
}
