#include<iostream>
using namespace std;
void bubblesort(int a[],int n){
     int temp;
         for(int i=0;i<n;i++){
            for(int j=0;j<n-i-1;j++){
                if (a[j]>a[j+1]){
                   temp=a[j+1];
                   a[j+1]=a[j];
                   a[j]=temp;
                }
            }
         }
         for (int i = 0; i < n; i++)
         {
               cout<<a[i]<<" ";
         }
         
}
int main(){
  int a[10] = {5,9,752,56465,46521,8118,163,1,5321,4};
  int n=10;
  bubblesort(a,n);
}