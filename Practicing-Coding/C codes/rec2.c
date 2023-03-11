#include<stdio.h>
 void fun(int x){
    if(x==0)
     return ;
    fun(x/2);
    printf("%d",x%2);
}
int main(){

    fun(2);
    return 0;
}
