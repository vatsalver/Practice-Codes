#include<stdio.h>
void main(){
   int x=10;
   int *ptr;
   ptr=&x;
   *ptr=*ptr+10;
   printf("%d \n",x );
   printf("%d",&x);

}