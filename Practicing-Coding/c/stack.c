#include<stdio.h>
#include<stdlib.h>
int g;
struct stack
{
  int size;
  int top;
  int *s;
};
void Push(struct stack *st)
{ 
  if(st->top==st->size-1){
    printf("Stack overflow\n");
  }
  else
  { int k;
    scanf("%d",&k);
    (st->top)=st->top+1;
    st->s[st->top]=k;
  }
}
int POP(struct stack *st)
{ 
  int v;
  if(st->top==-1){
    printf("Stack underoverflow\n");
  }
  else
  {
    v=st->s[st->top];
    
    (st->top)=(st->top)-1;
  }
  return v;
}
void Display(struct stack *st)
{ 
  int i=0;
  if(st->top==-1)
  {
   printf("Stack underoverflow\n");
  }
  else{
    for(i=st->top;i>=0;i--)
    {
    printf("%d \n",st->s[i]);
   }
    }
}
int peek(struct stack *st)
{
  int j;
  j=st->top;
  return j;
}
void main()
{
    int v,n=0,num,k;
    struct stack st;
    printf("Enter size of stack \t");
    scanf("%d", &st.size);
    st.s=(int *)malloc(st.size*sizeof(int));
    st.top=-1; 
    
    
     while(num!=5){
        printf("Enter operation to be performed 1.Display 2.Push 3.POP 4.Peek 5.Exit \t");
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
   
}