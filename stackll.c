#include<stdio.h>
#include<stdlib.h>

typedef struct node{
  int data;
  struct node *link;
}node;
node *top=NULL;

void push(int x)
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
    newnode->link=top;
    top=newnode;
  }
}

void pop()
{
  if(top==NULL)
    printf("Empty stack.\n");
  else
  {
    node *temp;
    temp=top;
    top=top->link;
    free(temp);
  }
}

void display()
{
  if(top==NULL)
    printf("Empty stack\n");
  else
  {
    node *temp;
    temp=top;
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
    printf("\n1. PUSH\n2. POP\n3. DISPLAY\n4. EXIT\nEnter your option: ");
    scanf("%d",&op);
    if (op==1)
    {
      printf("Enter data: ");
      scanf("%d",&x);
      push(x);
    }
    else if (op==2)
      pop();
    else if (op==3)
      display();
    else if (op==4)
      break;
    else
      printf("Enter a valid option.\n");
  }
}

