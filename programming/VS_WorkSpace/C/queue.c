#include <stdio.h>
#include <conio.h>
#include<stdlib.h>
#include <process.h>
#define max 5

int main()
{
  int queue[max],front=-1,rear=-1,data,ch=0,i;
  while(ch!=4)
  {
    printf("1.Insert\n");
    printf("2.Delete\n");
    printf("3.Traverse\n");
    printf("4.Exit\n");
    printf("Enter your choice [1-4]:");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1:
	   if(rear>=max-1)
	     printf("queue is full\n");
	   else
	   {
	     printf("enter the data item : ");
	     scanf("%d",&data);
	     queue[++rear]=data;
	     if(rear==0)
	       front=0;
	     printf("data inserted successfully\n");
	   }
	   break;
     case 2:
	   if((front==-1 && rear==-1)||front>rear){
	    printf("queue is empty\n");}
	   else
	    printf("you have removed %d\n",queue[front++]);
	   break;
     case 3:
	   if((front==-1 && rear==-1)||front>rear){
	    printf("queue is empty\n");
	   }
	   else
	   {
	     for(i=front;i<=rear;i++)
	     {
	      printf("%d ",queue[i]);
	     }
	     printf("\n");
	   }
	   break;
     case 4:
	  exit(0);
    }
  }
}








