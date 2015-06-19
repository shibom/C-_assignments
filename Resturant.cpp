#include <iostream>
using namespace std;

int main ()
{ 
  double bill, tax, tip, meal_cost;
  tip = 0.15;
  bill = 44.50;
  tax = 6.75;
  tax = tax/100;
  tax = bill * tax;
  tip = bill * tip;
 // calculate total meal cost..

  meal_cost = (bill + tax) + tip;
// display total bill..
  cout << " the meal cost was $" << bill << "\n";
  cout << " tax was $" << tax << "\n";
  cout << " tip was $" << tip << "\n";
  cout << " total bill was $" << meal_cost << endl;
 return 0;
}
