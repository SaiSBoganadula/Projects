#include <stdio.h>
#include <conio.h>

int main()
{
	int a[5],b[3],c[8],ca,cb,cc,i;
	clrscr();
	printf("For First Array Sorted Data\n");
	for(i=0;i<5;i++)
	{
		printf("Enter a Number :");
		scanf("%d",&a[i]);
	}
	printf("For Second Array Sorted Data\n");
	for(i=0;i<3;i++)
	{
		printf("Enter a Number :");
		scanf("%d",&b[i]);
	}
	ca=0;
	cb=0;
	cc=0;
	while(ca<=4 && cb<=2)
	{
		if(a[ca]<=b[cb])
		{
			c[cc]=a[ca];
			ca++;
			cc++;
		}
		else
		{
			c[cc]=b[cb];
			cc++;
			cb++;
		}
	}
	if(ca>4)
	{
		while(cb<=2)
		{
			c[cc]=b[cb];
			cc++;
			cb++;
		}
	}

	if(cb>2)
	{
		while(ca<=4)
		{
			c[cc]=a[ca];
			cc++;
			ca++;
		}
	}
	for(i=0;i<8;i++)
	{
		printf("The %d is %d\n",i+1,c[i]);
	}
 return 0;
}
