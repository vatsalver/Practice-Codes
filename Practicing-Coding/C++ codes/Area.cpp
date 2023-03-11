#include<iostream>
using namespace std;
class Area{
  public:
   float triangle(float a,float b){
         return 0.5*a*b;
   };
   float square(float a){
         return a*a;
   };
   float trapezium(float a ,float b,float c){
         return (((a+b)*0.5)*c);
   };
   float rhombus(float a ,float b){
         return 0.5*(a+b);
   }
};
int main(){
    int c=0;
    float a,b,d,k;
    Area o;
    
    start:
    cout<<"Enter for area 1:Triangle 2:Square 3:Trapezium 4:Rhombus 5:Exit"<<endl;
    cout<<"Enter Choice:"<<endl;
    cin>>c;

        switch (c)
        {
        case 1:
            cout<<"enter base and height of triangle"<<endl;
            cin>>a>>b;
            k=o.triangle(a,b);
            cout<<"area is: "<<k<<endl;
            break;
        case 2:
            cout<<"enter base of sqaure"<<endl;
            cin>>a;
            k=o.square(a);
            cout<<"area is: "<<k<<endl;
            break;
        case 3:
            cout<<"enter parallel sides and height between them of trapezium"<<endl;
            cin>>a>>b>>d;
            k=o.trapezium(a,b,d);
            cout<<"area is: "<<k<<endl;
            break;
        case 4:
            cout<<"enter diagonals of rhombus"<<endl;
            cin>>a>>b;
            k=o.rhombus(a,b);
            cout<<"area is: "<<k<<endl;
            break;
        case 5:
            return 0;
        default:
            cout<<"Invalid value"<<endl;
            break;
        }
    
    goto start;
    return 0;
    
}
