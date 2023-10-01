#include<stdio.h>
#include<string.h>

int main()

{
    int l=0;
    char str[25],temp[25];
    printf("enter the string : ");
    scanf("%s",&str);
    strcpy(temp,str);
    strrev(str);
    if(strcmp(str,temp)==0){
        printf("the string %s is a palindrome",str);
    }
    else
    printf("%s not a palindrome",str);
    return 0;
}