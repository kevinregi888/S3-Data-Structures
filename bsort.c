#include<stdio.h>
void bsort(int arr[], int n)
{
  int i,j,temp;
  for(i=0;i<n;i++)
    for(j=0;j<n-i-1;j++)
      if(arr[j]>arr[j+1])
      {
       temp=arr[j];
       arr[j]=arr[j+1];
       arr[j+1]=temp;
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
  bsort(arr,n);
  printf("\nThe sorted array is ");
  for(i=0;i<n;i++)
    printf("%d ",arr[i]);
  printf("\n");
}
   
