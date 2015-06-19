#include<iostream>
using namespace std;

int main()
{ double score[5], tot, avg, low;
  tot = 0.0;
  low = 1000;
  for (int i = 1; i<=5; i++)
  {  cout<<"your score for "<<i<<" is: ";
     cin >> score[i];
     if ( score[i] < low)
     { low = score[i];
//       cout << "lowest score is "<<low<<endl;
      }
   } int j =0;
     while(j<= 5)
     {  
       j++;
     if (score[j] == low) 
         continue; 
      tot += score[j];
     }
  cout <<"total is: "<< tot<<endl;
  avg = tot/4;
 cout << "your average of top 4 scores is "<<avg<<endl;
 cout <<"lowest score is: "<<low<<endl;
 return 0;
}    
