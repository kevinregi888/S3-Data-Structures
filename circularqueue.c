#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int a[SIZE],front=-1,rear=-1;
void enqueue(){
  if(front==(rear+1)%SIZE)
    printf("Queue is full.\n");
  else{
    int data;
    printf("\nEnter the data: ");
    scanf("%d",&data);
    if(front==-1){
      front++;
      rear++;
      a[rear]=data;
    }
    else{
      if(rear==SIZE-1)
	rear=0;
      else
	rear++;
      a[rear]=data;
    }
  }
}
void dequeue(){
  if (front==-1)
    printf("Queue is empty.\n");
  else{
    printf("%d is deleted.\n",a[front]);
    if (front==rear)
      front=rear=-1;
    else if(front==SIZE-1)
      front=0;
    else
      front++;
  }
}
void display(){
  if (front==-1)
    printf("Queue is empty.\n");
  else if(front<=rear){
    for (int i=front;i<=rear;i++)
      printf("%d ",a[i]);
  }
  else{
    for (int i=front;i<SIZE;i++)
      printf("%d ",a[i]);
    for (int i=0;i<=rear;i++)
      printf("%d ",a[i]);
  }
  printf("\n");
}
void main(){
  int op;
  while(1){
    printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\nEnter your option: ");
    scanf("%d",&op);
    if (op==1)
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
