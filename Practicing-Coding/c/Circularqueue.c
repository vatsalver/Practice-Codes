#include<stdio.h>
#include<stdlib.h>
struct queue
{
 int size;
 int front;
 int rear;
 int *s;
};
int v;
 void enqueue(struct queue *qe)
 { 
   if (qe->front==-1)
  {
     qe->front++;
     printf("enter element to queued\t");
     scanf("%d",&v);
      qe->s[qe->rear]=v;
      
            
  }else if((qe->rear+1)%qe->size==qe->front)
  {
     printf("Queue Full \n");
  }else
  {
    printf("enter element to queued\t");
      scanf("%d",&v);
      qe->rear=((qe->rear)+1)%qe->size;
      qe->s[qe->rear]=v;
      
  }
 } 
 void dequeue(struct queue *qe)
 {
   if(qe->front==-1)
  {
   printf("Queue Empty \n");
  }else{
   int g;
   g=qe->s[qe->front];
   qe->front=((qe->front)+1)%qe->size;
   printf("the deleted element is %d \n" ,g);
    
 }
 }
 void display(struct queue qe)
 {
  if(qe.front==-1)
  {
   printf("Queue Empty \n");
  }
  else
  { 
    if (qe.front==qe.rear)
    {
      printf("%d \n",qe.s[qe.front]);
    }
    else
    {
     printf("%d \n",qe.s[qe.front]);
     
    
  for(int i=(qe.front)+1;i!=qe.front;i=(i+1)%qe.size)
  {
   printf("%d \n",qe.s[i]);
   
  }
  
  }
  
 }
 }
 void main()
 {
    int v,k;
    struct queue qe;
    printf("Enter size of queue \t");
    scanf("%d", &qe.size);
    qe.s=(int *)malloc(qe.size*sizeof(int));
    qe.front=-1; 
    qe.rear=0;
    while(k!=4){
    printf("Enter operation to be performed 1.Display 2.Enqueue 3.Dequeue 4.Exit \t");
    scanf("%d",&k);
    switch (k)
    {
      case 1 :
        display(qe);
        break;
      case 2 :
        enqueue(&qe);
        break;
      case 3 :
        dequeue(&qe);
        break;
      case 4 :
        printf("Thank You for using my program");
        break;
      default :
        printf("Invalid Input");
        break;
    }
    }  
 }
 

