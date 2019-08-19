#include<stdio.h>
void isort(int arr[],int n)
{
  int i,j,key;
  for(i=1;i<n;i++)
  {
    key=arr[i];
    j=i-1;
    while(j>=0 && arr[j]>key)
    {
      arr[j+1]=arr[j];
      j--;
    }
    arr[j+1]=key;
  }
}

void main()
{
 int i,arr[10],n;
 printf("\nEnter the size of the array: ");
 scanf("%d",&n);
 printf("Enter the elements:\n");
 for(i=0;i<n;i++)
   scanf("%d",&arr[i]);
 isort(arr,n);
 printf("\nThe sorted array is ");
 for(i=0;i<n;i++)
   printf("%d ",arr[i]);
 printf("\n");
}
