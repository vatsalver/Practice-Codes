#include<stdio.h>
 int main()
 {
  int a;
  while(a<10)
  {
    printf("enter the number \t");
    scanf("%d" ,&a);
    if (a==0)
     printf("hello \n")    ;
     continue;
  }
  return 0;
 }
 