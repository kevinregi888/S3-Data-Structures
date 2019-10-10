#include<stdio.h>
#include<stdlib.h>
#define max 5
int queue[max],front=-1,rear=-1;
void enqueue()
{
  if(rear==max-1)
    printf("Queue is full.\n");
  else
  {
    int data;
    printf("\nEnter the data: ");
    scanf("%d",&data);
    if(front==-1)
    {
      front++;
      rear++;
    }
    else
      rear++;
    queue[rear]=data;
  }
}
void dequeue()
{
  if(front==-1)
    printf("Queue is empty.\n");
  else
  {
    printf("%d is deleted.\n",queue[front]);
    if(front==rear)
      front=rear=-1;
    else
      front++;
  }
}
void display()
{
  if(front==-1)
    printf("Queue is empty.\n");
  else
  {
    for(int i=front;i<=rear;i++)
      printf("%d ",queue[i]);
    printf("\n");
  }
}
void main()
{
  int op;
  while(1)
  {
    printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\nEnter your option: ");
    scanf("%d",&op);
    if(op==1)
      enqueue();
    else if(op==2)
      dequeue();
    else if(op==3)
      display();
    else if(op==4)
      exit(0);
    else
      printf("Invalid option!\n");
  }
}
