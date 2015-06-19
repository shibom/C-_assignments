# include <iostream>;
using namespace std;

int main()
{
  double candy, rate, tot;
// get the no. of candy sold
   cout << "enter the no. of candy sold = " ;
   cin >> candy;
// get the rate for candy
  cout << "cost per candy = " ;
  cin >> rate;
// calculate the total earning
  tot = rate * candy;
// display the total amount  
  cout << "total amt. earned = " << tot << endl;

 return 0;

}
