#include<iostream>
#include<cctype>
using namespace std;

// Function prototype...
int char_count(char *, char);

int main()
{
  const int LENGTH = 80;
 // char userstring[LENGTH];
  char *pstring;
  pstring = new char[LENGTH];
  char letter;
  cout << "Enter a sentence of max "<< LENGTH-1 <<" characters.\n";
  cin.getline(pstring, LENGTH);
  cout <<"give the letter which you want to search for: ";
  cin >> letter;
  cout <<letter<<" appears in the given sentence ";
  cout << char_count(pstring, letter)<<" times.\n";
  return 0;
}

//defining the function..
  int char_count(char *str, char ch)
  { int count = 0;
    while (*str != '\0')
    {
      if (*str == ch)
      { count++;
      }  str++;
     }
    return count;
  }
    
