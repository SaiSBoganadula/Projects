#include <stdio.h>
int main()
{
    int arr[6]={1,12,31,22,3,9};
    int i,max=arr[0],min=arr[0];    
    for(i=0;i<6;i++)
    { 
        if (arr[i] < min){
            min=arr[i]; 
            printf("%d ",min);
        }
    }        
     for(i=0;i<6;i++)
    {
        if(arr[i]>max){
            max=arr[i];
            
        }
    }    
    printf(" %d is the smallest and %d is the largest in the array",min,max);
    return 0;
}
