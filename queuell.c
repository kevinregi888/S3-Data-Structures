#include<stdio.h>
#include<stdlib.h>

typedef struct node{
  int data;
  struct node *link;
}node;
node *front=NULL,*rear=NULL;

void enQueue(int x)
{
  node *newnode;
  newnode=(node*)malloc(sizeof(node));
  if (newnode==NULL)
  {
    printf("\nInsufficient memory\n");
    exit(0);
  }  
  else
  {
    newnode->data=x;
    newnode->link=NULL;
    if(front==NULL)
    {
      front=rear=newnode;
    }
    else
    {
      rear->link=newnode;
      rear=newnode;
    }
  }
}

void deQueue()
{
  if(front==NULL)
    printf("Empty queue.\n");
  else
  {
    node *temp;
    temp=front;
    front=front->link;
    free(temp);
  }
}

void display()
{
  if(front==NULL)
    printf("Empty queue\n");
  else
  {
    node *temp;
    temp=front;
    while(temp!=NULL)
    {
      printf("->%d",temp->data);
      temp=temp->link;
    }
    printf("\n");
  }
}
  

void main()
{
  int op,x;
  while (1)
  {
    printf("\n1. enQUEUE\n2. deQUEUE\n3. DISPLAY\n4. EXIT\nEnter your option: ");
    scanf("%d",&op);
    if (op==1)
    {
      printf("Enter data: ");
      scanf("%d",&x);
      enQueue(x);
    }
    else if (op==2)
      deQueue();
    else if (op==3)
      display();
    else if (op==4)
      break;
    else
      printf("Enter a valid option.\n");
  }
}
