#include <iostream>
using namespace std;

int main ()
{ 
  double eggs;
  double cartoons;
  const int eggs_per_cartoon = 12; 
  cout << "how many eggs he collected= ";
  cin >> eggs;
// calculate the number of cartoons he can pack..
   cartoons = static_cast<double>(eggs/eggs_per_cartoon);
  
// display the cartoons..

  cout << "The farmer packed " << cartoons << "cartoons" << endl;
  return 0;
}   
  
  
