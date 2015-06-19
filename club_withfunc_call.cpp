#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

//declaring function prototypes....

void display_menu();
int get_choice(int c);
double showfees(string catagory, double rate, int month);

int main()
{ 
  const double ADULT_RATE = 40.00;
  const double SENIOR_RATE = 30.00;
  const double CHILD_RATE = 20.00;
  int choice, month;
// calculate the membership fees....

  
  display_menu();
  choice = get_choice(choice);
   if (choice == 4)
    { cout << "I'm quitting..."<<endl;
  //  return 1;
    }

   else {
   cout << "For how many months?: \n";
   cin >> month;
   switch(choice)
   {
     case 1: showfees("Adult", ADULT_RATE, month);
             break;
     case 2: showfees("Senior", SENIOR_RATE, month);
             break;
     case 3: showfees("Child", CHILD_RATE, month);
     }
   }
 return 0;
}



// defining display_menu function....

void display_menu()
{
  system("clear");   // clear the screen...

  cout << "\n Health Club Membership menu \n";
  cout << "1. Adult Membership \n";
  cout << "2. Senior Membership. \n";
  cout << "3. Child Membership. \n";
  cout << "4. quit. \n";

 }
// defining get_choice function....
int get_choice(int c)
{ 
  cout << "Give your choice for membership: ";
  cin >> c;
 // validating the inputs...
  if ( c < 1 || c > 4 )
  { cout << "Re-enter the valid choice: ";
   cin >> c;
   }
 return c;
}
// defining showfees function...

double showfees(string catagory, double rate, int month)
{ cout << endl;
  cout << "MembershipType: " << catagory << "  "
       << "Months:  " << month << endl;
  cout << "Total charges: $ " << rate * month << endl;
  
 cout << "Press the enter key to return to the main menu..";

 cin.get();
 cin.get();
 } 




