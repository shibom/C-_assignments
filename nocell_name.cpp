#include<iostream>
#include<fstream>
#include<string>
#include<vector>
using namespace std;
//std::ifstream& gotoline(std::ifstream&, unsigned int);
int main()
{
  string line;
  vector<string> lines;
  ifstream infile;
  infile.open("136-f1.stream");
 // ofstream outfile;
 // outfile.open("noindx.txt", ios::app);
  while (!infile.eof())
  { 
   getline(infile, line);
   lines.push_back(line);
    
  }
   // count++;
  //  if (line == "No unit cell")
    //{
     // count = count - 1;
     // cout<<count;
   
infile.close();
//outfile.close();
return 0;
}

/*std::ifstream& gotoline(std::ifstream& infile, unsigned int num){
    infile.seekg(std::ios::beg);
    for(int i=0; i < num - 1; ++i){
        infile.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    }
    return infile;
}*/

