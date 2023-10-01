#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main ()

{
    int i,pos,n,l;
    char str[25];
    puts("enter the string : ");
    gets(str);
    printf("enter the position from where you would like to delete : \n");
    scanf("%d",&pos);   
    printf("how many digits would you like to delete : \n");
    scanf("%d",&n);
    l=strlen(str);
    for(i=n+pos;i<l;i++){
        str[i-n]=str[i];
    }
    str[i-n]='\0';
    printf("final string : %s",str);
    return 0;

}