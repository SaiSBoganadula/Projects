#include <stdio.h>

int main()
{
	int arr[5],i=0,j,temp;
	for(i=0;i<5;i++)
	{
		printf("Enter a number :");
		scanf("%d",&arr[i]);
	}
	for(i=0;i<4;i++)
	{
		for(j=i+1;j<=4;j++)
		{
			if (arr[i]>arr[j])
			{
					 temp=arr[i];
					 arr[i]=arr[j];
					 arr[j]=temp;
			}

		}
	}
        printf("The elements in sorted order are : ");
	for(i=0;i<5;i++)
	{
           printf("%d ",arr[i]);
	}
	return 0;
    }
