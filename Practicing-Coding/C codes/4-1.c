#include<stdio.h>

int main()
{   
    char ar[100];
    printf("enter string");
    int i=0;
    do
    {
        ar[i]=getchar();

    } while (ar[i]!='\t');
    
    {
        i++;
    }
    
    
    
    return 0;
}
