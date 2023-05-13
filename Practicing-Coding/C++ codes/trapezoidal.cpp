#include<iostream>
using namespace std;

float fun(float a)
{
	return 1/a;
}

void simpson(float a,float b ,int n)
{
	float h=(b-a)/n;
	int i;
	float x,y,sum=0;
	for(i=1;i<n;i++)
	{
		x=a+i*h;	
		sum=sum+2*fun(x);
	
	}
	y=h/2*(fun(a)+fun(b)+sum);
	cout<<"The value is "<<y;
}
int main(){
	float a,b;
	int n;
	cout<<"Enter the value of n "<<endl;
	cin>>n;
	cout<<"Enter the value of a and b "<<endl;
	cin>>a>>b;
	simpson(a,b,n);
}
