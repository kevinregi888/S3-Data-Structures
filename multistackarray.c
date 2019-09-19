#include<stdio.h>
#include<stdlib.h>
int stack[10],top1=-1,top2=10,max=10;
void push1()
{
  if(top1+1==max||top1+1==top2)
    printf("No space in Stack1.\n");
  else
  {
    int data;
    printf("\nEnter the data: ");
    scanf("%d",&data);
    top1++;
    stack[top1]=data;
  }
}
void push2()
{
  if(top2==0||top2-1==top1)
    printf("No space in Stack2.\n");
  else
  {
    int data;
    printf("\nEnter the data: ");
    scanf("%d",&data);
    top2--;
    stack[top2]=data;
  }
}
void pop1()
{
  if(top1==-1)
    printf("Stack1 is empty.\n");
  else
    top1--;
}
void pop2()
{
  if(top2==max)
    printf("Stack2 is empty.\n");
  else
    top2++;
}
void display1()
{
  if(top1==-1)
    printf("Stack1 is empty.\n");
  else
    for(int i=top1;i>-1;i--)
      printf("%d ",stack[i]);
}
void display2()
{
  if(top2==max)
    printf("Stack2 is empty.\n");
  else
    for(int i=top2;i<max;i++)
      printf("%d ",stack[i]);
}
void main()
{
  int op;
  while(1)
  {
    printf("\n1.Push into Stack1\n2.Push into Stack2\n3.Pop from Stack1\n4.Pop from Stack2\n5.Display Stack1\n6.Display Stack2\n7.Exit\nEnter your option: ");
    scanf("%d",&op);
    if(op==1)
      push1();
    else if(op==2)
      push2();
    else if(op==3)
      pop1();
    else if(op==4)
      pop2();
    else if(op==5)
      display1();
    else if(op==6)
      display2();
    else if(op==7)
      exit(0);
    else
      printf("Invalid option!\n");
  }
}
  
