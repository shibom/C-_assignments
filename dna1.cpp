//This program will generate DNA sequences containing ACGT core part for ABFgroup of proteins....(for Oral independent proposal)...Shibom Basu

#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
#include<fstream>
using namespace std;

int main(){
ofstream outfile;
outfile.open("seqlist.txt");
string out[21][21];
string in = "ATCG";
int num[21];
int count;
srand( time(NULL) );
for(int k=0; k<21; k++){
//srand( time(0) );
num[0] = rand() % 4;
for (int i=1; i<8; i++)
{ bool check;
 do{
  num[i] = rand() % 4;
  check = true;
  if (num[i] == num[i-1]){
   check = false;
   break;
   }
  }while(!check);

  count = num[i];
  out[k][i] = in[count];

}
out[k][8] = 'A'; out[k][9] = 'C'; out[k][10] = 'G'; out[k][11] = 'T';
for (int i=12; i<21; i++)
{ bool check;
 do{ 
  num[i] = rand() % 4;
  check = true;
  if (num[i] == num[i-1]){
   check = false;
   break;
   }   
  }while(!check);

  count = num[i];
  out[k][i] = in[count];
}

for (int j=0; j<21; j++){
  outfile<<out[k][j];
}
 outfile<<endl;
}
outfile.close();
return 0;
}
