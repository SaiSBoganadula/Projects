#include<stdio.h>
int towers(int, char, char, char);
 int main()
 {
     int n;
     char src='s',aux='a',dest='d';
     printf("enter the number of rods : " );
     scanf("%d",&n);
     towers(n,src,aux,dest);
     return 0;
 }
      int towers(int n,char src,char aux,char dest){
     if(n==1){
         printf("move disk from %c to %c\n", src,dest);
     }
     else
     {
         towers(n-1,src,dest,aux);
         towers(1,src,aux,dest);
         towers(n-1,aux,src,dest);
     }
    }
