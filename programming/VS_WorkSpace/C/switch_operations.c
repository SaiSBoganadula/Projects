#include<stdio.h>

int main()
{
    int a,b,ans;
    char operation;
    printf("enter the operation :");
    scanf("%c",&operation);
    printf("enter the value of a :");
    scanf("%d",&a);
    printf("enter the value of b :");
    scanf("%d",&b);
    

    switch(operation){
        case '+' :
            ans=a+b;
            printf("the sum of %d and %d is %d",a,b,ans);
            break;
         case '-' :
         ans=a-b;
         printf("difference between %d and %d is %d",a,b,ans);
         break;
         case '*' :   
         ans=a*b;
         printf("the product of %d and %d is %d",a,b,ans);
         break;
         case '/' :
         ans=a/b;
         printf("%d divided by %d is %d ",a,b,ans);
         break;
         case '%' :
         ans=a%b;
         printf("the modulus of %d and %d is %d",a,b,ans);
         break;
         default:
         printf("invalid entry");

    }
    return 0;
}
