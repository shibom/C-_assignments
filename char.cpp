#include<iostream>
using namespace std;

int main()
{
  const int LENGTH = 80;
  char *pname;
  pname = new char[LENGTH];
  cout<<"enter your sentence of "<< LENGTH - 1<<" character: ";
  cin.getline(pname, LENGTH);
 cout <<"your sentence:\n";
 for (int i = 0; pname[i] != '\0'; i++)
 {
   cout << pname[i];
 }
  cout<<endl;
 cout<< pname <<endl;
return 0;

}
