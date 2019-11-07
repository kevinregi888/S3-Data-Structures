#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
  int data;
  struct node *left;
  struct node *right;
}node;
node *root;
void insert(int key)
{
  node *newnode,*ptr,*parent;
  newnode=(node*)malloc(sizeof(node));
  newnode->data=key;
  newnode->left=NULL;
  newnode->right=NULL;
  if(root==NULL)
    root=newnode;
  else
  {
    ptr=root;
    int flag=0;
    while(ptr!=NULL)
    {
      if(key<ptr->data)
      {
	parent=ptr;
	ptr=ptr->left;
      }
      else if(key>ptr->data)
      {
	parent=ptr;
	ptr=ptr->right;
      }
      else
	flag=1;
    }
    if(flag==1)
      printf("\nThe value already exists.");
    else
    {
      if(key>parent->data)
	parent->right=newnode;
      else
	parent->left=newnode;
    }
  }
}
void search(int key)
{
  node *ptr=root;
  int flag=0;
  while(ptr!=NULL)
  {
    if(key<ptr->data)
      ptr=ptr->left;
    else if(key>ptr->data)
      ptr=ptr->right;
    else
    {
      flag=1;
      break;
    }
  }
  if(flag==0)
    printf("\nValue not found.");
  else
    printf("\nValue found!");
}
void delete(int x){
  int flag=0;
  node *t=root,*t1=root;
  while (t!=NULL){
    if(x==t->data){
      flag=1;
      break;
    }
    else if(x<t->data){
      t1=t;
      t=t->left;
    }
    else{
      t1=t;
      t=t->right;
    }
  }
  if (flag==0)
    printf("Number is not present\n");
  else{
    printf("%d is deleted\n",t->data);
    if (t->left==NULL&&t->right==NULL){
      if(t==root){
	root=NULL;
      }
      else{
	if (t1->left==NULL){
	  t1->right=NULL;
	}
	else if ((t1->left)->data==t->data){
	  t1->left=NULL;
	}
	else{
	  t1->right=NULL;
	}
      }
    }
    else if(t->left!=NULL&&t->right==NULL){
      if ((t1->left)->data==t->data){
	t1->left=t->left;
      }
      else{
	t1->right=t->left;
      }
    }
    else if(t->left==NULL&&t->right!=NULL){
      if ((t1->left)->data==t->data){
	t1->left=t->right;
      }
      else{
	t1->right=t->right;
      }
    }
    else{
      int i;
      node *succ;
      succ=t->right;
      while(succ->left!=NULL){
	succ=succ->left;
      }
      i=succ->data;
      delete(succ->data);
      t->data=i;
    }
  }
}
void preorder(node *t)
{
  if (t!=NULL)
  {
    printf("%d ",t->data);
    preorder(t->left);
    preorder(t->right);
  }
}
void inorder(node *t)
{
  if (t!=NULL)
  {
    inorder(t->left);
    printf("%d ",t->data);
    inorder(t->right);
  }
}
void postorder(node *t)
{
  if (t!=NULL)
  {
    postorder(t->left);
    postorder(t->right);
    printf("%d ",t->data);
  }
}
void main()
{
  int c,x;
  printf("\n1.Insert\n2.Search\n3.Delete\n4.Preorder Traversal\n5.Inorder traversal\n6.Postorder traversal\n7.Exit");
  while(1)
  {
    printf("\nEnter choice: ");
    scanf("%d",&c);
    if(c==1)
    {
      printf("\nEnter number to be inserted: ");
      scanf("%d",&x);
      insert(x);
    }
    else if(c==2)
    {
      printf("\nEnter number to be searched: ");
      scanf("%d",&x);
      search(x);
    }
    else if(c==3)
    {
      printf("\nEnter number to be deleted: ");
      scanf("%d",&x);
      delete(x);
    }
    else if(c==4)
    {
      preorder(root);
      printf("\n");
    }
    else if(c==5)
    {
      inorder(root);
      printf("\n");
    }
    else if(c==6)
    {
      postorder(root);
      printf("\n");
    }
    else if(c==7)
      exit(0);
    else
      printf("Invalid choice!\n");
  }
}
      
            
      
    
    
    
    
	
      
