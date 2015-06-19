#include<iostream>
using namespace std;

class Rectangle
{ private:
   double length, width;
  public:
   void set_length(double l)
   { length = l;}
   void set_width(double w)
   { width = w; }
   double get_length()
   { return length;}
   double get_width()
   { return width; }
  double get_area()
   { return (length * width);}
};

class Carpet
{ private:
   double price_per_yd;
   Rectangle size;
  public:
   void set_price(double p)
   { price_per_yd = p;}
   void set_dimension(double len, double wid)
   { size.set_length(len/3);
     size.set_width(wid/3);
    }
   double get_tot_price()
   { return (size.get_area() * price_per_yd);}
};

int main()
{ 
  Carpet purchase;
  double price_per_yd;
  double length, width;
  cout<<"Room's length in ft: ";
  cin >> length;
  cout<<"Room's width in ft: ";
  cin>> width;
  cout<<"what's carpet rate? ";
  cin >> price_per_yd;
  purchase.set_price(price_per_yd);
  purchase.set_dimension(length, width);
  
  cout<<"so, total cost is: "<<purchase.get_tot_price()<<endl;
return 0;
}

