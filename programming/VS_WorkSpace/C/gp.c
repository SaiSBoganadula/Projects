#include <stdio.h>
#include <math.h>
int main()

{
    int x,n,i,sum=0;
    printf("x : ");
    scanf("%d",&x);
    printf("n : ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        sum=sum+pow(x,i);
    }
        printf("output : %d",sum);
    return 0;
    
}
