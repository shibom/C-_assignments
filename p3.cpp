# include <iostream>;
using namespace std;

int main ()
{
  int baseballs;
  double rate, expense;
 
// get the number of balls purchased.
  
  cout << "enter the no. of balls purchased = " ;
  cin >> baseballs;

// get the rate.
  cout << " cost per ball = $ " ;
  cin >> rate;

// calculate the expenses.
  expense = baseballs * rate;

// display the total expense.

  cout << " the team will spend $ " << expense << endl;

return 0;
}


