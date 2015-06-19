#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

double in_patient(int, double, double, double);
double out_patient(double, double);

int main()
{ int days;
  double tot_charge, rate, service, medication; 
  string patient;
  cout << "what kind of patient are you? ";
  cin >> patient;
  
  if (patient == "in-patient")
  { tot_charge = in_patient(days, rate, service, medication);
   cout<<"your total charge is "<<tot_charge<<endl;
  }
  else{ if (patient == "out-patient")
  tot_charge = out_patient(service, medication);
  cout << "your total cost is: "<<tot_charge<<endl; 
  }
return 0;
}


double in_patient(int days, double rate, double service, double medication)
{  double tot_charge;
   cout <<"how many days did you stay? ";
   cin >> days;
   cout<<"what was the daily rate? ";
   cin >> rate;
   cout << "what was the charge for hospital service? ";
   cin>> service;
   cout << "what was the medication charge? ";
   cin >> medication;
   tot_charge = days * rate + service + medication;
 return tot_charge;
}

double out_patient(double service, double medication)
{  double tot_charge;
   cout <<"what was the hospital service? ";
  cin >> service;
   cout<< " what was the medication charge: ";
   cin >> medication;
  tot_charge = service + medication;
 return tot_charge;
}
 
