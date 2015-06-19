#include<iostream>
#include<iomanip>
#include<cstdlib>
using namespace std;

void get_lottery(int&, int&);
long int compute_way(int, int);
long int factorial(int);

int main()
{
  int pickfrom, numpick;
  long int ways;

cout<< "This program will tell you your chance of winning lottery.. \n";

//call lottery info function...
get_lottery(pickfrom, numpick);

//calculate the ways...
ways = compute_way(pickfrom, numpick);

cout<< fixed<< setprecision(5);
cout <<" your chance of winning the lottery is one out of "<< ways<<endl;
cout <<" So, the probability is "<< 1.0/ways << endl;

return 0;
}

//defining get_lottery function...

void get_lottery(int &pickfrom, int &numpick)
{
  cout<<"How many number are there to pick from? ";
  cin >> pickfrom;
  if ( pickfrom < 1 || pickfrom > 12 )
  {cout << "Error in numbers..give valid numbers..\n";
  exit(0);
  } else {
  cout <<" how many numbers must you pick to play? ";
  cin >> numpick;
  if (numpick < 1 || numpick > 12)
  cout << "Error in numbers..\n";
  }
}

// defining compute way function..

long int compute_way(int n, int k)
{ 
  return (factorial(n)/factorial(k)/factorial(n - k));
}

//defining factorial function..

long int factorial(int number)
{
  long int fact_tot = 1;
  for (int count = number; count >= 1; count--)
  { 
    fact_tot *= count;
  }
return fact_tot;
}


