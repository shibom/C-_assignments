#include<iostream>
#include<string>
using namespace std;

struct Expense
{ double food, medical, misc;
};

struct Petinfo
{  string name, type;
   int age;
  Expense cost; //this is an example of nested structure type..
  Petinfo() //this is a constructor initializing member variables..
  { cost.food = cost.medical = cost.misc = 0.0;
    name = "unknown";
    type = "unknown";
    age = 0;
  }
};

int main()
{ double tot;
  Petinfo pet;
  pet.name = "pussy";
  pet.type = "cat";
  pet.age = 4;
  pet.cost.food = 125.56;
  pet.cost.medical = 340.59;
  pet.cost.misc = 7.45;
  tot = pet.cost.food + pet.cost.medical + pet.cost.misc ;
cout<<"Annual costs for my "<<pet.age<<"-year-old "<<pet.type<<" "<<pet.name<<" are $ "<<tot<<endl;

return 0;
}
