
/* program to implemenet bubble sort */

#include <stdio.h>
#include <conio.h>

int main()
{
  int arr[5],i,j,temp;
  for(i=0;i<5;i++)
  {
    printf("enter an element : ");
    scanf("%d",&arr[i]);
  }
  for(i=4;i>=0;i--)
  {
    for(j=0;j<i;j++)
    {
      if(arr[j]>arr[j+1])
      {
	 temp=arr[j];
	 arr[j]=arr[j+1];
	 arr[j+1]=temp;
      }
    }
  }
  printf("The sorted array is : ");
  for(i=0;i<5;i++)
  {
    printf("%d ",arr[i]);
  }
  return 0;
}
