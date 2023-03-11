#include <iostream>
using namespace std;
class CalculateArea {
public:
  double area(double side) {
    return side * side;
  }
  double area(double length, double width) {
    return length * width;
  }
  double area(double base, double height, int type) {
    return (base * height) / 2;
  } 
  double area(double base1, double base2, double height) {
    return ((base1 + base2) * height) / 2;
  }
};
int main() {
  CalculateArea obj;
  cout << "Area of square with side = 5 is " << obj.area(5.0) << endl; 
  cout << "Area of rectangle with length = 10 and width = 8 is " << obj.area(10.0,8.0) << endl;
  cout << "Area of triangle with base =12 and height =9 is " << obj.area(12.0,9.0,1) << endl;
   cout << "Area of trapezium with bases =15 and10 and height =7 is " << obj.area(15.0,10.0,7.0) << endl; 
   return 0;
}