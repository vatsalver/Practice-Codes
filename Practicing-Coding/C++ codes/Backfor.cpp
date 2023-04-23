#include<iostream>
using namespace std;
int fact(int n)
{
    int i=1,f=1;
    while(i<=n)
    {
        f=f*i;
        i++;
    }
    return f;
}
float u_cal(float u,int n)
{
    float temp=u;
    for(int i=1;i<n;i++)
        temp=temp*(u+i);
    return temp;
}
int main()
{
    int n,i,j;
    float x[10],y[10][10],sum,p,u;
    cout<<"Enter the value of n:\n";
    cin>>n;
    cout<<"Enter the values in form x,y:\n";
    for(i=0;i<n;i++)
    {
        cin>>x[i]>>y[i][0];
    }
    for(j=1;j<n;j++)
    {
        for(i=n-1;i>=j;i--)
        {
            y[i][j]=y[i][j-1]-y[i-1][j-1];
        }
    }
    
    // Printing the table
    cout << "\nBackward Difference Table:\n";
    for (i = n - 1; i >= 0; i--) {
        cout << x[i] << "\t";
        for (j = 0; j <= i; j++)
            cout << y[i][j] << "\t";
        cout << endl;
    }
    
    cout<<"Enter the value of x for which you want the value of y:\n";
    cin>>p;
    sum=y[n-1][0];
    u=(p-x[n-1])/(x[1]-x[0]);
    for(i=n-2;i>=0;i--)
    {
        sum=sum+(u_cal(u,i+1)*y[i][n-i-1])/fact(n-i-1);
        u=(u*(p-x[i]))/(x[n-i-2]-x[i]);
    }
    cout<<"The required value of y is "<<sum<<"\n";
}
