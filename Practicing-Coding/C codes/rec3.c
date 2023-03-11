#include<stdio.h>
 void fun(int x){
    if(x<=0)
     return ;
      if(x>1000)
      return;
      printf("%d",x);
      
    fun(x*2);
    printf("%d",x);
}
int main(){

    fun(0);
    return 0;
}