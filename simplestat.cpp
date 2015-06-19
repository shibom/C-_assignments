#include<iostream>
using namespace std;

class Simple_stat
{ private:
   int largest, sum, count;
   bool isnewlarge(int); // private member function prototype...
  public:
   Simple_stat(); // default constructor prototype..
   bool addnumber(int);
   double get_avg();
   int get_large()
   { return largest; } // inline function defined..
   int getcount()
   { return count; }
};

Simple_stat::Simple_stat()
{  largest = sum =count = 0; 
}

bool Simple_stat::addnumber(int num)
{  bool goodnum = true;
   if ( num >= 0 )
   { sum += num;
    count++;
   if(isnewlarge(num))
   largest = num;
 } else goodnum = false;
  return goodnum;
}

bool Simple_stat::isnewlarge(int num)
{ if (num > largest)
    return true;
  else 
    return false;
 }

double Simple_stat::get_avg()
{ 
  if (count > 0)
    return static_cast<double>(sum)/count;
   else return 0;
}

int main()
{ int num;
  Simple_stat stat;
  cout<<"enter the positive numbers: \n";
  cin >> num;
  while (num >= 0)
 {  stat.addnumber(num);
    cin>>num;
 }
cout<<"largest number is "<<stat.get_large()<<endl;
cout<<"average is "<<stat.get_avg()<<endl;
return 0;
}

     
