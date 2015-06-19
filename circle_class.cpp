#include<iostream>
#include<cmath>
using namespace std;

//Circle class declaration..
class Circle
{ public:
   void set_radius(double r)
   { radius = r;}
  double get_area(double radius)
  { return 3.14 * pow(radius, 2);}
 private:
   double radius;
};

int main()
{ Circle cir1, cir2;
//get radius for two different circles..
cir1.set_radius(2.5);
cir2.set_radius(4.3);
//get area for each circle...

cout<< "area of circle1 is "<<cir1.get_area(2.5)<<endl;
cout<< "area of circle2 is "<<cir2.get_area(4.3)<<endl;

return 0;
}
