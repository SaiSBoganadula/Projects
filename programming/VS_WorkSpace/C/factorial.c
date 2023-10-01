#include <stdio.h>
int main ()
{
    int i,fact=1;
    printf("enter the number : ");
    scanf("%d ",&i);
    while(i>=1){
        fact*=i;
        i--;
    }
    printf("the factorial is %d",fact);
    return 0;
}