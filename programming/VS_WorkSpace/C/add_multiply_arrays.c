#include <stdio.h>
int enterData(int a[][10], int b[][10],int r,int c);
int AddMatrices(int a[][10], int b[][10], int sum[][10], int r, int c);
int display(int sum[][10],int r,int c);

int main() {
    int a[10][10], b[10][10], sum[10][10],i,j,r,c;
    printf("Enter the number of rows : ");
    scanf("%d", &r);
    printf("Enter the number of columns : ");
    scanf("%d", &c);
    enterData(a,b,r,c);
    AddMatrices(a,b,sum,r,c);
    display(sum,r,c);
    return 0;
}
int enterData(int a[][10], int b[][10],int r,int c)
{
    int i,j;
    printf("\nEnter elements of 1st matrix:\n");{
    for (i = 0; i < r; ++i){
        for (j = 0; j < c; ++j){ 
            printf("Enter element a : %d%d: ", i+1, j+1);
            scanf("%d", &a[i][j]);
        }
    }
}

    printf("Enter elements of 2nd matrix:\n");{
    for (i = 0; i < r; ++i){
        for (j = 0; j < c; ++j) {
            printf("Enter element b: %d%d ", i+1,j+1);
            scanf("%d", &b[i][j]);
        }    
    }   
}
}
int AddMatrices(int a[][10], int b[][10], int sum[][10], int r, int c){
    int i,j;
    for (i = 0; i < r; ++i){
        for (j = 0; j < c; ++j){ 
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
}

int display(int sum[][10],int r,int c){
    int i,j;
    printf("\nSum of two matrices: \n");
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j) {
            printf("%d\t", sum[i][j]);
            if (j == c - 1) {
                printf("\n\n");
            }
        }
   }