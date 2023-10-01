#include <stdio.h>
#include <conio.h>

int main()
{
  int arr[5],temp,i,pos=0;
  clrscr();
	for(i=0;i<5;i++)
	{
		printf("Enter a Number :");
		scanf("%d",&arr[i]);
	}
	for(i=1;i<5;i++)
	{
		temp=arr[i];
		pos=i-1;
		while(temp>arr[pos] && pos>=0)
		{
			arr[pos+1]=arr[pos];
			pos--;
		}
		arr[pos+1]=temp;
	}
	for(i=0;i<5;i++)
	{
		printf("The %d is %d\n",i+1,arr[i]);
	}
	return 0;
}
