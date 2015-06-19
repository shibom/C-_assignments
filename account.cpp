#include<iostream>
#include<string>
using namespace std;

class Bank_ac 
{
  private: 
   int ac_num;
   double balance, int_rate;
   string owner;
  public: 
   double d, w;
   double get_balance();
   void deposit(double);
   void withdraw(double);
   void add_interest();
   Bank_ac();
   Bank_ac(double, double, int, string);
   void summery();
};

Bank_ac::Bank_ac()
{
  ac_num = 0; balance = 0; int_rate = 0; owner = " ";
}

Bank_ac::Bank_ac(double b, double r, int n, string name)
{
  balance = b; int_rate = r; ac_num = n; owner = name;
}

double Bank_ac::get_balance()
{
  cout << "tell me your inital balance: ";
  cin >> balance;
 return balance;
}
void Bank_ac::deposit(double d)
{ 
  balance = balance + d;
}

void Bank_ac::withdraw(double w)
{
  balance = balance - w;
}

void Bank_ac::add_interest()
{
  balance = balance * (1 + int_rate);
}
void Bank_ac::summery()
{
  cout<<"Account Number: "<<ac_num<<endl;
  cout<<"Owner's Name: "<<owner<<endl;
  cout<<"Balance      : "<<balance<<endl;
  cout<<"Interest rate: "<<int_rate*100<<"%"<<endl;
}

int main()
{
  Bank_ac  myAccount(1000.50, 0.05, 1111, "John William");
  double credit, debit;
  cout<<"how much did you deposit: ";
  cin >> credit;
  myAccount.deposit(credit);
  cout <<"how much did you withdraw: ";
  cin >> debit;
  myAccount.withdraw(debit);
  myAccount.add_interest();
  myAccount.summery();

return 0;

} 
