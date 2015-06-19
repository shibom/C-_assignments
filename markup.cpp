//this program takes the user's wholesale cost and mark up percentage and then
// calculates the retail price...it illustrates the use of function..

#include<iostream>
using namespace std;

double calc_retail(double, double);

int main()
{ double wholesale, markup, retail;

// get the user's info and calculate retail..
 retail = calc_retail(wholesale, markup);
cout << "the retail price is $ "<<retail<<endl;
return 0;
}

double calc_retail(double wholesale, double markup)
{ double retail;
  cout<<"give me the wholesale cost: ";
  cin >>wholesale;
  cout<<"give me the markup percentage: ";
  cin >> markup;
  retail = wholesale * (1 + markup);
 return retail;
}

