#include<stdio.h>
int main()
{
    int i,j,n,space;
    printf("enter the limit : ");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        for(space=1;space<=n-i;space++)
            printf(" ");
        for(j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
