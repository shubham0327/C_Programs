/**************
14. Write a C program to remove all occurrences of 
a character from string.
***************/

#include<stdio.h>

int main()
{
	char str[]= "Hello, World welcome c-programming";
    char ch='l';
    int i=0,j=0;
    for(i = 0; str[i] != '\0'; i++){
        if(str[i] == ch)
        {
            for(j=i; j<str[j]!='\0'; j++){
                str[j]=str[j+1];
            }
            i--;
        }
    }

    printf("String after removing %c Character = %s\n",ch,str);    
    return 0;
}