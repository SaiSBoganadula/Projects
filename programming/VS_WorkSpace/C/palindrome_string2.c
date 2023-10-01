#include<stdio.h>
#include<string.h>

int main()

{
    int i,j,l=0,flag=0;
    char str[25],temp[25];
    printf("enter the string : ");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        l++;
    }
    for(i=0;j<l-1,i<j;i++,j--){
        
            if(str[i]!=str[j])
            {
            flag=1;
            break;
            }
        }
            if(flag==1){
                printf("%s is not a palindrome ",str);

            }
            else
            {
                printf("%s is a palindrome",str);
            }       
    return 0;
}