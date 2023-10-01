#include<stdio.h>
#include<string.h>

int main()
{
   char str[30], t[20];
   char *found;
   int i,characters=0,words=1,lines=1;
   puts("Enter the first string: \n");
   gets(str);
   puts("Enter the string to be searched: \n");
   gets(t);
   found = strstr(str, t);
   if(found)
   {
          printf("Second String is found in the First String at %d position.\n\n", found - str + 1);
   }
   else
   {
          printf("-1");
   }
   for(i=0;str[i]!='\0';i++){
       characters++;
    if(str[i] == ' ')
      {
         words++;
      }    
   }
      printf("The number of characters in the string are %d\n\n", characters);
      printf("No of Words in a string is %d\n\n",words);
      for(i=0;i<characters;i++)
      if(str[i]=='\n' || str[i]=='\0'){
          lines++;
      }
      printf("the number of lines in a given string is %d\n\n",lines);
   return 0;
}