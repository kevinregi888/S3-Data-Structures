#include<stdio.h>

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

int bsearch(int arr[], int f, int l, int key)
{
 if(f<=l)
 {
  int m=(f+l)/2;
  if(arr[m]==key)
   return m;
  else if(arr[m]>key)
   return bsearch(arr,f,m-1,key);
  else
   return bsearch(arr,m+1,l,key);
 }
 return -1;
}
 
void main()
{
 int i,arr[10],s,key;
 printf("\nEnter the size of the array: ");
 scanf("%d",&s);
 printf("Enter the elements:\n");
 for(i=0;i<s;i++)
  scanf("%d",&arr[i]);
 printf("Enter the element to be searched for: ");
 scanf("%d",&key);
 sort(arr,s);
 int flag=bsearch(arr,0,s-1,key);
 if(flag==-1)
  printf("Element not found.\n");
 else
  printf("Element found.\n");
}
