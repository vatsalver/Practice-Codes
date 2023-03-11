#include<stdio.h>
#include<stdlib.h>
struct node
{
   int data ;
   struct node *next ; 
}*p=NULL;

 struct node * front(struct node *p ,int data)
  {   
    struct node *t=(struct node *)malloc(sizeof(struct node));
    t->data=data;
    t->next=p;
    return t;
  }
 struct node * position(struct node *p ,int data,int index)
  {   
    struct node *t=(struct node *)malloc(sizeof(struct node));
    struct node *x=p;
    int c=0;
    while (c!=index-1)
     {
        
         x= x->next;
         c++; 
     }
     
      t->data=data;
      t->next=x->next;
      x->next=t;
      return p;
  
    
 }
 struct node * atend(struct node *p ,int data)
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
      return p;
    
  }
 struct node * delete(struct node *p,int pos)
 {
    struct node *t=p;
    struct node *q=p->next;
    int c=0;
    while (c!=pos-1)
    {
        t=t->next;
        q=q->next;
        c++;
    }
    t->next=q->next;
    free(q);
    return p;
}
 struct node *swap(struct node *p ,int pos0,int pos)
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
    
    return p;
 }
void display(struct node *p)
{  
    while(p!=NULL)    
    {
       printf("%d ",p->data); 
       p=p->next;
           }
}
void main() {
    struct node *two;
    struct node *three;
    struct node *four;
    p=(struct node *)malloc(sizeof(struct node));
    two=(struct node *)malloc(sizeof(struct node));
    three=(struct node *)malloc(sizeof(struct node));
    four=(struct node *)malloc(sizeof(struct node));
    p->data=1;
    p->next=two;
    two->data=2;
    two->next=three;
    three->data=3;
    three->next=four;
    four->data=4;
    four->next=NULL;
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