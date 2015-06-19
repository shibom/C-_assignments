#include<iostream>
using namespace std;

class Rectangle
{ private:
    double length, width, area; 
  public:
   
   Rectangle(); // default constructor..
   Rectangle(double l, double w); // constructor...
   void set_length(double);
   void set_width(double);
   double get_length();
   double get_width();
   double get_area();
   void display();
};

Rectangle::Rectangle()
{ 
  length = 0; width = 0; 
}

Rectangle::Rectangle(double l, double w)
{ length = l;
  width = w;
}

void Rectangle::set_length(double l)
{  if (l > 0)
   length = l;
  else { length = 1.0;
  cout <<"Invalid length, so scaled to 1 \n";
  }
}
void Rectangle::set_width(double w)
{  if (w > 0)
   width = w;
  else { width = 1.0;
  cout << "Invalid width, so scaled to 1 \n";
  }
}

double Rectangle::get_length()
{  return length;
}
double Rectangle::get_width()
{ return width;
}
double Rectangle::get_area()
{  area = length * width;
  return area;
}

void Rectangle::display()
{
  cout<<"length of the box: "<<length<<endl;
  cout<<"width of the box: "<<width<<endl;
  cout<<"area of the box: "<<area<<endl;
}
int main()
{ Rectangle box, box1(6.5, 3.5);
  double boxlength, boxwidth, area;
  cout<<"what's the length of the box? ";
  cin>>boxlength;
  cout<<"what's the width of the box? ";
  cin >> boxwidth;
 //setting the length and width...
  box.set_length(boxlength);
  box.set_width(boxwidth);
  box.get_length();
  box.get_width();
  box.get_area();
  box1.get_length();
  box1.get_width();
  box1.get_area();
// getting'em..
  box.display();
  box1.display();
/*  cout<<"length of the box: "<<box.get_length()<<endl;
  cout<<"width of the box: "<<box.get_width()<<endl;
// show the area..
  cout<<"area of the box is "<<box.get_area()<<endl;*/
return 0;
}

