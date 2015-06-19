//This program illustrates the use of reference variable while passing a file to the function...

#include<iostream>
#include<fstream>
using namespace std;

void readfile(ifstream&); //function prototype..

int main()
{ ifstream infile;
  infile.open("weather.dat");
  if (infile.fail())
    cout << "Error in opening..\n";
  else {
   readfile(infile);
   infile.close();
  }
return 0;
}

void readfile(ifstream &somefile)
{
   int temperature;
   while ( somefile >> temperature)
     cout<< temperature<<" ";
     cout <<endl;
 }
