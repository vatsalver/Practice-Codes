#include<stdio.h>
#include<stdlib.h>
struct queue
{
 int size;
 int front;
 int rear;
 int *s;
};
 void Enqueue(struct queue *qe,int data)
 {
   if (qe->rear+1==qe->size)
   {
      printf("Queue Full");
   }else{ 
    qe->rear++;
    qe->s[qe->rear]=data;
   }
  } 
 int dequeue(struct queue *qe)
 {
  int g;
  
   g=qe->s[qe->front+1];
   
   qe->front++;
  
  return g;
 }
 
 void display(struct queue *qe)
 {
  if(qe->front==-1)
  {
   printf("Queue Empty");
  }
  else
  {
   printf("The elements are: \n");
   for(int i=qe->front+1;i<=qe->rear;i++)
  {
   printf("%d \n",qe->s[i]);
  }
  }
  
 }
 void main()
 {
    int v,n,num,k;
    struct queue qe;
    printf("Enter size of queue \t");
    scanf("%d", &qe.size);
    qe.s=(int *)malloc(qe.size*sizeof(int));
    qe.front=-1; 
    qe.rear=-1;
    //printf("Enter operation to be performed 1.Display 2.Enqueue 3.dequeue 4.Peek \t");
    printf("enter element to queued\t");
    for(n=0;n<=qe.size-1;n++)
    {
    scanf("%d",&v);
    Enqueue(&qe,v);
    }
    k=dequeue(&qe);
    display(&qe);
    printf("removed element is %d", k);
    
 }
 

