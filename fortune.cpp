#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;

int main()
{
  string career1, career2, career3;
  int random_num;
//seed the random number generator...

  unsigned seed = time(0);
  srand(seed);
// Explain the game and get the player's career choice...

  cout << "I'm a fortune teller. Tell me your 3 careers as per choice.\n"
       << "Example: \n\n"<< "\t\tchef \n \t\tengineer \n \t\t CIA agent\n\n";

  cout << "Career choice 1: ";
  getline(cin, career1);
  
  cout << "Career choice 2: ";
  getline(cin, career2);
  
  cout<< "Career choice 3: ";
  getline(cin, career3);
//Randomly generated an integer between 1 and 4...

  random_num = 1 + rand() % 4;
//use branching logic for prediction...

  if (random_num == 1)
      cout << "\n you will be a "<< career1<<". \n";
  else if (random_num == 2)
      cout <<"\n you will be a "<<career2<<". \n";
  else if (random_num == 3)
      cout << "\n you will be a "<<career3<<". \n";
  else
     cout << "\n Sorry. you will be none of these." <<endl;
return 0;
}

