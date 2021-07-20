/**************
15. Write a C program to remove all repeated 
characters from a given string.
***************/

#include<stdio.h>

int main()
{
	char str[]= "Hello, World welcome c-programming";
    char ch='l';
    int i=0,j=0,k=0;
    for(i = 0; str[i] != '\0'; i++){
        for(j=i+1; str[j]!='\0'; j++)
        {
            if(str[i] == str[j])
            {
                for(k=j; j<str[k]!='\0'; k++){
                    str[k]=str[k+1];
                }
                j--;
            }
        }
    }

    printf("String after removing %c Character = %s\n",ch,str);    
    return 0;
}