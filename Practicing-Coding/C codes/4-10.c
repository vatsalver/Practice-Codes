#include<stdio.h>
int stringindex(char arr[],char arr2[]);
int main()
{   
    
    printf("enter string \n");
    int i,j;
   
    char arr[100];
    char arr2[100];
    char c;
    
    for(i=0;i<100;i++){
        arr[i]=getchar();
        if (arr[i]=='\n')
        {
            break;
        }
        
    }   
    printf("enter string 2 \n");
    for(j=0;j<100;j++){
        arr2[i]=getchar();
        if (arr[i]=='\n')
        {
            break;
        }
        
    } 
   
    c=stringindex(arr,arr2);
    
    printf("%d",c);
   
    return 0;
}
 stringindex(char arr[],char arr2[]){
   int i,result;
   for (i = 0; arr[i]!='\0'; i++)
   {
     for (int j = 0; arr[j]!='\0'; j++)
     {
       if (arr2[i]==arr[j])
     {
       
       result=i;
     }
     }
     
     
   }
   return result;
    
  
   
}