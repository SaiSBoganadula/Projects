#include <stdio.h>
 int main()
 {
     int i=0,j=1,k,count,x;
     printf("ENTER NO.OF TERMS :");
     scanf("%d",&count);
     
         for(k=0;k<count;k++)
         {

             if(k<=1){
                 x=i;
             }else{
             x=i+j;
             i=j;
             j=x;
             }

         printf("%d ",x);}

     return 0;

 }