#include<stdio.h>
#include<stdlib.h>
int stack[10],max=10,top=-1;
void push()
{
  if(top+1==max)
    printf("Stack is full.\n");
  else
  {
    int data;
    printf("\nEnter the data: ");
    scanf("%d",&data);
    top++;
    stack[top]=data;
  }
}
void pop()
{
  if(top==-1)
    printf("Empty stack.\n");
  else
    top--;
}
void display()
{
  if(top==-1)
    printf("Empty stack.\n");
  else
    for(int i=top;i>-1;i--)
      printf("%d ",stack[i]);
}
void main()
{
  int op;
  while(1)
  {
    printf("\n1.Push\n2.Pop\n3.Display\n4.Exit\nEnter your option: ");
    scanf("%d",&op);
    if(op==1)
      push();
    else if(op==2)
      pop();
    else if(op==3)
      display();
    else if(op==4)
      exit(0);
    else
      printf("Invalid option!\n");
  }
}
  
      
  
  
  
  
