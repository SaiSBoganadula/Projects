#include<stdio.h>

int func(int i,int j);
int main()

{
    int i,j,n,space;
    printf("enter the limit : ");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        for(space=1;space<=n-i;space++)
            printf(" ");
        for(j=1;j<=i;j++){
            printf("%d ",func(i,j) );
        }
        printf("\n");
    }
    return 0;
}
int func(int i,int j){
    int n;
    if(j==1 || i==j)
    return 1;
    else 
        return func(i-1,j-1) + func(i-1,j);
}

