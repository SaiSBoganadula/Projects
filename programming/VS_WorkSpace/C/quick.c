#include <stdio.h>
#include <conio.h>
#define max 8

int num[max];

void exchange(int left,int right)
{
	int temp;
	temp=num[left];
	num[left]=num[right];
	num[right]=temp;
}

int partition(int p,int low,int high)
{
	int left;
	int right;
	left=low+1;
	right=high;
	while(left<=right)
	{
		if(num[left]<=p)
		{
			left++;
			continue;
		}
		if(num[right]>p)
		{
			right--;
			continue;
		}
		 exchange(left,right);
	 }
		exchange(low,right);
		return right;
}

void quick_sort(int low,int high)
{
	int p_element;
	int p_index;
	if(low>=high)
	{
		return;
	}
	p_element=num[low];
	p_index=partition(p_element,low,high);
	quick_sort(low,p_index-1);
	quick_sort(p_index+1,high);
}

int main()
{
       int n;
       clrscr();
       for(n=0;n<max;n++)
	 {
		printf("Enter a number :");
		scanf("%d",&num[n]);
	 }
	quick_sort(0,n-1);
	for(n=0;n<max;n++)
	{
		printf("%d ",num[n]);
	}
	return 0;
}
