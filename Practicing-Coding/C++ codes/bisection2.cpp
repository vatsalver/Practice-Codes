#include <iostream>
#include<cmath>
using namespace std;
double f(double x){
    return x*x-3;
  }
  double bis(double a,double b,double tol)
  {
    double c=(a+b)/2;  
    while(fabs(f(c))>tol) {
        if(f(a)*f(c)<0) {
            b=c;
        } else {
            a=c;
        }
        c=(a+b)/2;
    }
    return c;
  }
int main() {
   double a=0,b=5,tol=0.0001;
   double root=bis(a,b,tol);
   cout << "The root is:"<<root<<endl;

   return 0;
}