#include <iostream>
#include <string>

using namespace std;

class Circle {
  public:
  	Circle(double r = 1.0, string c = "red") {
      radius = r;
      color = c;
   }

   double getRadius() {  // Member function (Getter)
      return radius;
   }
   
   double getArea() {    // Member function
      return radius*radius*3.1416;
   }
  private:
    double radius;
     string color;
};  
int main() {
   Circle c1(1.2, "red");
   cout << "Radius=" << c1.getRadius() << " Area=" << c1.getArea() << "\n";
}