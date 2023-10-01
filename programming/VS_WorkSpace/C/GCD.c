#include<stdio.h>
 int GCD(int ,int);
 int main(void)     
 {
     int a,b;
     printf("a:");
     scanf("%d",&a);
     printf("b:");
     scanf("%d",&b);
     printf("GCD : %d",GCD(a,b)) ;   
     
     
      return 0;
 }
     int  GCD(int a,int b){
     if(a==0)
     return b;
     else if(b==0)
     return a;
     else
     {
        GCD( b,a%b);
     }
}