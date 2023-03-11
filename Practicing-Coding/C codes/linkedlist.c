#include<stdio.h>
#include<stdlib.h>
struct node
{
   int data ;
   struct node *next ; 
};

void display(struct node *p)
{  
    while(p!=NULL)    
    {
       printf("%d ",p->data); 
       p=p->next;
           }
}
void main() {
    struct node *p=NULL ,*t,*last ;
    p = (struct node *)malloc(sizeof(struct node));
    p->data=54;
    p->next=t;
    last=p;
    for(int i=1;i<6;i++)
    {
        t = (struct node *)malloc(sizeof(struct node));
        scanf("%d" , &t->data);
        t->next=NULL;        
        last->next=t;        
        last=t;
        
    }
    display(p);

}