#include<stdio.h>
void main(){
    long nc;
    nc=0;
    while (getchar()!=EOF)
    {
        ++nc;
        
    }
    printf("%1d" , nc );
}