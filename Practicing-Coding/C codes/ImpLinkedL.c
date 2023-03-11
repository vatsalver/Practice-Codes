#include<stdio.h>
#include<stdlib.h>
struct node
{
   int data ;
   struct node *next ; 
}*p=NULL;

 void front(struct node *p ,int data)
  {   
    struct node *t=(struct node *)malloc(sizeof(struct node));
    t->data=data;
    t->next=p;
    p=t;
    
  }
 void position(struct node *p ,int data,int index)
  {   
    struct node *t=(struct node *)malloc(sizeof(struct node));
    struct node *x=p;
    int c=1;
     
    while (c!=index-1)
     {
         x= x->next;
         c++; 
     }
     
      t->data=data;
      t->next=x->next;
      x->next=t;
      
  
    
 }
 void atend(struct node *p ,int data)
  {   
    struct node *t=(struct node *)malloc(sizeof(struct node));
    t->data=data;
    struct node *x=p;
     while (x->next!=NULL)
     {
        x= x->next;
     }
      t->next=NULL;
      x->next=t;    
  }
 void delete(struct node *p,int pos)
 {
    if (p==NULL)
    {
        printf("Linked List Empty");
    }
    else
    {
    struct node *t=p;
    struct node *q=p->next;
    int c=1;
    while (c!=pos-1)
    {
        t=t->next;
        q=q->next;
        c++;
    }
    int v=q->data;
    t->next=q->next;
    free(q);
    printf("deleted element is %d",v);
    }
}
 struct node *swap(struct node *p ,int pos0,int pos)
 {  
    if (p==NULL)
    {
        printf("Linked List Empty");
    }
    else
    {
    struct node *temp;
    struct node *t=p;
    struct node *q=p->next;
    struct node *l=p;
    struct node *m=p->next;
    int c=0,j=0;
    while(c!=pos0-1)
    {
        t=t->next;
        q=q->next;
        c++;
        
    }
    while (j!=pos-1)
    {
        l=l->next;
        m=m->next;
        j++;
    }
    temp=t->next;
    t->next=l->next;
    l->next=temp;
    temp=q->next;
    q->next=m->next;
    m->next=temp;
    
    
    }
 }
void display(struct node *p)
{   if (p==NULL)
    {
        printf("Linked List Empty");
    }
    else
    {
    while(p!=NULL)    
    {
       printf("%d ",p->data); 
       p=p->next;
           }
    }
}
void main() {
    while(num!=6){
        printf("Enter operation to be performed for insert 1.at front 2.at position 3.at end \n For 4.Delete \n For 5.Display \t 6.Exit");
        scanf("%d",&num);
     switch (num)
    {
      case 1 :
        Display(&st);
        break;
      case 2 :
        Push(&st);
        break;
      case 3 :
        v=POP(&st);
        printf("poped element is= %d \n",v);
        break;
      case 4 :
        g=peek(&st);
        printf("The top value is=%d \n",g);
        break;
      case 5 :
        printf("Thank You");
        break;
      default :
        printf("Invalid Input");
        break;
    }
      }
   
    
    printf("Linked list before insertion\n");
    display(p);
    p = front(p, 56);
    p= position(p, 6, 4);
    p= atend(p, 9);
    printf("\nLinked list after insertion\n");
    display(p);
    p=delete(p,5);
    printf("\nLinked list after deletion\n");
    display(p);
    printf("\nLinked list after swap\n");
    p=swap(p,2,3);
    display(p);

}