// this program illustrates swapping numbers using the passing of arguments by reference...

#include<iostream>
using namespace std;

void get_num(int&, int&); //function prototype..Here, uses reference parameter to i                          // input values in the function but to actually store                              // them in the variables defined in main..
void swap(int&, int&); // using ref. parameters change the existing values in main   
int main()
{  int small, big;
   get_num(small, big);// calling the get num function..
   swap(small, big);
// display the new values//
 cout << "smallest to biggest "<< small<< "and" << big<<endl;
 return 0;
}

void get_num(int &input1, int &input2)
{
   cout<<"give me two integers: ";
   cin >> input1 >> input2;
}

void swap(int &num1, int &num2)
{
  int temp;
  if (num1 > num2)
  {  temp = num1;
     num1 = num2;
     num2 = temp;
  }
}


