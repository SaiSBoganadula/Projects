#include<stdio.h>

void bubblesort(int [],int);
void swap(int[],int[]);
int main()
{
  int array[100],i,n;
  printf("enter the number of elements : ");
  scanf("%d",&n);
  for(i=0;i < n;i++)
  {
    printf("Enter a number : ");
    scanf("%d",&array[i]);
  }
  bubblesort(array,n);
  return 0;
}

void bubblesort(int array[],int n)
{
  int i,j,flag;
  for(i=0;i<n;i++)
  {
    flag=0;
    for(j=0;j<n-i-1;j++)
    {
      if(array[j]>array[j+1]);
      swap(array[j],array[j+1]);
    }
  }
  printf("sorted array is :");
  for(i=0;i<n;i++)
  printf("%d\n",array[i]);
}

void swap(int a[] ,int b[])
{
  int temp,i;
  temp = a[i];
  a[i]=b[i];
  b[i]=temp;
}