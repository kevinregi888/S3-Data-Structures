#include<stdio.h>
void ssort(int arr[],int n)
{
  int i,j,pos,temp;
  for(i=0;i<n-1;i++)
  {
    pos=i;
    for(j=i+1;j<n;j++)
    {
      if(arr[pos]>arr[j])
	pos=j;
    }
    temp=arr[i];
    arr[i]=arr[pos];
    arr[pos]=temp;
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
  ssort(arr,n);
  printf("\nThe sorted array is ");
  for(i=0;i<n;i++)
    printf("%d ",arr[i]);
  printf("\n");
}
   
