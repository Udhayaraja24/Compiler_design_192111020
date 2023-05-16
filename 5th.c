#include <stdio.h>
int main()
{
    char str[100];
    int newline=0,characters=0; 
    scanf("%[^~]",&str);
    for(int i=0;str[i]!='\0';i++)
     { 
        
         if(str[i] == '\n')
         {
             newline++;
         }
         else if(str[i] != ' ' && str[i] != '\n'){
         characters++;
         }
     }
    if(characters > 0)
    {

        newline++;
    }
     
     printf("Total number of lines : %d\n",newline);
     printf("Total number of characters : %d\n",characters);
    return 0;
}
