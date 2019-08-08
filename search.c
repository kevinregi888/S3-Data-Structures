#include<stdio.h>
void lsearch(int arr[], int s, int key)
{
 int i,flag=0;
 for(i=0;i<s;i++)
  if(key==arr[i])
  {
   flag=1;
   break;
  }
 if(flag==1)
  printf("Element found at position %d\n",i+1);
 else
  printf("Element not found\n");
}

void sort(int arr[], int s)
{
 int i,j,temp;
 for(i=0;i<s-1;i++)
  for(j=i+1;j<s;j++)
   if(arr[i]>arr[j])
   {
    temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
   }
}

void bsearch(int arr[], int s, int key)
{
 int f=0,l=s-1,m,i,j,flag=0;
 while(f<=l)
 {
  m=(f+l)/2;
  if(arr[m]==key)
  {
   flag=1;
   break;
  }
  else if(arr[m]>key)
   l=m-1;
  else
   f=m+1;
 }
 if(flag==1)
  printf("Element found\n");
 else
  printf("Element not found\n");
}
 
void main()
{
 int i,arr[10],s,key,op;
 printf("\nEnter the size of the array: ");
 scanf("%d",&s);
 printf("Enter the elements:\n");
 for(i=0;i<s;i++)
  scanf("%d",&arr[i]);
 printf("Enter the element to be searched for: ");
 scanf("%d",&key);
 printf("Enter the searching method:\n1.Linear Search\n2.Binary Search\n");
 scanf("%d",&op);
 if(op==1)
  lsearch(arr,s,key);
 else if(op==2)
 {
  sort(arr,s);
  bsearch(arr,s,key);
 }
 else
  printf("\nEnter a valid option.");
}
