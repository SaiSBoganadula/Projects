#include <stdio.h>

int  enterData(int a[][10], int b[][10], int r1, int c1, int r2, int c2);
int  multiplyMatrices(int a[][10], int b[][10], int result[][10], int r1, int c1, int r2, int c2);
int  display(int result[][10], int r1, int c2);
int main()
{
	int a[10][10], b[10][10],result[10][10], r1, c1, r2, c2, i, j, k;
    printf("Enter rows of A: ");
	scanf("%d ", &r1);
    printf("Enter columns of A: ");
	scanf("%d ", &c1);
    printf("Enter rows of B: ");
	scanf("%d ", &r2);
    printf("Enter columns of B: ");
	scanf("%d ", &c2);
    while (c1 != r2)
	{
		 printf("Error! column of first matrix not equal to row of second.\n");
         printf("Enter rows of A: ");
	     scanf("%d ", &r1);
         printf("Enter columns of A: ");
	     scanf("%d ", &c1);
         printf("Enter rows of B: ");
	     scanf("%d ", &r2);
         printf("Enter columns of B: ");
	     scanf("%d ", &c2);
    }     
        enterData(a,b,r1,c1,r2,c2);
        multiplyMatrices(a,b,result,r1,c1,r2,c2);
        display(result,r1,c2);
        return 0;
}
        int  enterData(int a[][10], int b[][10], int r1, int c1, int r2, int c2)
        {
            int i,j;
            printf("\n enter the value of matrix A: \n");
            for(i=0;i<r1;++i){
                for(j=0;j<c1;++j){
                    printf(" enter the value of a%d%d ",i+1,j+1);
                    scanf("%d",&a[i][j]);
                }
            }
            for(i=0;i<r2;i++){
                for(j=0;j<c2;j++){
                    printf(" enter the value of b%d%d ",i+1,j+1);
                    scanf("%d",&b[i][j]);
                }
            }
        }
        int  multiplyMatrices(int a[][10], int b[][10], int result[][10], int r1, int c1, int r2, int c2)
        {
            int i,j,k;
            for(i=0;i<r1;i++){
                for(j=0;j<c2;j++){
                    result[i][j]=0;
                }
            }
            for(i=0;i<r1;i++){
                for(j=0;j<c2;j++){
                    for(k=0;k<r2;k++){
                        result[i][j]=a[i][k]*b[k][j];
                    }
                }
            }
        }
        int  display(int result[][10], int r1, int c2){
            int i,j;
            printf("\n Output Matrix : \n");
            for(i=0;i<r1;i++){
                for(j=0;j<c2;j++){
                    printf("%d\t", result[i][j]);
			    if(j == c2 - 1)
				    printf("\n\n");
                }
            }
        }
