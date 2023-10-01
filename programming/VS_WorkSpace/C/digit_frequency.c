#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
     char *s;
     s=malloc(1024*sizeof(char));
     int i,k;
     int a[10];
     printf("s:");
     scanf("%s",&s);
     s=realloc(s,strlen(s)+1);
     for(i=0;i<10;i++)
     {
         a[i]=0;
     }
     for(i=0;i<strlen(s)+1;i++){
         k=s[i]-48;
         if(k>=0 && k<10)
         a[k]++;

     }
     for(i=0;i<10;i++)
    {
        printf("%d",a[i]);
    }     
    return 0;

}