#include<iostream>
using namespace std;

double getscore(double);
double calc_avg(double);
double find_lowest(double);

int main()
{ 
  double  score[5], avg;
// get the scores from the user..
//for (int j = 1; j<=5; j++)
getscore(score[5]);

// calculate the average of four of them..

avg = calc_avg(score[5]);

cout<< "your average of top four scores is "<<avg<<endl;
return 0;
}

double getscore(double num[5]) 
{ for (int j =1; j<= 5; j++)
  { cout<< "your score for "<<j<<" is: \n";
   cin >> num[j]; 
  }
 return num[5];
}

double calc_avg(double out[5])
{ double tot = 0.0;
 double low;
      low =find_lowest(out[5]);
 int i = 0;
 while(i <= 5) 
 { i++;
 if (out[i] == low) 
     continue;
 tot += out[i];
  }
  double avg = tot/4 ;
  return avg;
 }

double find_lowest(double score[5])
{
  double low = 1000;
  for(int i = 1; i <=5; i++)
 // cin >> score[i];
  if (score[i] < low) score[i] = low;
 return low; 
}

