#include <iostream>
using namespace std;

int main()
{
   const int cooki_in_bag = 40;
   const int serve_calori = 300;
   int no_cooki_ate, serve_on_bag;
   double calori_per_cooki, calori_consumd;
// get the number of cookies eaten..
   cout << " how many cookies did you take? ";
   cin >> no_cooki_ate;

// calculate calorie per cooki..
  serve_on_bag = 10;
  calori_per_cooki = static_cast<double>(serve_calori*serve_on_bag)/cooki_in_bag;
// calculate calory consumed by you..
   calori_consumd = no_cooki_ate * calori_per_cooki;
// display the total calory consumed by you..
  cout << " ok, you consumed " << calori_consumd << "calories" << endl;
 return 0;
}
