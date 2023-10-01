#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int sub_string(char str1[25],char str2[25],int index,int l1,int l2); 

int main()
{
    int l1,l2,index,i;
    char str1[25],str2[25];
    printf("enter the string 1 : " );
    scanf("%s",&str1);
    printf("enter the string 2 : " );
    scanf("%s",&str2);
    printf("enter the index of inserting position : ");
    scanf("%d",&index);
    sub_string(str1,str2,index,l1,l2);
    return 0; 
}
    int sub_string(char str1[25],char str2[25],int index,int l1,int l2){
    int i;
    l1=strlen(str1);
    l2=strlen(str2);
    if(index>l1){
        printf("invalid entry of index");
        exit(0);
    }
    for(i=l1;i>=index;i--)
        str1[i+l2]=str1[i];

    for(i=0;i<l2;i++)
        str1[index+i]=str2[i];

    printf("the final string is : %s",str1);
} 