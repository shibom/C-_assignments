//this program shows the passing of structure type variable to the functions by reference or by constant reference..

#include<iostream>
#include<string>

using namespace std;

struct Invitem
{ int partnum;
  string description;
  int onhand;
  double price;
};

void get_itemdata(Invitem&);
void show_itemdata(const Invitem&);

int main()
{ Invitem part;
  get_itemdata(part);
  show_itemdata(part);
return 0;
}

void get_itemdata(Invitem &item)
{ cout<<"part number?: ";
  cin>>item.partnum;
  cout<<"description?: ";
  cin.ignore();
  getline(cin, item.description);
  cout<<"quantity on hand?: ";
  cin>>item.onhand;
  cout<<"price?: ";
  cin>>item.price;
}

void show_itemdata(const Invitem &item)
{  cout<<"Part Number: "<<item.partnum<<endl;
   cout<<"Description: "<<item.description<<endl;
   cout<<"Quantity: "<<item.onhand<<endl;
   cout<<"Price: "<<item.price<<endl;
}

  

