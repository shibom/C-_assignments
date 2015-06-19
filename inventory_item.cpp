#include<iostream>
#include<string>
using namespace std;

class invent_item
{ private:
   int partnum;
   string Description;
   int onhand;
   double price;
  public:
   void store_info(int, string, int, double);//function prototype..
   int get_partnum() const
   { return partnum;}
  string get_description() const
  { return Description;}
  int get_onhand() const
  { return onhand; }
  double get_price() const
  { return price; }
};

void invent_item::store_info(int p, string d, int oH, double cost)
{  partnum = p;
   Description = d;
   onhand = oH;
   price = cost;
}

invent_item creat_item(); //prototype called by main..
void show_values(const invent_item&);//prototype called by main..
int main()
{
  invent_item part; 
  part = creat_item();
  show_values(part);
return 0;
}

invent_item creat_item()
{ invent_item temp;// temp is a invent_item object type variable, storing info.. 
  int partnum; 
  string description;
  int qty;
  double price;
 cout<<"part number: ";
 cin >> partnum;
 cout<<"description: ";
 cin.ignore();
 getline(cin, description);
 cout<<"quantity on hand: ";
 cin>> qty;
 cout<<"price: ";
 cin>>price;
 //store everything in the stor_info function..
temp.store_info(partnum, description, qty, price);
return temp;// this return statement returns content of "temp" to main at "part"
}

void show_values(const invent_item &item) 
{ // item is a const reference variable. so when this function will be called by the main with "part"- argument variable then "part" will know the address of item and occupy there without taking anything extra from the memory..//
  cout<<"part number: "<<item.get_partnum()<<endl;
  cout<<"Description: "<<item.get_description()<<endl;
  cout<<"quantity: "<<item.get_onhand()<<endl;
  cout<<"price: "<<item.get_price()<<endl;
}

