#include<iostream>
using namespace std;
int fac;
int fact(int n){
    
    if(n==1||n==0){

        return 1;
    }
    fac=n*fact(n-1);
    return fac;
}
int main(){
    int j = fact(3);
    cout<<j;
}